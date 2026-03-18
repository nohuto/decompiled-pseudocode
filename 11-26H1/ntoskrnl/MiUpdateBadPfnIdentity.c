/*
 * XREFs of MiUpdateBadPfnIdentity @ 0x1406F2184
 * Callers:
 *     MiQueryBadAddresses @ 0x140869F40 (MiQueryBadAddresses.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIdentifyPfn @ 0x1402F0EF0 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiIsPageInHugePfn @ 0x1403138E0 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406EBAD4 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MiUpdateBadPfnIdentity(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  if ( MiIsPageInHugePfn(a1) )
  {
    v6 = 0;
    v14 = 0;
    v7 = *(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * ((a1 >> 18) & 0x3FFFFF);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    MiLockHugePfnAtDpc(v7);
    if ( (unsigned int)MiGetPageInHugePageBadStatus(a1, 1LL, &v14) == 259 )
    {
      if ( v14 )
        *a2 |= 0x80uLL;
      v6 = 1;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                + 4 * ((((v7 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((v7 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return v6;
  }
  else
  {
    v10 = 48 * a1 - 0x220000000000LL;
    v11 = MiSafeLockPage(a1, v5);
    v12 = v11;
    if ( v11 == 17 )
    {
      return 0LL;
    }
    else
    {
      if ( (*(_DWORD *)(v10 + 32) & 0x40000000) != 0 )
      {
        MiIdentifyPfn(a1, 0LL, a2);
        v13 = *a2 | 0x80;
        if ( *(int *)(v10 + 32) >= 0 )
          v13 = *a2 & 0xFFFFFFFFFFFFFF7FuLL;
        *a2 = v13;
      }
      else
      {
        v4 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v12 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
        __writecr8(v12);
      }
      return v4;
    }
  }
}
