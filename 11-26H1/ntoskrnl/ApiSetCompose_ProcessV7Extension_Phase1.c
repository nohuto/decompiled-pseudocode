/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1406DEC64
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForApiSetA @ 0x1406DD58C (ApiSetpSearchForApiSetA.c)
 *     ApiSetpGetSearchKeyHash @ 0x1406DF524 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x1406DFB74 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406DFBF8 (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x1406DFC70 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406DFCF4 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406DFDEC (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase1(__int64 a1, __int64 a2)
{
  __int16 v3; // cx
  int inserted; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r13
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // rsi
  char v19; // cl
  char v20; // al
  char v21; // cl
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // al
  __int64 v30; // rcx
  __int16 v31; // r10
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int16 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int16 v44; // r11
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // r10
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r10
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // eax
  int v63; // [rsp+30h] [rbp-50h]
  __int64 v64; // [rsp+30h] [rbp-50h]
  __int128 v65; // [rsp+38h] [rbp-48h] BYREF
  __int128 v66; // [rsp+48h] [rbp-38h]
  __int64 v67; // [rsp+58h] [rbp-28h]
  unsigned int v68; // [rsp+60h] [rbp-20h]
  __int64 v69; // [rsp+68h] [rbp-18h]
  __int64 v70; // [rsp+70h] [rbp-10h]
  __int64 v71; // [rsp+78h] [rbp-8h]
  unsigned __int16 v72; // [rsp+C0h] [rbp+40h] BYREF
  int SearchKeyHash; // [rsp+D0h] [rbp+50h]
  __int16 v74; // [rsp+D8h] [rbp+58h]

  v3 = *(_WORD *)(a1 + 16);
  inserted = 0;
  if ( !v3 )
  {
LABEL_5:
    v8 = 0;
    v68 = 0;
    if ( !*(_WORD *)(a1 + 18) )
      return (unsigned int)inserted;
    while ( 1 )
    {
      v67 = 0LL;
      v65 = 0LL;
      v9 = 5LL * v8;
      v69 = a1 + *(unsigned int *)(a1 + 12);
      v66 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(
              (_QWORD *)(a1 + *(unsigned int *)(v69 + 20LL * v8)),
              *(_WORD *)(v69 + 20LL * v8 + 8),
              0,
              (__int64)&v65) )
        return (unsigned int)-1073741773;
      v13 = HIDWORD(v65);
      if ( (unsigned int)(HIDWORD(v65) - 2) > 1 )
        return (unsigned int)-1073741773;
      v14 = *(_QWORD *)(a2 + 32);
      LOBYTE(v10) = 1;
      LOBYTE(v12) = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
      LOBYTE(v11) = (*(_BYTE *)(v14 + 2) & 8) != 0;
      SearchKeyHash = ApiSetpGetSearchKeyHash((unsigned int)&v65, v10, v11, v12, *(_BYTE *)(v14 + 55));
      v17 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v14, v14 + 44, &v65);
      v72 = v17;
      if ( (_WORD)v17 == 0xFFFF )
      {
        inserted = ApiSetSchemaExpander_InsertContractEntry(a2, &v65, &v72);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v15 = *(_QWORD *)(a2 + 32);
        LOWORD(v17) = v72;
        v13 = HIDWORD(v65);
        *(_DWORD *)(*(unsigned int *)(v15 + 44)
                  + v15
                  + v72 * (unsigned __int64)*(unsigned __int8 *)(v15 + 52)
                  - *(unsigned __int16 *)(v15 + 18)) = SearchKeyHash;
      }
      else if ( *(_DWORD *)(*(unsigned int *)(v14 + 44)
                          + v14
                          + v17 * *(unsigned __int8 *)(v14 + 52)
                          - *(unsigned __int16 *)(v14 + 18)) != SearchKeyHash )
      {
        return (unsigned int)-1073741271;
      }
      v18 = *(_QWORD *)(a2 + 32);
      LOWORD(SearchKeyHash) = -1;
      v74 = -1;
      v19 = *(_BYTE *)(v18 + 2);
      v20 = v19 & 8;
      v21 = v19 & 0x10;
      if ( v13 == 2 )
      {
        LOBYTE(v16) = v21 != 0;
        LOBYTE(v15) = v20 != 0;
        v63 = ApiSetpGetSearchKeyHash((unsigned int)&v65, 0, v15, v16, *(_BYTE *)(v18 + 67));
        v22 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v18, v18 + 56, &v65);
        v72 = v22;
        if ( (_WORD)v22 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertGroupContractEntry(a2, &v65, &v72);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v23 = *(_QWORD *)(a2 + 32);
          v24 = *(unsigned __int8 *)(v23 + 64);
          v25 = *(unsigned int *)(v23 + 56);
LABEL_17:
          LOWORD(v22) = v72;
          v13 = HIDWORD(v65);
          *(_DWORD *)(v25 + v23 + v72 * v24 - *(unsigned __int16 *)(v23 + 18)) = v63;
LABEL_26:
          v36 = *(_QWORD *)(a2 + 32);
          v37 = v69;
          if ( v13 == 2 )
          {
            v38 = *(unsigned int *)(v36 + 56)
                + (unsigned __int16)v22 * (unsigned __int64)*(unsigned __int8 *)(v36 + 64)
                - *(unsigned __int16 *)(v36 + 18);
            *(_WORD *)(v38 + v36 + 4) = v17;
            *(_DWORD *)(v38 + v36 + 8) = *(_DWORD *)(v37 + 4 * v9 + 12);
          }
          else
          {
            v39 = *(unsigned int *)(v36 + 68)
                + (unsigned __int16)v22 * (unsigned __int64)*(unsigned __int8 *)(v36 + 76)
                - *(unsigned __int16 *)(v36 + 18);
            *(_WORD *)(v39 + v36 + 4) = v17;
            if ( (*(_BYTE *)(v37 + 4 * v9 + 17) & 4) != 0 )
              *(_BYTE *)(v39 + v36 + 10) |= 4u;
          }
          v64 = 0LL;
          if ( *(_BYTE *)(a2 + 16) && v13 == 3 )
            v64 = ApiSetpSearchForApiSetA(*(_DWORD **)(a2 + 40), (unsigned __int8 *)v65, WORD1(v66));
          v40 = 0;
          if ( *(_WORD *)(v37 + 4 * v9 + 10) )
          {
            do
            {
              v41 = *(unsigned int *)(v37 + 4 * v9 + 4);
              v42 = *(_QWORD *)(a2 + 32);
              v65 = 0LL;
              v70 = v41;
              v66 = 0LL;
              v67 = 0LL;
              BYTE10(v65) = 1;
              v71 = a1 + 16LL * v40;
              v43 = *(unsigned int *)(v41 + v71);
              WORD4(v65) = *(_WORD *)(v41 + v71 + 8);
              WORD1(v66) = WORD4(v65);
              *(_QWORD *)&v65 = a1 + v43;
              v72 = ApiSetpSearchForSectionIndex_V7(v42, v42 + 92, &v65);
              v44 = v72;
              if ( v72 == 0xFFFF )
              {
                inserted = ApiSetSchemaExpander_InsertHostEntry(a2, &v65, &v72);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                v42 = *(_QWORD *)(a2 + 32);
                v44 = v72;
              }
              if ( *(_WORD *)(v70 + v71 + 10) )
              {
                v45 = *(_DWORD *)(a2 + 156);
                LOBYTE(v72) = 1;
                *(_DWORD *)(a2 + 156) = v45 + 16;
                v46 = *(unsigned __int16 *)(v42 + 18);
                v47 = (unsigned __int16)(v45 >> 4);
                v48 = *(unsigned int *)(v42 + 104) + v47 * *(unsigned __int16 *)(v42 + 114) - v46;
                v49 = *(unsigned int *)(v42 + 92)
                    + (unsigned __int16)SearchKeyHash * (unsigned __int64)*(unsigned __int8 *)(v42 + 100)
                    - v46;
                *(_DWORD *)(v48 + v42 + 8) = *(_DWORD *)(v49 + v42 + 4);
                *(_WORD *)(v48 + v42 + 14) = *(_WORD *)(v49 + v42 + 8);
                v50 = *(_QWORD *)(a2 + 32);
                v51 = *(unsigned int *)(v50 + 92);
                v52 = v50 + v44 * (unsigned __int64)*(unsigned __int8 *)(v50 + 100) - *(unsigned __int16 *)(v50 + 18);
                *(_DWORD *)(v48 + v42 + 4) = *(_DWORD *)(v51 + v52 + 4);
                *(_WORD *)(v48 + v42 + 12) = *(_WORD *)(v51 + v52 + 8);
                *(_WORD *)(v48 + v42) = v74;
              }
              else
              {
                LOBYTE(v72) = 0;
                LOWORD(v47) = -1;
              }
              v53 = *(_QWORD *)(a2 + 32);
              v54 = *(unsigned int *)(v53 + 44);
              v55 = v53
                  + (unsigned __int16)v17 * (unsigned __int64)*(unsigned __int8 *)(v53 + 52)
                  - *(unsigned __int16 *)(v53 + 18);
              *(_BYTE *)(v54 + v55 + 10) |= 2u;
              *(_WORD *)(v54 + v55 + 4) = v44;
              if ( (_BYTE)v72 )
              {
                ++*(_WORD *)(v54 + v55 + 8);
                *(_WORD *)(v54 + v55 + 6) = v47;
              }
              if ( v64 )
              {
                v56 = *(unsigned int *)(v64 + 16);
                v57 = *(_QWORD *)(a2 + 32);
                v58 = *(_QWORD *)(a2 + 40);
                v59 = *(unsigned int *)(v57 + 92);
                v60 = v57 + v44 * (unsigned __int64)*(unsigned __int8 *)(v57 + 100) - *(unsigned __int16 *)(v57 + 18);
                *(_DWORD *)(v56 + v58 + 12) = *(_DWORD *)(v59 + v60 + 4) + *(_DWORD *)(v57 + 36);
                *(_DWORD *)(v56 + v58 + 16) = 2 * *(unsigned __int16 *)(v59 + v60 + 8);
              }
              ++v40;
              v37 = v69;
            }
            while ( v40 < *(_WORD *)(v69 + 4 * v9 + 10) );
          }
          goto LABEL_45;
        }
        v26 = *(unsigned __int16 *)(v18 + 18);
        v27 = *(unsigned int *)(v18 + 56);
        v28 = v18 + v22 * *(unsigned __int8 *)(v18 + 64) - v26;
        if ( *(_DWORD *)(v27 + v28) != v63 )
          return (unsigned int)-1073741271;
        v29 = *(_BYTE *)(v27 + v28 + 6);
        v30 = *(unsigned int *)(v18 + 44)
            + *(unsigned __int16 *)(v27 + v28 + 4) * (unsigned __int64)*(unsigned __int8 *)(v18 + 52)
            - v26;
        v31 = *(_WORD *)(v30 + v18 + 4);
        v74 = *(_WORD *)(v30 + v18 + 6);
        LOWORD(SearchKeyHash) = v31;
      }
      else
      {
        LOBYTE(v16) = v21 != 0;
        LOBYTE(v15) = v20 != 0;
        v63 = ApiSetpGetSearchKeyHash((unsigned int)&v65, 0, v15, v16, *(_BYTE *)(v18 + 79));
        v22 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v18, v18 + 68, &v65);
        v72 = v22;
        if ( (_WORD)v22 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, &v65, &v72);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v23 = *(_QWORD *)(a2 + 32);
          v24 = *(unsigned __int8 *)(v23 + 76);
          v25 = *(unsigned int *)(v23 + 68);
          goto LABEL_17;
        }
        v32 = *(unsigned __int16 *)(v18 + 18);
        v33 = *(unsigned int *)(v18 + 68);
        v34 = v18 + v22 * *(unsigned __int8 *)(v18 + 76) - v32;
        if ( *(_DWORD *)(v33 + v34) != v63 )
          return (unsigned int)-1073741271;
        v35 = *(unsigned int *)(v18 + 44)
            + *(unsigned __int16 *)(v33 + v34 + 4) * (unsigned __int64)*(unsigned __int8 *)(v18 + 52)
            - v32;
        LOWORD(SearchKeyHash) = *(_WORD *)(v35 + v18 + 4);
        v74 = *(_WORD *)(v35 + v18 + 6);
        v29 = *(_BYTE *)(v33 + v34 + 10);
      }
      if ( (v29 & 1) == 0 )
        goto LABEL_26;
LABEL_45:
      v61 = *(unsigned __int16 *)(a1 + 18);
      v8 = v68 + 1;
      v68 = v8;
      if ( v8 >= v61 )
        return (unsigned int)inserted;
    }
  }
  v67 = 0LL;
  v6 = *(unsigned int *)(a1 + 8);
  v65 = 0LL;
  WORD4(v65) = v3;
  v66 = 0LL;
  WORD1(v66) = v3;
  v7 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)&v65 = a1 + v6;
  BYTE10(v65) = 0;
  if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v7, v7 + 80, &v65) == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, &v65);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    goto LABEL_5;
  }
  return (unsigned int)-1073741771;
}
