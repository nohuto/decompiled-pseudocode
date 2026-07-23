/*
 * XREFs of ApiSetpResolveHost @ 0x14051F22C
 * Callers:
 *     ApiSetResolveToHost @ 0x14052B7C8 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpIsFeatureEnabled @ 0x1406DF2D8 (ApiSetpIsFeatureEnabled.c)
 *     ApiSetpGetSearchKeyHash @ 0x1406DF524 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1406DF6F4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  unsigned __int16 v8; // ax
  char v9; // r15
  unsigned __int16 v10; // ax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r10
  unsigned __int16 v19; // r9
  char v20; // al
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rsi
  __int64 v25; // r14
  char v26; // al
  unsigned __int64 v27; // rcx
  bool v28; // al
  unsigned __int16 v29; // ax
  int v30; // edx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rsi
  __int64 v34; // r14
  unsigned __int64 v35; // rdx
  __int16 v36; // ax
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v41; // [rsp+20h] [rbp-40h]
  __int128 v42; // [rsp+30h] [rbp-30h] BYREF
  __int128 v43; // [rsp+40h] [rbp-20h]
  __int64 v44; // [rsp+50h] [rbp-10h]

  v8 = a3;
  v44 = 0LL;
  LOBYTE(a3) = 1;
  *(_OWORD *)a7 = 0LL;
  v9 = 0;
  v42 = 0LL;
  v43 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v8, a3, &v42) )
    goto LABEL_28;
  if ( HIDWORD(v42) == 1 )
  {
    v29 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v42);
    if ( v29 == 0xFFFF )
      goto LABEL_28;
    v13 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v30) = 1;
    v33 = *(unsigned int *)(a1 + 44);
    LOBYTE(v32) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v31) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v34 = a1 + v29 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52) - v13;
    if ( *(_DWORD *)(v33 + v34) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v42,
                                                   v30,
                                                   v31,
                                                   v32,
                                                   *(_BYTE *)(a1 + 55)) )
      goto LABEL_28;
    v17 = *(_WORD *)(v33 + v34 + 8);
    v18 = *(_WORD *)(v33 + v34 + 4);
    v19 = *(_WORD *)(v33 + v34 + 6);
    v20 = *(_BYTE *)(v33 + v34 + 10);
    goto LABEL_21;
  }
  if ( HIDWORD(v42) != 2 )
  {
    if ( HIDWORD(v42) != 3 )
      goto LABEL_28;
    v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v42);
    if ( v10 == 0xFFFF )
      goto LABEL_28;
    v13 = *(unsigned __int16 *)(a1 + 18);
    v14 = *(unsigned int *)(a1 + 68);
    LOBYTE(v12) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v15 = a1 + v10 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v13;
    if ( *(_DWORD *)(v14 + v15) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v42,
                                                   0,
                                                   v11,
                                                   v12,
                                                   *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v14 + v15 + 10) & 4) != 0 && (unsigned int)WORD4(v43) > *(unsigned __int8 *)(v14 + v15 + 9) )
    {
      goto LABEL_28;
    }
    v16 = *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v14 + v15 + 4)
        - v13;
    v17 = *(_WORD *)(v16 + a1 + 8);
    v18 = *(_WORD *)(v16 + a1 + 4);
    v19 = *(_WORD *)(v16 + a1 + 6);
    v20 = *(_BYTE *)(v16 + a1 + 10);
LABEL_21:
    v28 = (v20 & 2) != 0;
    goto LABEL_22;
  }
  v9 = 1;
  v21 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v42);
  if ( v21 != 0xFFFF )
  {
    v24 = *(unsigned int *)(a1 + 56);
    LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v25 = a1 + v21 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)(v24 + v25) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v42,
                                                   0,
                                                   v22,
                                                   v23,
                                                   *(_BYTE *)(a1 + 67)) )
    {
      v9 = 0;
      goto LABEL_28;
    }
    v26 = *(_BYTE *)(v24 + v25 + 6);
    if ( (v26 & 4) == 0 || (v26 & 2) == 0 && (!*(_DWORD *)(v24 + v25 + 8) || (unsigned __int8)ApiSetpIsFeatureEnabled()) )
    {
      LOWORD(v13) = *(_WORD *)(a1 + 18);
      v27 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v24 + v25 + 4)
          - (unsigned __int16)v13;
      v17 = *(_WORD *)(v27 + a1 + 8);
      v18 = *(_WORD *)(v27 + a1 + 4);
      v19 = *(_WORD *)(v27 + a1 + 6);
      v28 = (*(_BYTE *)(v27 + a1 + 10) & 2) != 0;
LABEL_22:
      v9 = 1;
      if ( v28 )
      {
        v35 = *(unsigned int *)(a1 + 92)
            + v18 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v13;
        if ( *(_BYTE *)(v35 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v35 + a1 + 4)
                              - (unsigned __int64)(unsigned __int16)v13
                              + *(unsigned int *)(a1 + 36);
          v36 = 2 * *(_WORD *)(v35 + a1 + 8);
          *(_WORD *)a7 = v36;
          *(_WORD *)(a7 + 2) = v36;
          if ( a5 )
          {
            if ( v17 )
            {
              LOWORD(v41) = *(_WORD *)a5 >> 1;
              v37 = ApiSetpSearchForHostOverrideIndex_V7(a1, v19, v17, *(_QWORD *)(a5 + 8), v41);
              if ( v37 != 0xFFFF )
              {
                v38 = *(unsigned __int16 *)(a1 + 18);
                v39 = *(unsigned int *)(a1 + 104) + v37 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v38;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v39 + a1 + 8) - v38 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v39 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v39 + a1 + 14);
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  *a6 = v9;
  return 0LL;
}
