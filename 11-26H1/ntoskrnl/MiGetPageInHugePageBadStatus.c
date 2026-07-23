/*
 * XREFs of MiGetPageInHugePageBadStatus @ 0x1406F0774
 * Callers:
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIsPageInHugePfn @ 0x140315910 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetPageInHugePageBadStatus(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15

  *a3 = 0;
  if ( !MiIsPageInHugePfn(a1) )
    return 3221225711LL;
  v7 = 0;
  v8 = (a1 >> 18) & 0x3FFFFF;
  v9 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v8);
  if ( v5 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    MiLockHugePfnAtDpc((__int64)v9);
  }
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EC90);
  if ( MiIsPageInHugePfn(a1) )
  {
    if ( (*v9 & 8) != 0 )
    {
      v11 = qword_140E2ECE0;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 24) & 0x3FFFFFLL;
        if ( v8 > v12 )
        {
          v11 = *(_QWORD *)(v11 + 8);
        }
        else
        {
          if ( v8 >= v12 )
            break;
          v11 = *(_QWORD *)v11;
        }
      }
      v13 = a1 & 0x3FFFF;
      if ( _bittest64(*(const signed __int64 **)(v11 + 32), v13) )
      {
        v7 = -1073740023;
        if ( (*v9 & 7) != 4 )
          v7 = 259;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v11 + 32) + 0x8000LL), v13) )
          *a3 = 1;
      }
    }
  }
  else
  {
    v7 = -1073741585;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
  if ( CurrentIrql != 17 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4
                                * (((((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
