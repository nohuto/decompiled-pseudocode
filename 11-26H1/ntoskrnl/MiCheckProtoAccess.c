/*
 * XREFs of MiCheckProtoAccess @ 0x14041EF60
 * Callers:
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  _DWORD *v3; // r15
  _KPROCESS *v5; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _KPROCESS *Process; // r9
  __int64 Flink; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  volatile signed __int32 *v22; // r8
  __int64 result; // rax
  char v24; // r8
  int v25; // ecx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  int v27; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = (_DWORD *)a2;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v5 = MiPteHasShadow();
    if ( v5 )
    {
      KernelWaitTime = v5[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v7 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v7 & 0x20) != 0 )
          v2 |= 0x20uLL;
        v8 = v2;
        v2 |= 0x42uLL;
        if ( (v7 & 0x42) == 0 )
          v2 = v8;
      }
    }
  }
  v9 = (v2 >> 5) & 0x1F;
  if ( (v2 & 0x400) != 0 && (v2 & 0x3FFFFFFFFFF000LL) == 0x3FFFFFFFFFF000LL )
  {
    v10 = 0LL;
    v27 = 0;
    v11 = (__int64)(a1 << 25) >> 16;
    if ( v11 >= 0x7FFFFFFF0000LL )
    {
LABEL_59:
      result = v10;
      *v3 = v9;
      return result;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v12 = v11 & 0x7FFFFFFFF000LL;
      if ( (v11 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        v10 = qword_140E2D7A8;
        goto LABEL_59;
      }
      if ( v12 == qword_140E2D7B8 && v12 )
      {
        v10 = qword_140E2D7B0;
        goto LABEL_59;
      }
    }
    v13 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v13);
      v15 = *v13 & 0x7FFFFFFF;
      v14 = _InterlockedCompareExchange(v13, v15 + 1, v15);
      if ( v15 != v14 )
      {
        while ( v14 >= 0 )
        {
          a2 = (unsigned int)v14;
          v14 = _InterlockedCompareExchange(v13, v14 + 1, v14);
          if ( v14 == (_DWORD)a2 )
            goto LABEL_29;
        }
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v13, a2, (__int64)v13);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, 0xFFu);
    }
LABEL_29:
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = (__int64)Process[3].Header.WaitListHead.Flink;
    if ( !Flink )
    {
      Flink = 0LL;
      goto LABEL_50;
    }
    v18 = v11 >> 12;
    if ( v11 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
      || (v19 = *(unsigned int *)(Flink + 28), v18 > (v19 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))) )
    {
      Flink = *(_QWORD *)&Process[3].Header.Lock;
      if ( !Flink )
        goto LABEL_40;
      do
      {
        v19 = *(unsigned int *)(Flink + 28);
        if ( v18 <= (v19 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          v19 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
          if ( v18 >= v19 )
            break;
          Flink = *(_QWORD *)Flink;
        }
        else
        {
          Flink = *(_QWORD *)(Flink + 8);
        }
      }
      while ( Flink );
      if ( !Flink )
      {
LABEL_40:
        Flink = 0LL;
LABEL_50:
        v22 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v22, 0xBFFFFFFF);
          _InterlockedDecrement(v22);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v22, retaddr);
        }
        if ( Flink )
        {
          v10 = MiCheckUserVirtualAddress(v11, Flink, 1, &v27);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd((volatile signed __int32 *)(Flink + 64), 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)(Flink + 64));
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(Flink + 64), retaddr);
          }
        }
        goto LABEL_59;
      }
      Process[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw((const void *)(Flink + 64));
      v21 = *(_DWORD *)(Flink + 64) & 0x7FFFFFFF;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v21 + 1, v21);
      if ( v21 != v20 )
      {
        while ( v20 >= 0 )
        {
          v19 = (unsigned int)v20;
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v20 + 1, v20);
          if ( v20 == (_DWORD)v19 )
            goto LABEL_50;
        }
        LOBYTE(v19) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(Flink + 64), v19, v18);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(Flink + 64), 0xFFu);
    }
    goto LABEL_50;
  }
  result = MiGetPrototypePteDirect(v2);
  v25 = 256;
  if ( (v24 & 8) != 0 )
    v25 = 1;
  *v3 = v25;
  return result;
}
