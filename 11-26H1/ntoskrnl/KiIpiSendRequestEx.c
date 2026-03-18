/*
 * XREFs of KiIpiSendRequestEx @ 0x140329D60
 * Callers:
 *     KeInvalidateAllCaches @ 0x14024FCE0 (KeInvalidateAllCaches.c)
 *     KxFlushNonGlobalTb @ 0x140250FF0 (KxFlushNonGlobalTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1404B8E20 (KeInvalidateRangeAllCaches.c)
 *     KxFlushSingleTb @ 0x1405FC9F8 (KxFlushSingleTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiIpiSendRequest @ 0x140329ED0 (KiIpiSendRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int j; // ebx
  unsigned int k; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int16 i; // cx
  __int64 v16; // r10

  if ( !(_DWORD)a2 )
  {
    for ( i = 0; i < *a3; ++i )
    {
      v16 = *(_QWORD *)&a3[4 * i + 4];
      if ( v16 && (i != *(unsigned __int8 *)(a1 + 208) || v16 != *(_QWORD *)(a1 + 200)) )
        goto LABEL_3;
    }
    goto LABEL_27;
  }
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
  {
LABEL_27:
    result = a6;
    if ( a6 )
      return guard_dispatch_icall_no_overrides(a7, a2, a3);
    return result;
  }
LABEL_3:
  KiIpiSendRequest(a1, a2, (_DWORD)a3, a4, a5);
  if ( a6 )
    guard_dispatch_icall_no_overrides(a7, v8, v9);
  result = *(unsigned int *)(a1 + 11648);
  for ( j = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++j & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
    {
      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
      {
LABEL_19:
        HvlNotifyLongSpinWait(j);
        continue;
      }
      for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
      {
        v13 = KiProcessorBlock[k];
        if ( (*(_BYTE *)(v13 + 35) & 1) != 0 )
        {
          v14 = *(_QWORD *)(v13 + 36600);
          if ( !v14 || !*(_BYTE *)(v14 + 65) || !*(_BYTE *)(v14 + 64) )
            goto LABEL_19;
        }
      }
    }
    _mm_pause();
  }
  return result;
}
