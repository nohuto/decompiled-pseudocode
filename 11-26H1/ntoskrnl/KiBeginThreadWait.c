/*
 * XREFs of KiBeginThreadWait @ 0x1403CC710
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 * Callees:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiBeginThreadWait(ULONG_PTR BugCheckParameter1, char a2, int a3, __int64 a4, char a5)
{
  unsigned __int64 v5; // r15
  char v6; // bp
  unsigned int v7; // r14d
  unsigned int v9; // edi
  __int64 CurrentIrql; // rcx
  char v11; // si
  unsigned int v12; // edi
  bool v13; // zf
  __int64 result; // rax
  unsigned int i; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ecx
  struct _SINGLE_LIST_ENTRY v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v5 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
  v19.Next = 0LL;
  v6 = a4;
  v7 = a2;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) &= ~0x10u;
    *(_BYTE *)(BugCheckParameter1 + 112) = 0;
    *(_BYTE *)(BugCheckParameter1 + 391) = v7;
    if ( v6 )
      *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10u;
    v9 = 0;
LABEL_5:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      while ( 1 )
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_43:
            HvlNotifyLongSpinWait(v9);
            goto LABEL_8;
          }
          a4 = (unsigned int)KeNumberProcessors_0;
          for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
          {
            v16 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v16 + 35) & 1) != 0 )
            {
              v17 = *(_QWORD *)(v16 + 36600);
              if ( !v17 || !*(_BYTE *)(v17 + 65) || !*(_BYTE *)(v17 + 64) )
                goto LABEL_43;
            }
          }
        }
        _mm_pause();
LABEL_8:
        if ( !*(_QWORD *)(BugCheckParameter1 + 64) )
          goto LABEL_5;
      }
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 193) || *(_WORD *)(BugCheckParameter1 + 486) || (_BYTE)v5 )
      break;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *(_BYTE *)(BugCheckParameter1 + 390) = 0;
  }
  v11 = v20;
  if ( v6 )
  {
    v18 = *(unsigned __int8 *)(BugCheckParameter1 + 113);
    if ( _bittest(&v18, v7) )
    {
      v12 = 257;
      *(_BYTE *)(BugCheckParameter1 + 113) = v18 & ~(1 << v7);
    }
    else if ( !(_BYTE)v7 || *(_QWORD *)(BugCheckParameter1 + 168) == BugCheckParameter1 + 168 )
    {
      if ( (v18 & 1) != 0 )
      {
        v12 = 257;
        *(_BYTE *)(BugCheckParameter1 + 113) = v18 & 0xFE;
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      *(_BYTE *)(BugCheckParameter1 + 194) |= 2u;
      v12 = 192;
    }
    if ( v12 )
      goto LABEL_24;
LABEL_33:
    *(_BYTE *)(BugCheckParameter1 + 388) = 5;
    *(_BYTE *)(BugCheckParameter1 + 643) = v11;
    *(_DWORD *)(BugCheckParameter1 + 436) = MEMORY[0xFFFFF78000000320];
    result = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    return result;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 194) & 2) == 0 || !(_BYTE)v7 )
    goto LABEL_33;
  v12 = 192;
LABEL_24:
  if ( (a5 & 2) != 0 )
  {
    KiClearPriorityFloor(BugCheckParameter1, &v19, *(char *)(BugCheckParameter1 + 795), 1);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
  }
  v13 = (a5 & 1) == 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( v13 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
    return v12;
  }
  else
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v19, (unsigned __int8)v5, a4);
    return v12;
  }
}
