/*
 * XREFs of ApiSetpResolveHost @ 0x180031880
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetResolveToHost @ 0x1800E5874 (ApiSetResolveToHost.c)
 *     ApiSetResolveToHostA_V7 @ 0x18013B524 (ApiSetResolveToHostA_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x1800E7488 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x180104824 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpGetSearchKeyHash @ 0x1801171E0 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1801172CC (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpIsFeatureEnabled @ 0x18013B6A0 (ApiSetpIsFeatureEnabled.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, char *a6, __int64 a7)
{
  unsigned __int16 v8; // r10
  char v9; // r12
  unsigned __int16 v10; // ax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r10
  unsigned __int16 v18; // r9
  char v19; // al
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  char v24; // al
  unsigned __int16 v25; // ax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  __int16 v33; // ax
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // [rsp+20h] [rbp-40h]
  unsigned __int16 v39; // [rsp+30h] [rbp-30h]
  __int128 v40; // [rsp+38h] [rbp-28h] BYREF
  __int128 v41; // [rsp+48h] [rbp-18h]
  __int64 v42; // [rsp+58h] [rbp-8h]

  v8 = a3;
  v42 = 0LL;
  LOBYTE(a3) = a4;
  v9 = 0;
  *(_OWORD *)a7 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v8, a3, &v40) )
    goto LABEL_27;
  if ( HIDWORD(v40) == 1 )
  {
    v25 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v40);
    if ( v25 == 0xFFFF )
      goto LABEL_27;
    v28 = *(unsigned __int16 *)(a1 + 18);
    v29 = *(unsigned int *)(a1 + 44);
    v30 = v25 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52) - v28;
    LOBYTE(v27) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v39 = *(_WORD *)(a1 + 18);
    LOBYTE(v26) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    LOBYTE(v28) = 1;
    v31 = a1 + v30;
    if ( *(_DWORD *)(v29 + v31) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v40,
                                                   v28,
                                                   v26,
                                                   v27,
                                                   *(_BYTE *)(a1 + 55)) )
      goto LABEL_27;
    v16 = *(_WORD *)(v29 + v31 + 8);
    v17 = *(_WORD *)(v29 + v31 + 4);
    v18 = *(_WORD *)(v29 + v31 + 6);
    v19 = *(_BYTE *)(v29 + v31 + 10);
    v20 = v39;
    goto LABEL_21;
  }
  if ( HIDWORD(v40) != 2 )
  {
    if ( HIDWORD(v40) != 3 )
      goto LABEL_27;
    v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v40);
    if ( v10 == 0xFFFF )
      goto LABEL_27;
    v13 = *(unsigned int *)(a1 + 68);
    LOBYTE(v12) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v14 = a1 + v10 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - *(unsigned __int16 *)(a1 + 18);
    if ( *(_DWORD *)(v13 + v14) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v40,
                                                   0,
                                                   v11,
                                                   v12,
                                                   *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v13 + v14 + 10) & 4) != 0 && (unsigned int)WORD4(v41) > *(unsigned __int8 *)(v13 + v14 + 9) )
    {
      goto LABEL_27;
    }
    goto LABEL_9;
  }
  v9 = 1;
  v21 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v40);
  if ( v21 != 0xFFFF )
  {
    v13 = *(unsigned int *)(a1 + 56);
    LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v14 = a1 + v21 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)(v13 + v14) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                   (unsigned int)&v40,
                                                   0,
                                                   v22,
                                                   v23,
                                                   *(_BYTE *)(a1 + 67)) )
    {
      v9 = 0;
      goto LABEL_27;
    }
    v24 = *(_BYTE *)(v13 + v14 + 6);
    if ( (v24 & 4) == 0 || (v24 & 2) == 0 && (!*(_DWORD *)(v13 + v14 + 8) || (unsigned __int8)ApiSetpIsFeatureEnabled()) )
    {
LABEL_9:
      v15 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v13 + v14 + 4)
          - *(unsigned __int16 *)(a1 + 18);
      v16 = *(_WORD *)(v15 + a1 + 8);
      v17 = *(_WORD *)(v15 + a1 + 4);
      v18 = *(_WORD *)(v15 + a1 + 6);
      v19 = *(_BYTE *)(v15 + a1 + 10);
      v20 = *(_WORD *)(a1 + 18);
LABEL_21:
      v9 = 1;
      if ( (v19 & 2) != 0 )
      {
        v32 = *(unsigned int *)(a1 + 92) + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v20;
        if ( *(_BYTE *)(v32 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v32 + a1 + 4)
                              - (unsigned __int64)v20
                              + *(unsigned int *)(a1 + 36);
          v33 = 2 * *(_WORD *)(v32 + a1 + 8);
          *(_WORD *)a7 = v33;
          *(_WORD *)(a7 + 2) = v33;
          if ( a5 )
          {
            if ( v16 )
            {
              LOWORD(v38) = *(_WORD *)a5 >> 1;
              v34 = ApiSetpSearchForHostOverrideIndex_V7(a1, v18, v16, *(_QWORD *)(a5 + 8), v38);
              if ( v34 != 0xFFFF )
              {
                v35 = *(unsigned __int16 *)(a1 + 18);
                v36 = *(unsigned int *)(a1 + 104) + v34 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v35;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v36 + a1 + 8) - v35 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v36 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v36 + a1 + 14);
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  *a6 = v9;
  return 0LL;
}
