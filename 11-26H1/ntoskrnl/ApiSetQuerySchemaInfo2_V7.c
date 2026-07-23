/*
 * XREFs of ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x1406DD094 (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14052B9D0 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpIsFeatureEnabled @ 0x1406DF2D8 (ApiSetpIsFeatureEnabled.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1406DF3D0 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1406DF524 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpGetSemverKeyVersions @ 0x1406DF60C (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406DF79C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2_V7(__int64 a1, _QWORD *a2, int *a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // r10
  int v8; // r9d
  char *v9; // r8
  char v10; // r14
  char v11; // cl
  __int16 v12; // ax
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  __int64 v21; // r14
  unsigned __int16 v23; // ax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-30h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  unsigned __int8 v32; // [rsp+90h] [rbp+30h] BYREF

  v3 = *(_BYTE *)a1 == 7;
  *a3 = 240;
  v5 = a1;
  if ( !v3 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
  {
    if ( *(_DWORD *)a1 != 6 )
      return 3221225485LL;
    if ( *(_DWORD *)(a1 + 16) <= 8u )
      return 3221225485LL;
    v5 = a1 + 28;
    if ( *(_BYTE *)(a1 + 28) != 7 )
      return 3221225485LL;
  }
  v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_BYTE *)a2 + v7) );
  if ( v7 > 0xFFFF )
    return 3221225485LL;
  v8 = 10;
  v9 = (char *)a2;
  do
  {
    v10 = *v9;
    if ( !*v9 )
      goto LABEL_19;
    v11 = v10 + 32;
    if ( (unsigned __int8)(v10 - 65) > 0x19u )
      v11 = *v9;
    if ( v9["schemaext-" - (char *)a2] != v11 )
    {
LABEL_19:
      v31 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(a2, v7, 0, (__int64)&v29) )
        return v6;
      if ( HIDWORD(v29) == 2 )
      {
        v23 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 56, &v29);
        if ( v23 == 0xFFFF )
          goto LABEL_31;
        v26 = *(unsigned __int16 *)(v5 + 18);
        LOBYTE(v25) = (*(_BYTE *)(v5 + 2) & 0x10) != 0;
        v27 = *(unsigned int *)(v5 + 56) + v23 * (unsigned __int64)*(unsigned __int8 *)(v5 + 64) - v26;
        LOBYTE(v24) = (*(_BYTE *)(v5 + 2) & 8) != 0;
        if ( *(_DWORD *)(v27 + v5) == (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v29,
                                                      0,
                                                      v24,
                                                      v25,
                                                      *(_BYTE *)(v5 + 67)) )
        {
          if ( (*(_BYTE *)(v27 + v5 + 6) & 2) != 0 )
          {
            *a3 = 243;
            return v6;
          }
          v28 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v27 + v5 + 4)
              - v26;
          if ( (*(_BYTE *)(v28 + v5 + 10) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(unsigned int *)(v5 + 92)
                          + *(unsigned __int8 *)(v5 + 100) * (unsigned __int64)*(unsigned __int16 *)(v28 + v5 + 4)
                          - v26
                          + v5
                          + 10) > *(_BYTE *)(v5 + 3) )
            {
              *a3 = 244;
              return v6;
            }
            if ( *(_DWORD *)(v27 + v5 + 8) && !(unsigned __int8)ApiSetpIsFeatureEnabled() )
            {
              *a3 = 245;
              return v6;
            }
LABEL_28:
            *a3 = 0;
            return v6;
          }
LABEL_37:
          *a3 = 242;
          return v6;
        }
      }
      else
      {
        if ( HIDWORD(v29) != 3 )
          return v6;
        v14 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 68, &v29);
        if ( v14 == 0xFFFF )
          goto LABEL_31;
        v17 = *(unsigned __int16 *)(v5 + 18);
        v18 = *(unsigned int *)(v5 + 68);
        LOBYTE(v16) = (*(_BYTE *)(v5 + 2) & 0x10) != 0;
        LOBYTE(v15) = (*(_BYTE *)(v5 + 2) & 8) != 0;
        v19 = v5 + v14 * (unsigned __int64)*(unsigned __int8 *)(v5 + 76) - v17;
        if ( *(_DWORD *)(v18 + v19) == (unsigned int)ApiSetpGetSearchKeyHash(
                                                       (unsigned int)&v29,
                                                       0,
                                                       v15,
                                                       v16,
                                                       *(_BYTE *)(v5 + 79)) )
        {
          v20 = *(unsigned int *)(v5 + 44)
              + *(unsigned __int8 *)(v5 + 52) * (unsigned __int64)*(unsigned __int16 *)(v18 + v19 + 4);
          v32 = 0;
          v21 = v20 - v17;
          if ( !(unsigned __int8)ApiSetpGetSemverKeyVersions(&v29, 0LL, &v32) )
            return (unsigned int)-1073741811;
          if ( v32 <= *(_BYTE *)(v18 + v19 + 9) )
          {
            if ( (*(_BYTE *)(v21 + v5 + 10) & 2) != 0 )
              goto LABEL_28;
            goto LABEL_37;
          }
LABEL_31:
          *a3 = 241;
          return v6;
        }
      }
      *a3 = 246;
      return v6;
    }
    ++v9;
    --v8;
  }
  while ( v8 > 0 );
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetExtensionNameKeyInfo(a2, (unsigned __int16)v7, 0LL, &v29) )
    return 3221225485LL;
  v12 = ApiSetpSearchForSectionIndex_V7(v5, v5 + 80, &v29);
  v13 = 0;
  if ( v12 == -1 )
    v13 = 241;
  *a3 = v13;
  return v6;
}
