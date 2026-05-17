/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x180117718
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x18011F6DC (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     ApiSetpGetContractKeyInfo @ 0x1800E8278 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1801179E4 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x180117AD0 (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x18013B808 (ApiSetpGetExtensionNameKeyInfo.c)
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
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r13
  __int64 v20; // r15
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-10h]

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
    v15 = *(_QWORD **)(a2 + 8);
    v30 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    if ( ApiSetpGetContractKeyInfo(v15, v11, 1, (__int64)&v28) )
    {
      if ( HIDWORD(v28) == 2 )
      {
        v21 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v28);
        if ( v21 == 0xFFFF )
          goto LABEL_24;
        v24 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v25 = *(unsigned int *)(a1 + 56) + v21 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - v24;
        LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)(v25 + a1) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v28,
                                                      0,
                                                      v22,
                                                      v23,
                                                      *(_BYTE *)(a1 + 67)) )
          goto LABEL_24;
        v26 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v25 + a1 + 4)
            - v24;
        if ( (*(_BYTE *)(v26 + a1 + 10) & 2) != 0 )
          v9 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                        + *(unsigned __int16 *)(v26 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
                        - v24
                        + a1
                        + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v28) != 3 )
          goto LABEL_24;
        v16 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v28);
        if ( v16 == 0xFFFF )
          goto LABEL_24;
        v19 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v18) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v20 = *(unsigned int *)(a1 + 68) + v16 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v19;
        LOBYTE(v17) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)(v20 + a1) != (unsigned int)ApiSetpGetSearchKeyHash(
                                                      (unsigned int)&v28,
                                                      0,
                                                      v17,
                                                      v18,
                                                      *(_BYTE *)(a1 + 79))
          || (unsigned int)WORD4(v29) > *(unsigned __int8 *)(v20 + a1 + 9) )
        {
          goto LABEL_24;
        }
        v9 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                       + *(unsigned __int16 *)(v20 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
                       - v19
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
  if ( !(unsigned int)RtlCompareUnicodeStrings(
                        *(unsigned __int16 **)(a2 + 8),
                        (unsigned __int64)v8 >> 1,
                        L"schemaext-",
                        0xAuLL,
                        1) )
  {
    v14 = *(_QWORD *)(a2 + 8);
    LOBYTE(v13) = 1;
    v30 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v14, v11, v13, &v28) )
    {
      v7 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v28) != 0xFFFF;
      v9 = v7;
      goto LABEL_24;
    }
  }
  return (unsigned int)-1073741811;
}
