/*
 * XREFs of MiUpdateBadPfnIdentity @ 0x1406F6DF4
 * Callers:
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406F0774 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MiUpdateBadPfnIdentity(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // r15d
  __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rdi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  if ( MiIsPageInHugePfn(a1) )
  {
    v7 = 0;
    v15 = 0;
    v8 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((a1 >> 18) & 0x3FFFFF);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
    }
    MiLockHugePfnAtDpc(v8);
    if ( (unsigned int)MiGetPageInHugePageBadStatus(a1, 1LL, &v15) == 259 )
    {
      if ( v15 )
        *a2 |= 0x80uLL;
      v7 = 1;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4 * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return v7;
  }
  else
  {
    v11 = 48 * a1 - 0x220000000000LL;
    v12 = MiSafeLockPage(a1, v5, v6);
    v13 = v12;
    if ( v12 == 17 )
    {
      return 0LL;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 32) & 0x40000000) != 0 )
      {
        MiIdentifyPfn(a1, 0LL, a2);
        v14 = *a2 | 0x80;
        if ( *(int *)(v11 + 32) >= 0 )
          v14 = *a2 & 0xFFFFFFFFFFFFFF7FuLL;
        *a2 = v14;
      }
      else
      {
        v4 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v13 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
        __writecr8(v13);
      }
      return v4;
    }
  }
}
