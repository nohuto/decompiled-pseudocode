/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x180116F14
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x18011F48C (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     ApiSetpGetContractKeyInfo @ 0x1800E7488 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1801171E0 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1801172CC (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x18013B578 (ApiSetpGetExtensionNameKeyInfo.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  unsigned int v4; // edi
  bool v7; // r14
  unsigned __int16 v8; // cx
  bool v9; // si
  char v10; // r8
  unsigned __int16 v11; // r12
  unsigned __int64 v12; // rdx
  const WCHAR *v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int16 v15; // ax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int16 v20; // ax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  v8 = *(_WORD *)a2;
  v9 = 0;
  v10 = 0;
  v11 = *(_WORD *)a2 >> 1;
  if ( *(_WORD *)a2 >= 8u )
  {
    v12 = **(_QWORD **)(a2 + 8) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
      v10 = 1;
  }
  if ( v10 )
  {
    v14 = *(_QWORD **)(a2 + 8);
    v29 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( ApiSetpGetContractKeyInfo(v14, v11, 1, (__int64)&v27) )
    {
      if ( HIDWORD(v27) == 2 )
      {
        v20 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v27);
        if ( v20 == 0xFFFF )
          goto LABEL_24;
        v23 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v24 = *(unsigned int *)(a1 + 56) + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - v23;
        LOBYTE(v21) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)(v24 + a1) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v27,
                                                      0,
                                                      v21,
                                                      v22,
                                                      *(_BYTE *)(a1 + 67)) )
          goto LABEL_24;
        v25 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v24 + a1 + 4)
            - v23;
        if ( (*(_BYTE *)(v25 + a1 + 10) & 2) != 0 )
          v9 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                        + *(unsigned __int16 *)(v25 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
                        - v23
                        + a1
                        + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v27) != 3 )
          goto LABEL_24;
        v15 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v27);
        if ( v15 == 0xFFFF )
          goto LABEL_24;
        v18 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v17) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v19 = *(unsigned int *)(a1 + 68) + v15 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v18;
        LOBYTE(v16) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)(v19 + a1) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v27,
                                                      0,
                                                      v16,
                                                      v17,
                                                      *(_BYTE *)(a1 + 79))
          || (unsigned int)WORD4(v28) > *(unsigned __int8 *)(v19 + a1 + 9) )
        {
          goto LABEL_24;
        }
        v9 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                       + *(unsigned __int16 *)(v19 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
                       - v18
                       + a1
                       + 10) & 2) != 0;
      }
      v7 = 1;
    }
LABEL_24:
    *a3 = v7;
    *a4 = v9;
    return v4;
  }
  if ( v8 >= 0x14u )
    v8 = 20;
  if ( !RtlCompareUnicodeStrings(*(PCWCH *)(a2 + 8), (unsigned __int64)v8 >> 1, L"schemaext-", 0xAuLL, 1u) )
  {
    v13 = *(const WCHAR **)(a2 + 8);
    v29 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v13) )
    {
      v7 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v27) != 0xFFFF;
      v9 = v7;
      goto LABEL_24;
    }
  }
  return (unsigned int)-1073741811;
}
