/*
 * XREFs of MiPerformSafePdeWrite @ 0x14043A640
 * Callers:
 *     MiGetWsAndMakePageTablesNx @ 0x14043A570 (MiGetWsAndMakePageTablesNx.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

signed __int64 __fastcall MiPerformSafePdeWrite(__int64 a1, unsigned __int64 a2, signed __int64 a3, char a4)
{
  int v7; // r15d
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebp
  LONG i; // edx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // r8d
  signed __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  _KPROCESS *v19; // rax
  __int64 v20; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  int v24; // edx
  int v25; // r8d
  int v26; // r14d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v31; // [rsp+50h] [rbp+8h]

  v7 = 0;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v7 = 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = 0;
      if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
      for ( i = dword_140E36200; (dword_140E36200 & 0xBFFFFFFF) != 0x80000000; i = dword_140E36200 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(&dword_140E36200, 0x40000000u);
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, 0xFFu);
    }
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (a4 & 1) != 0 )
      a3 |= 0x20uLL;
    if ( (a4 & 2) != 0 )
      a3 |= 0x8000000000000000uLL;
    if ( (a4 & 4) != 0 )
      a3 |= 4uLL;
    v11 = *(_QWORD *)a2;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBED7F8uLL )
    {
      v12 = 0xFFFFF6FB7DBED7F8uLL;
    }
    else
    {
      v12 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v19 = MiPteHasShadow();
        if ( v19 )
        {
          KernelWaitTime = v19[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v22 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v20 |= 0x20uLL;
            v11 = v20 | 0x42;
            if ( (v22 & 0x42) == 0 )
              v11 = v20;
          }
        }
      }
    }
    v13 = v11 ^ (a3 ^ v11) & 0x80FFFFFFFFFFFFFFuLL;
    v14 = 0;
    v31 = v13;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > v12 )
      goto LABEL_27;
    result = (signed __int64)MiPteHasShadow();
    if ( result )
    {
      v14 = 1;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
      {
        result = v31;
        if ( (v31 & 1) != 0 )
          goto LABEL_58;
      }
    }
    else
    {
      result = HIDWORD(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]);
      if ( (result & 0x1000) != 0 )
      {
        result = v31;
        if ( (v31 & 1) != 0 )
LABEL_58:
          v13 = v23 | result;
      }
    }
LABEL_27:
    *(_QWORD *)a2 = v13;
    if ( v14 )
    {
      result = (signed __int64)MiPteHasShadow();
      if ( result )
      {
        v17 = *(_QWORD *)(result + 1288);
        if ( v17 )
        {
          v18 = (a2 >> 3) & 0x1FF;
          result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v16 & 1) != 0 )
            result = v16 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v17 + 8 * v18) = result;
        }
      }
    }
    goto LABEL_33;
  }
  v24 = a4 & 1;
  v25 = a4 & 2;
  v26 = a4 & 4;
  while ( 1 )
  {
    v27 = a3 | 0x20;
    if ( !v24 )
      v27 = a3;
    v28 = v27 | 0x8000000000000000uLL;
    if ( !v25 )
      v28 = v27;
    v29 = v28 | 4;
    if ( !v26 )
      v29 = v28;
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v29, a3);
    if ( a3 == result )
      break;
    a3 = result;
  }
LABEL_33:
  if ( v7 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      dword_140E36200 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
    }
  }
  return result;
}
