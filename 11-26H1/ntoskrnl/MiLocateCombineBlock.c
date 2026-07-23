/*
 * XREFs of MiLocateCombineBlock @ 0x140463060
 * Callers:
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiLocateCombineBlock(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  __int64 *v5; // rsi
  volatile LONG *v6; // r14
  KIRQL v10; // bp
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v6 = (volatile LONG *)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( a4 )
    v10 = 17;
  else
    v10 = ExAcquireSpinLockShared(v6 + 2);
  v11 = *(__int64 **)v6;
  if ( !*(_QWORD *)v6 )
    goto LABEL_19;
  while ( 1 )
  {
    if ( a2 > v11[3] )
    {
LABEL_13:
      v11 = (__int64 *)v11[1];
      goto LABEL_14;
    }
    if ( a2 >= v11[3] )
    {
      if ( a3 > ((_DWORD)v11[6] & 0x1Fu) )
        goto LABEL_13;
      if ( a3 >= ((_DWORD)v11[6] & 0x1Fu) )
      {
        if ( !a5 )
          break;
        if ( *a5 > (unsigned __int64)v11[8] )
          goto LABEL_13;
        if ( *a5 >= (unsigned __int64)v11[8] )
          break;
      }
    }
    v11 = (__int64 *)*v11;
LABEL_14:
    if ( !v11 )
      goto LABEL_19;
  }
  if ( !v11[7] )
    v11 = 0LL;
  v5 = v11;
LABEL_19:
  if ( a4 )
    return v5;
  v12 = v6 + 2;
  if ( v10 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
    return v5;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v12, 0xBFFFFFFF);
    _InterlockedDecrement(v12);
    return v5;
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    return v5;
  }
}
