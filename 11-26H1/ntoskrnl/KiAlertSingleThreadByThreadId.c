/*
 * XREFs of KiAlertSingleThreadByThreadId @ 0x140382DF0
 * Callers:
 *     KeAlertMultipleThreadByThreadId @ 0x1405EE81C (KeAlertMultipleThreadByThreadId.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x140382CD0 (KiRemovePrcbWaitEntry.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 */

__int64 __fastcall KiAlertSingleThreadByThreadId(__int64 a1, __int64 a2, struct _KTHREAD *a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned __int8 v8; // di
  char v9; // cl
  int v10; // ecx
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  __int64 v15; // rax
  AutoBoost *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-8h]

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x10) != 0 )
  {
    v8 = 0;
    goto LABEL_21;
  }
  v8 = 1;
  if ( *(_BYTE *)(a2 + 388) != 5 )
    goto LABEL_33;
  v9 = *(_BYTE *)(a2 + 112);
  if ( (v9 & 7) == 4 || (v9 & 7) == 3 || *(_BYTE *)(a2 + 643) != 37 )
    goto LABEL_33;
  v10 = v9 & 7;
  if ( v10 != 1 && v10 != 4 )
  {
    *(_BYTE *)(a2 + 112) |= 0x80u;
LABEL_33:
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 4u);
    goto LABEL_21;
  }
  v11 = *(_QWORD *)(a2 + 232);
  if ( v11 )
  {
    if ( (*(_BYTE *)v11 & 0x7F) == 0x15 )
    {
      *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 4LL * *(unsigned int *)(a2 + 540) + 536));
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 40));
    }
  }
  KiRemovePrcbWaitEntry((_QWORD *)a2);
  v12 = *(_BYTE *)(a2 + 388);
  if ( v12 == 1 )
  {
    *(_DWORD *)(a2 + 116) |= 2u;
  }
  else if ( v12 == 5 )
  {
    v13 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
    if ( *(_BYTE *)(a2 + 391) )
      *(_QWORD *)(a2 + 1000) += v13;
    else
      *(_QWORD *)(a2 + 992) += v13;
  }
  *(_BYTE *)(a2 + 388) = 7;
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = a2 + 216;
  *(_QWORD *)(a2 + 200) = 257LL;
  *(_QWORD *)(a2 + 976) = 0LL;
  *(_BYTE *)(a2 + 112) |= 0x80u;
LABEL_21:
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a3 )
  {
    v15 = *(_QWORD *)(a1 + 11528);
    if ( v15 )
    {
      v16 = (AutoBoost *)(v15 - 216);
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPreWakeupByThread(v16, a3, (void *)1, a4);
      else
        LegacyAutoBoost::KiAbPreWakeupThread(v16, a3, a3, 1, v17);
    }
  }
  return v8;
}
