/*
 * XREFs of PsGetJobProperty @ 0x140457450
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 **v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 *v7; // rcx
  __int64 *v8; // r15
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1;
  v4 = 0LL;
  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 0LL;
  }
  if ( a1 )
  {
    while ( 1 )
    {
      v5 = (__int64 **)(v3 + 1512);
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 1528), 0LL) )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v3 + 1528));
      }
      else
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v3 + 1528));
      }
      v7 = *v5;
      v8 = 0LL;
      while ( v7 != (__int64 *)v5 )
      {
        if ( v7[2] == a2 )
        {
          v8 = v7;
          ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
          break;
        }
        v7 = (__int64 *)*v7;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 1528), 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v3 + 1528), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( v8 )
        return v8[3];
      v3 = *(_QWORD *)(v3 + 1304);
      if ( !v3 )
        return v4;
    }
  }
  return v4;
}
