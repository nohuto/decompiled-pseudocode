/*
 * XREFs of MiLockAndMapEntireDriver @ 0x140873B54
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiPrepareDriverPatchState @ 0x14086A800 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MiLockAndMapEntireDriver(__int64 a1, __int64 *a2, struct _MDL **a3)
{
  struct _MDL *v4; // rbx
  __int64 *v7; // r14
  char *AnyMultiplexedVm; // rax
  int v9; // edi
  ULONG v10; // edx
  unsigned int v11; // esi
  PMDL Mdl; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rbp
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = 0;
  v4 = 0LL;
  v7 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = MiPrepareDriverPatchState(a2, (__int64)AnyMultiplexedVm);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    v11 = ((v10 & 0xFFF) != 0) + (v10 >> 12);
    if ( a3 )
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), v10, 0, 0, 0LL);
      v4 = Mdl;
      if ( !Mdl )
        return (unsigned int)-1073741670;
      v13 = 0LL;
      v7 = (__int64 *)&Mdl[1];
      if ( v11 )
      {
        if ( v11 < 2 || v7 <= &qword_140E36178 && &v7[v11 - 1] >= &qword_140E36178 )
          goto LABEL_12;
        v14 = v11 & 0xFFFFFFFE;
        do
          v13 = (unsigned int)(v13 + 2);
        while ( (unsigned int)v13 < (unsigned int)v14 );
        memset64(v7, qword_140E36178, (2 * (v14 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
        if ( (unsigned int)v13 < v11 )
        {
LABEL_12:
          v15 = &v7[v13];
          v16 = v11 - (unsigned int)v13;
          do
          {
            *v15++ = qword_140E36178;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    v9 = MiLockDriverPageRange((__int64)a2, 0, v11 - 1, 2, (__int64)v4);
    if ( v9 >= 0 && a3 )
    {
      v19 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v11, v17, v18);
      if ( v19 )
      {
        v9 = MiFillSystemPtes((_QWORD *)v19, v11, (__int64)v7, 4u, 2, &v21);
        v4->MdlFlags |= 1u;
        v4->MappedSystemVa = (PVOID)((__int64)(v19 << 25) >> 16);
        *a3 = v4;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
    }
    if ( v4 )
      IoFreeMdl(v4);
  }
  return (unsigned int)v9;
}
