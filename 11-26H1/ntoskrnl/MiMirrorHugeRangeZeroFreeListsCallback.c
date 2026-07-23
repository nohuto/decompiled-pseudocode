/*
 * XREFs of MiMirrorHugeRangeZeroFreeListsCallback @ 0x1406F4890
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiMirrorAddPagesToBrownList @ 0x140485C4C (MiMirrorAddPagesToBrownList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiMirrorHugeRangeZeroFreeListsCallback(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // r15
  int v8; // edx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v13; // rcx
  unsigned __int16 v15; // [rsp+50h] [rbp+8h]

  v3 = *a1;
  v4 = a2 & 0x3FFFFF;
  v5 = *((_DWORD *)a1 + 4);
  v6 = a3;
  v8 = *(unsigned __int16 *)a1[1];
  v15 = *(_WORD *)a1[1];
  v9 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = *v9 & 7LL;
      if ( v10 != 1 && v10 != 2 )
        goto LABEL_22;
      v11 = (unsigned __int16)v8;
      if ( ((*v9 >> 4) & 0x7FFLL) != (unsigned __int16)v8 )
        goto LABEL_22;
      if ( v5 != 1 )
        break;
      if ( *a1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v8) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
        }
        MiLockHugePfnAtDpc((__int64)v9);
        if ( ((*v9 >> 4) & 0x7FFLL) == v11 )
        {
          v13 = *v9 & 7LL;
          if ( (v13 == 1 || v13 == 2) && (*v9 & 0x800000000000000LL) == 0 )
            MiMirrorAddPagesToBrownList(1, v4 & 0x3FFFFF, 1uLL);
        }
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                    + 4
                                    * (((((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        goto LABEL_21;
      }
LABEL_22:
      ++v9;
      LODWORD(v4) = (v4 + 1) ^ ((v4 + 1) ^ v4) & 0xFFC00000;
      if ( !--v6 )
        return 0LL;
    }
    MiMirrorOmitPagesFromCopy(v3, 1LL, v4 & 0x3FFFFF, 1LL);
LABEL_21:
    v8 = v15;
    goto LABEL_22;
  }
  return 0LL;
}
