/*
 * XREFs of ApiSetQuerySchemaInfo2_V7 @ 0x180116BE8
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x180111A5C (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x1800E7488 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1801171E0 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1801172CC (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpGetSemverKeyVersions @ 0x180121F98 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x18013B578 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpIsFeatureEnabled @ 0x18013B6A0 (ApiSetpIsFeatureEnabled.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo2_V7(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // r10
  int v7; // r9d
  char *v8; // r8
  char v9; // cl
  __int16 v10; // ax
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  __int64 v20; // r14
  unsigned __int16 v22; // ax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  unsigned __int8 v31; // [rsp+90h] [rbp+30h] BYREF

  *a3 = 240;
  v4 = a1;
  if ( *(_BYTE *)a1 != 7 || (*(_BYTE *)(a1 + 2) & 2) != 0 )
  {
    if ( *(_DWORD *)a1 != 6 )
      return 3221225485LL;
    if ( *(_DWORD *)(a1 + 16) <= 8u )
      return 3221225485LL;
    v4 = a1 + 28;
    if ( *(_BYTE *)(a1 + 28) != 7 )
      return 3221225485LL;
  }
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_BYTE *)a2 + v6) );
  if ( v6 > 0xFFFF )
    return 3221225485LL;
  v7 = 10;
  v8 = (char *)a2;
  do
  {
    if ( !*v8 )
      goto LABEL_19;
    v9 = *v8 + 32;
    if ( (unsigned __int8)(*v8 - 65) > 0x19u )
      v9 = *v8;
    if ( v8["schemaext-" - (char *)a2] != v9 )
    {
LABEL_19:
      v30 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(a2, v6, 0, (__int64)&v28) )
        return v5;
      if ( HIDWORD(v28) == 2 )
      {
        v22 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 56, &v28);
        if ( v22 == 0xFFFF )
          goto LABEL_31;
        v25 = *(unsigned __int16 *)(v4 + 18);
        LOBYTE(v24) = (*(_BYTE *)(v4 + 2) & 0x10) != 0;
        v26 = *(unsigned int *)(v4 + 56) + v22 * (unsigned __int64)*(unsigned __int8 *)(v4 + 64) - v25;
        LOBYTE(v23) = (*(_BYTE *)(v4 + 2) & 8) != 0;
        if ( *(_DWORD *)(v26 + v4) == (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v28,
                                                      0,
                                                      v23,
                                                      v24,
                                                      *(_BYTE *)(v4 + 67)) )
        {
          if ( (*(_BYTE *)(v26 + v4 + 6) & 2) != 0 )
          {
            *a3 = 243;
            return v5;
          }
          v27 = *(unsigned int *)(v4 + 44)
              + *(unsigned __int8 *)(v4 + 52) * (unsigned __int64)*(unsigned __int16 *)(v26 + v4 + 4)
              - v25;
          if ( (*(_BYTE *)(v27 + v4 + 10) & 2) != 0 )
          {
            if ( *(_BYTE *)(*(unsigned int *)(v4 + 92)
                          + *(unsigned __int8 *)(v4 + 100) * (unsigned __int64)*(unsigned __int16 *)(v27 + v4 + 4)
                          - v25
                          + v4
                          + 10) > *(_BYTE *)(v4 + 3) )
            {
              *a3 = 244;
              return v5;
            }
            if ( *(_DWORD *)(v26 + v4 + 8) && !(unsigned __int8)ApiSetpIsFeatureEnabled() )
            {
              *a3 = 245;
              return v5;
            }
LABEL_28:
            *a3 = 0;
            return v5;
          }
LABEL_37:
          *a3 = 242;
          return v5;
        }
      }
      else
      {
        if ( HIDWORD(v28) != 3 )
          return v5;
        v12 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 68, &v28);
        if ( v12 == 0xFFFF )
          goto LABEL_31;
        v15 = *(unsigned __int16 *)(v4 + 18);
        v16 = *(unsigned int *)(v4 + 68);
        LOBYTE(v14) = (*(_BYTE *)(v4 + 2) & 0x10) != 0;
        LOBYTE(v13) = (*(_BYTE *)(v4 + 2) & 8) != 0;
        v17 = v4 + v12 * (unsigned __int64)*(unsigned __int8 *)(v4 + 76) - v15;
        if ( *(_DWORD *)(v16 + v17) == (unsigned int)ApiSetpGetSearchKeyHash(
                                                       (unsigned int)&v28,
                                                       0,
                                                       v13,
                                                       v14,
                                                       *(_BYTE *)(v4 + 79)) )
        {
          v19 = *(unsigned int *)(v4 + 44)
              + *(unsigned __int8 *)(v4 + 52) * (unsigned __int64)*(unsigned __int16 *)(v16 + v17 + 4);
          v31 = 0;
          v20 = v19 - v15;
          if ( !(unsigned __int8)ApiSetpGetSemverKeyVersions(&v28, v18, &v31) )
            return (unsigned int)-1073741811;
          if ( v31 <= *(_BYTE *)(v16 + v17 + 9) )
          {
            if ( (*(_BYTE *)(v20 + v4 + 10) & 2) != 0 )
              goto LABEL_28;
            goto LABEL_37;
          }
LABEL_31:
          *a3 = 241;
          return v5;
        }
      }
      *a3 = 246;
      return v5;
    }
    ++v8;
    --v7;
  }
  while ( v7 > 0 );
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetExtensionNameKeyInfo((PCWCH)a2) )
    return 3221225485LL;
  v10 = ApiSetpSearchForSectionIndex_V7(v4, v4 + 80, &v28);
  v11 = 0;
  if ( v10 == -1 )
    v11 = 241;
  *a3 = v11;
  return v5;
}
