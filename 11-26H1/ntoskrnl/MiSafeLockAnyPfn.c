/*
 * XREFs of MiSafeLockAnyPfn @ 0x140708378
 * Callers:
 *     MiReleaseScrubProtection @ 0x140710C10 (MiReleaseScrubProtection.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockAnyPfn(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // bl

  if ( (_DWORD)a2 != 1 )
    return MiSafeLockPage(a1, a2, a3);
  v3 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((a1 >> 18) & 0x3FFFFF));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiLockHugePfnAtDpc((__int64)v3);
  if ( (*v3 & 7) == 0 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4
                                * (((((__int64)v3 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v3 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 17;
  }
  return CurrentIrql;
}
