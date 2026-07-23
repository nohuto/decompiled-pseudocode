/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404E7FE8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1406DF3D0 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1406DF524 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x1406DFB74 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406DFBF8 (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406DFCF4 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406DFDEC (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase1(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int inserted; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  wchar_t *v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  unsigned __int16 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rsi
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rax
  bool v22; // zf
  unsigned int v23; // ecx
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v39; // [rsp+30h] [rbp-50h]
  int v40; // [rsp+34h] [rbp-4Ch]
  __int64 v41; // [rsp+38h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-40h]
  __int64 v43; // [rsp+48h] [rbp-38h]
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  unsigned __int16 v47; // [rsp+C0h] [rbp+40h] BYREF
  int SearchKeyHash; // [rsp+D0h] [rbp+50h] BYREF
  int v49; // [rsp+D8h] [rbp+58h]

  v2 = 0LL;
  inserted = 0;
  v40 = 0;
  if ( !*(_DWORD *)(a1 + 12) )
    return (unsigned int)inserted;
  while ( 1 )
  {
    v6 = 3 * v2;
    v7 = a1 + *(unsigned int *)(a1 + 16);
    v44 = 0LL;
    v45 = 0LL;
    v8 = (wchar_t *)(a1 + *(unsigned int *)(v7 + 24 * v2 + 4));
    v9 = *(_DWORD *)(v7 + 24 * v2 + 8) >> 1;
    if ( (*(_DWORD *)(v7 + 24 * v2) & 4) == 0 )
      break;
    v46 = 0LL;
    if ( !ApiSetpGetExtensionNameKeyInfo(v8, v9, 1, (__int64)&v44) )
      return (unsigned int)-1073741773;
    if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(a2 + 32) + 80LL,
                             (__int64)&v44) != 0xFFFF )
      return (unsigned int)-1073741771;
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, (__int64)&v44);
    if ( inserted < 0 )
      return (unsigned int)inserted;
LABEL_29:
    v2 = (unsigned int)(v40 + 1);
    v40 = v2;
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)inserted;
  }
  *(_QWORD *)&v44 = a1 + *(unsigned int *)(v7 + 24 * v2 + 4);
  v10 = *(_QWORD *)(a2 + 32);
  WORD4(v44) = v9;
  WORD1(v45) = v9;
  v46 = 0LL;
  BYTE10(v44) = 1;
  v11 = ApiSetpSearchForSectionIndex_V7(v10, v10 + 92, (__int64)&v44);
  v47 = v11;
  if ( v11 == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertHostEntry(a2, (__int64)&v44, &v47);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v11 = v47;
  }
  v12 = 0LL;
  v39 = 0;
  if ( !*(_DWORD *)(v7 + 8 * v6 + 20) )
    goto LABEL_29;
  while ( 1 )
  {
    v13 = 5 * v12;
    v14 = a1 + *(unsigned int *)(v7 + 8 * v6 + 16);
    v46 = 0LL;
    v42 = v13;
    v43 = v14;
    v44 = 0LL;
    v15 = *(_DWORD *)(v14 + 4 * v13 + 16);
    v16 = (_QWORD *)(a1 + *(unsigned int *)(v14 + 4 * v13 + 12));
    v45 = 0LL;
    if ( !ApiSetpGetContractKeyInfo(v16, v15 >> 1, 1, (__int64)&v44) || HIDWORD(v44) != 3 )
      return (unsigned int)-1073741773;
    v17 = *(_QWORD *)(a2 + 32);
    SearchKeyHash = ApiSetpGetSearchKeyHash(
                      (__int64)&v44,
                      1,
                      (*(_BYTE *)(v17 + 2) & 8) != 0,
                      (*(_BYTE *)(v17 + 2) & 0x10) != 0,
                      *(_BYTE *)(v17 + 55));
    v18 = ApiSetpSearchForSectionIndex_V7(v17, v17 + 44, (__int64)&v44);
    v47 = v18;
    if ( v18 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertContractEntry(a2, (__int64)&v44, &v47);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v19 = *(_QWORD *)(a2 + 32)
          + v47 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 52LL)
          - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
          + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 44LL);
      *(_DWORD *)v19 = SearchKeyHash;
    }
    else
    {
      v19 = *(unsigned int *)(v17 + 44)
          + v18 * (unsigned __int64)*(unsigned __int8 *)(v17 + 52)
          - *(unsigned __int16 *)(v17 + 18)
          + v17;
      if ( *(_DWORD *)v19 != SearchKeyHash )
        return (unsigned int)-1073741271;
    }
    v41 = *(_QWORD *)(a2 + 32);
    v49 = ApiSetpGetSearchKeyHash(
            (__int64)&v44,
            0,
            (*(_BYTE *)(v41 + 2) & 8) != 0,
            (*(_BYTE *)(v41 + 2) & 0x10) != 0,
            *(_BYTE *)(v41 + 79));
    v20 = ApiSetpSearchForSectionIndex_V7(v41, v41 + 68, (__int64)&v44);
    LOWORD(SearchKeyHash) = v20;
    if ( v20 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, (__int64 *)&v44, &SearchKeyHash);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v21 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 68LL)
          + *(_QWORD *)(a2 + 32)
          + (unsigned __int16)SearchKeyHash * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 76LL)
          - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL);
      *(_DWORD *)v21 = v49;
    }
    else
    {
      v21 = *(unsigned int *)(v41 + 68)
          + v41
          + v20 * (unsigned __int64)*(unsigned __int8 *)(v41 + 76)
          - *(unsigned __int16 *)(v41 + 18);
      if ( *(_DWORD *)v21 != v49 )
        return (unsigned int)-1073741271;
    }
    v22 = (*(_BYTE *)(v21 + 10) & 1) == 0;
    *(_WORD *)(v21 + 4) = v47;
    if ( v22 )
    {
      if ( *(_DWORD *)(v43 + 4 * v42 + 4) )
      {
        v23 = *(_DWORD *)(a2 + 156);
        *(_DWORD *)(a2 + 156) = v23 + 16;
        v24 = *(_QWORD *)(a2 + 32);
        v25 = (unsigned __int16)(v23 >> 4);
        v26 = *(unsigned __int16 *)(v24 + 18);
        v27 = *(unsigned int *)(v24 + 104) + v25 * *(unsigned __int16 *)(v24 + 114) - v26;
        v28 = *(unsigned int *)(v24 + 92)
            + *(unsigned __int16 *)(v19 + 4) * (unsigned __int64)*(unsigned __int8 *)(v24 + 100)
            - v26;
        *(_DWORD *)(v27 + v24 + 8) = *(_DWORD *)(v28 + v24 + 4);
        *(_WORD *)(v27 + v24 + 14) = *(_WORD *)(v28 + v24 + 8);
        v29 = *(_QWORD *)(a2 + 32);
        v30 = *(unsigned int *)(v29 + 92);
        v31 = v29 + v11 * (unsigned __int64)*(unsigned __int8 *)(v29 + 100) - *(unsigned __int16 *)(v29 + 18);
        *(_DWORD *)(v27 + v24 + 4) = *(_DWORD *)(v30 + v31 + 4);
        *(_WORD *)(v27 + v24 + 12) = *(_WORD *)(v30 + v31 + 8);
        *(_WORD *)(v27 + v24) = *(_WORD *)(v19 + 6);
        ++*(_WORD *)(v19 + 8);
        *(_WORD *)(v19 + 6) = v25;
      }
      *(_BYTE *)(v19 + 10) |= 2u;
      *(_WORD *)(v19 + 4) = v11;
      if ( *(_BYTE *)(a2 + 16) )
      {
        v32 = ApiSetpSearchForApiSet(*(_DWORD **)(a2 + 40), (const WCHAR *)v44, WORD1(v45));
        if ( v32 )
        {
          v33 = *(unsigned int *)(v32 + 16);
          v34 = *(_QWORD *)(a2 + 32);
          v35 = *(_QWORD *)(a2 + 40);
          v36 = *(unsigned int *)(v34 + 92);
          v37 = v34 + v11 * (unsigned __int64)*(unsigned __int8 *)(v34 + 100) - *(unsigned __int16 *)(v34 + 18);
          *(_DWORD *)(v33 + v35 + 12) = *(_DWORD *)(v36 + v37 + 4) + *(_DWORD *)(v34 + 36);
          *(_DWORD *)(v33 + v35 + 16) = 2 * *(unsigned __int16 *)(v36 + v37 + 8);
        }
      }
    }
    v12 = (unsigned int)(v39 + 1);
    v39 = v12;
    if ( (unsigned int)v12 >= *(_DWORD *)(v7 + 8 * v6 + 20) )
      goto LABEL_29;
  }
}
