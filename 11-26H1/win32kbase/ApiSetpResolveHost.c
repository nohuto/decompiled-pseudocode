/*
 * XREFs of ApiSetpResolveHost @ 0x1401B7DF0
 * Callers:
 *     ApiSetResolveToHost @ 0x1401B7CC4 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x140249648 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1402498A8 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x140249990 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char v8; // si
  unsigned __int16 v9; // ax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int16 v16; // r8
  char v17; // al
  unsigned __int16 v18; // ax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  char v24; // al
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // r14
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  __int16 v33; // ax
  __int128 v35; // [rsp+30h] [rbp-30h] BYREF
  __int128 v36; // [rsp+40h] [rbp-20h]
  __int64 v37; // [rsp+50h] [rbp-10h]

  v37 = 0LL;
  v8 = 0;
  *(_OWORD *)a7 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v35) )
    goto LABEL_24;
  if ( HIDWORD(v35) == 1 )
  {
    v26 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v35);
    if ( v26 == 0xFFFF )
      goto LABEL_24;
    v21 = *(unsigned __int16 *)(a1 + 18);
    v30 = *(unsigned int *)(a1 + 44);
    LOBYTE(v27) = 1;
    LOBYTE(v29) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v28) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v31 = a1 + v26 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52) - v21;
    if ( *(_DWORD *)(v30 + v31) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v35,
                                                   v27,
                                                   v28,
                                                   v29,
                                                   *(_BYTE *)(a1 + 55)) )
      goto LABEL_24;
    v16 = *(_WORD *)(v30 + v31 + 4);
    v17 = *(_BYTE *)(v30 + v31 + 10);
    goto LABEL_20;
  }
  if ( HIDWORD(v35) != 2 )
  {
    if ( HIDWORD(v35) != 3 )
      goto LABEL_24;
    v9 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v35);
    if ( v9 == 0xFFFF )
      goto LABEL_24;
    v12 = *(unsigned __int16 *)(a1 + 18);
    v13 = *(unsigned int *)(a1 + 68);
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v10) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v14 = a1 + v9 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v12;
    if ( *(_DWORD *)(v13 + v14) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v35,
                                                   0,
                                                   v10,
                                                   v11,
                                                   *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v13 + v14 + 10) & 4) != 0 && (unsigned int)WORD4(v36) > *(unsigned __int8 *)(v13 + v14 + 9) )
    {
      goto LABEL_24;
    }
    v15 = *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v13 + v14 + 4)
        - v12;
    v16 = *(_WORD *)(v15 + a1 + 4);
    v17 = *(_BYTE *)(v15 + a1 + 10);
    goto LABEL_21;
  }
  v8 = 1;
  v18 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v35);
  if ( v18 != 0xFFFF )
  {
    v21 = *(unsigned __int16 *)(a1 + 18);
    v22 = *(unsigned int *)(a1 + 56);
    LOBYTE(v20) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v19) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v23 = a1 + v18 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - v21;
    if ( *(_DWORD *)(v22 + v23) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v35,
                                                   0,
                                                   v19,
                                                   v20,
                                                   *(_BYTE *)(a1 + 67)) )
    {
      v8 = 0;
      goto LABEL_24;
    }
    v24 = *(_BYTE *)(v22 + v23 + 6);
    if ( (v24 & 4) == 0 || (v24 & 2) == 0 && !*(_DWORD *)(v22 + v23 + 8) )
    {
      v25 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v22 + v23 + 4)
          - v21;
      v16 = *(_WORD *)(v25 + a1 + 4);
      v17 = *(_BYTE *)(v25 + a1 + 10);
LABEL_20:
      LOWORD(v12) = v21;
LABEL_21:
      v8 = 1;
      if ( (v17 & 2) != 0 )
      {
        v32 = *(unsigned int *)(a1 + 92)
            + v16 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v12;
        if ( *(_BYTE *)(v32 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(a1 + 36)
                              + (unsigned __int64)*(unsigned int *)(v32 + a1 + 4)
                              - (unsigned __int16)v12;
          v33 = 2 * *(_WORD *)(v32 + a1 + 8);
          *(_WORD *)a7 = v33;
          *(_WORD *)(a7 + 2) = v33;
        }
      }
    }
  }
LABEL_24:
  *a6 = v8;
  return 0LL;
}
