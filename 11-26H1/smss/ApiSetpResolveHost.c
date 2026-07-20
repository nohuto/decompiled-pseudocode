/*
 * XREFs of ApiSetpResolveHost @ 0x14001955C
 * Callers:
 *     ApiSetResolveToHost @ 0x1400084BC (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpIsFeatureEnabled @ 0x1400198F8 (ApiSetpIsFeatureEnabled.c)
 *     ApiSetpGetContractKeyInfo @ 0x14001A2E4 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x14001A540 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x14001A62C (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14001A6D8 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char v8; // r14
  unsigned __int16 v9; // ax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r15
  __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // r9
  char v18; // al
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // ax
  int v21; // r8d
  int v22; // r9d
  char v23; // al
  unsigned __int16 v24; // ax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // r12
  unsigned __int64 v31; // rdx
  __int16 v32; // ax
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v37; // [rsp+20h] [rbp-40h]
  unsigned __int16 v38; // [rsp+30h] [rbp-30h]
  __int128 v39; // [rsp+38h] [rbp-28h] BYREF
  __int128 v40; // [rsp+48h] [rbp-18h]
  __int64 v41; // [rsp+58h] [rbp-8h]

  v41 = 0LL;
  *(_OWORD *)a7 = 0LL;
  v8 = 0;
  v39 = 0LL;
  v40 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v39) )
    goto LABEL_27;
  if ( HIDWORD(v39) == 1 )
  {
    v24 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v39);
    if ( v24 == 0xFFFF )
      goto LABEL_27;
    v27 = *(unsigned __int16 *)(a1 + 18);
    v28 = *(unsigned int *)(a1 + 44);
    v29 = v24 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52) - v27;
    LOBYTE(v26) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v38 = *(_WORD *)(a1 + 18);
    LOBYTE(v25) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    LOBYTE(v27) = 1;
    v30 = a1 + v29;
    if ( *(_DWORD *)(v28 + v30) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v39,
                                                   v27,
                                                   v25,
                                                   v26,
                                                   *(_BYTE *)(a1 + 55)) )
      goto LABEL_27;
    v15 = *(_WORD *)(v28 + v30 + 8);
    v16 = *(_WORD *)(v28 + v30 + 4);
    v17 = *(_WORD *)(v28 + v30 + 6);
    v18 = *(_BYTE *)(v28 + v30 + 10);
    v19 = v38;
    goto LABEL_21;
  }
  if ( HIDWORD(v39) != 2 )
  {
    if ( HIDWORD(v39) != 3 )
      goto LABEL_27;
    v9 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v39);
    if ( v9 == 0xFFFF )
      goto LABEL_27;
    v12 = *(unsigned int *)(a1 + 68);
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v10) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v13 = a1 + v9 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - *(unsigned __int16 *)(a1 + 18);
    if ( *(_DWORD *)(v12 + v13) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v39,
                                                   0,
                                                   v10,
                                                   v11,
                                                   *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v12 + v13 + 10) & 4) != 0 && (unsigned int)WORD4(v40) > *(unsigned __int8 *)(v12 + v13 + 9) )
    {
      goto LABEL_27;
    }
    goto LABEL_9;
  }
  v8 = 1;
  v20 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v39);
  if ( v20 != 0xFFFF )
  {
    v12 = *(unsigned int *)(a1 + 56);
    LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v13 = a1 + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v21) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)(v12 + v13) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v39,
                                                   0,
                                                   v21,
                                                   v22,
                                                   *(_BYTE *)(a1 + 67)) )
    {
      v8 = 0;
      goto LABEL_27;
    }
    v23 = *(_BYTE *)(v12 + v13 + 6);
    if ( (v23 & 4) == 0 || (v23 & 2) == 0 && (!*(_DWORD *)(v12 + v13 + 8) || (unsigned __int8)ApiSetpIsFeatureEnabled()) )
    {
LABEL_9:
      v14 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v12 + v13 + 4)
          - *(unsigned __int16 *)(a1 + 18);
      v15 = *(_WORD *)(v14 + a1 + 8);
      v16 = *(_WORD *)(v14 + a1 + 4);
      v17 = *(_WORD *)(v14 + a1 + 6);
      v18 = *(_BYTE *)(v14 + a1 + 10);
      v19 = *(_WORD *)(a1 + 18);
LABEL_21:
      v8 = 1;
      if ( (v18 & 2) != 0 )
      {
        v31 = *(unsigned int *)(a1 + 92) + v16 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v19;
        if ( *(_BYTE *)(v31 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v31 + a1 + 4)
                              - (unsigned __int64)v19
                              + *(unsigned int *)(a1 + 36);
          v32 = 2 * *(_WORD *)(v31 + a1 + 8);
          *(_WORD *)a7 = v32;
          *(_WORD *)(a7 + 2) = v32;
          if ( a5 )
          {
            if ( v15 )
            {
              LOWORD(v37) = *(_WORD *)a5 >> 1;
              v33 = ApiSetpSearchForHostOverrideIndex_V7(a1, v17, v15, *(_QWORD *)(a5 + 8), v37);
              if ( v33 != 0xFFFF )
              {
                v34 = *(unsigned __int16 *)(a1 + 18);
                v35 = *(unsigned int *)(a1 + 104) + v33 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v34;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v35 + a1 + 8) - v34 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v35 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v35 + a1 + 14);
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  *a6 = v8;
  return 0LL;
}
