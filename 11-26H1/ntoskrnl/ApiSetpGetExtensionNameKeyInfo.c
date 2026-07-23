/*
 * XREFs of ApiSetpGetExtensionNameKeyInfo @ 0x1406DF3D0
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x1406DE0EC (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406E01F8 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 */

char __fastcall ApiSetpGetExtensionNameKeyInfo(wchar_t *a1, unsigned __int16 a2, char a3, __int64 a4)
{
  unsigned __int16 v8; // ax
  bool v9; // r8
  int v10; // r10d
  wchar_t *v11; // r9
  char v12; // r14
  char v13; // cl
  char result; // al
  __int16 v15; // di
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( a2 < 0xBu )
    return 0;
  if ( a3 )
  {
    *(_DWORD *)(&String2.MaximumLength + 1) = 0;
    *(_QWORD *)&String1.Length = 0LL;
    String1.Buffer = a1;
    v8 = 2 * a2;
    if ( (unsigned __int16)(2 * a2) >= 0x14u )
    {
      v8 = 20;
      String1.Length = 20;
    }
    else
    {
      String1.Length = 2 * a2;
    }
    String1.MaximumLength = v8;
    *(_DWORD *)&String2.Length = 1310740;
    String2.Buffer = L"schemaext-";
    v9 = RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
  }
  else
  {
    v10 = 10;
    v9 = 1;
    v11 = a1;
    while ( v10 > 0 )
    {
      v12 = *(_BYTE *)v11;
      if ( !*(_BYTE *)v11 )
        goto LABEL_14;
      v13 = v12 + 32;
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
        v13 = *(_BYTE *)v11;
      if ( *((_BYTE *)v11 + "schemaext-" - (char *)a1) != v13 )
      {
LABEL_14:
        v9 = 0;
        break;
      }
      v11 = (wchar_t *)((char *)v11 + 1);
      --v10;
    }
  }
  if ( !v9 )
    return 0;
  *(_BYTE *)(a4 + 10) = a3;
  *(_DWORD *)(a4 + 12) = 4;
  result = 1;
  v15 = a2 - 10;
  *(_QWORD *)a4 = (char *)a1 + (-(__int64)(a3 != 0) & 0xA) + 10;
  *(_WORD *)(a4 + 8) = v15;
  *(_WORD *)(a4 + 18) = v15;
  return result;
}
