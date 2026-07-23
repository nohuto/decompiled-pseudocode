/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x140604774
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1406043C0 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     PpmCheckIdleVeto @ 0x1406041D8 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x140604244 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140605104 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140605474 (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int16 *v17; // r10
  unsigned __int16 *v18; // r9
  unsigned __int16 *v19; // rbx
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // r8
  unsigned __int16 v22; // r14
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  unsigned __int64 v30[9]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+8h]
  unsigned int v33; // [rsp+D8h] [rbp+30h]

  v12 = PpmPlatformStates;
  v13 = *(_QWORD *)(a1 + 34880);
  v14 = 448LL * a6;
  v30[0] = 0LL;
  v15 = v13 + 336;
  v31 = v13 + 336;
  v33 = *(_DWORD *)(a9 + 4);
  if ( a10 )
    *a10 = -1LL;
  if ( *(_BYTE *)(v14 + v12 + 121) )
  {
    if ( !*(_BYTE *)(v13 + 716) )
    {
      v16 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_43:
      PpmIdleRollbackCoordinatedSelection(a9, v33);
      return v16;
    }
  }
  else
  {
    v17 = (unsigned __int16 *)(v13 + 720);
    v18 = (unsigned __int16 *)(v14 + v12 + 128);
    v19 = v17;
    v20 = 0;
    v21 = *v18;
    v22 = *v17;
    if ( *v18 >= *v17 )
    {
      v22 = *v18;
      v19 = (unsigned __int16 *)(v14 + v12 + 128);
      v21 = *v17;
    }
    while ( v20 < v21 )
    {
      v23 = *(_QWORD *)&v18[4 * v20 + 4];
      if ( (v23 & *(_QWORD *)&v17[4 * v20 + 4]) != v23 )
        goto LABEL_42;
      ++v20;
    }
    if ( v19 != v17 )
    {
      while ( v20 < v22 )
      {
        if ( *(_QWORD *)&v18[4 * v20 + 4] )
          goto LABEL_42;
        ++v20;
      }
    }
    v15 = v31;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v14 + v12 + 416),
         (a7 << 27) | 0x1000000 | KeGetPcr()->Prcb.Number & 0xFFF,
         0) )
  {
LABEL_42:
    v16 = 0xFFFFFFFFLL;
    goto LABEL_43;
  }
  *(_DWORD *)(*(_QWORD *)(a9 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a9 + 4))++) = a6;
  if ( !*(_BYTE *)(v14 + v12 + 122) )
  {
    v16 = 2147483658LL;
    goto LABEL_43;
  }
  v24 = PpmCheckIdleVeto(v14 + v12 + 80);
  if ( v24 )
  {
    v16 = v24 | 0x100000000LL;
    goto LABEL_43;
  }
  if ( (unsigned int)(v26 + *(_DWORD *)(v14 + v12 + 72)) > *(_DWORD *)(v27 + 34952) )
  {
    v16 = 2147483650LL;
    goto LABEL_43;
  }
  if ( *(_DWORD *)(v14 + v12 + 448) )
    goto LABEL_24;
  if ( *(unsigned int *)(v14 + v12 + 76) > a4 )
  {
    v16 = 2147483651LL;
    goto LABEL_43;
  }
  v16 = PpmIdleCheckCoordinatedDependencies(
          v27,
          a2,
          v25,
          *(_DWORD *)(v14 + v12 + 72) + v26,
          a4,
          a5,
          *(_DWORD *)(v14 + v12 + 124),
          *(_QWORD *)(v14 + v12 + 408),
          (__int64)a8,
          a9,
          v15,
          v30);
  if ( v16 )
    goto LABEL_43;
  if ( v30[0] != -1LL )
  {
    if ( a5 <= v30[0] )
      v28 = v30[0] - a5;
    else
      v28 = 0LL;
    if ( *(unsigned int *)(v14 + v12 + 76) > v28 )
    {
      v16 = 2147483662LL;
      goto LABEL_43;
    }
    if ( a10 )
      *a10 = v30[0];
  }
  if ( *a8 == -1 )
  {
    v16 = 2147483649LL;
    goto LABEL_43;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v31) < 0 )
  {
    v16 = 2147483653LL;
    goto LABEL_43;
  }
  if ( *(_DWORD *)(v14 + v12 + 448) )
  {
LABEL_24:
    v16 = 2147483652LL;
    goto LABEL_43;
  }
  return v16;
}
