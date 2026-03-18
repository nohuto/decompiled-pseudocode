/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1400059EC
 * Callers:
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x140009398 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402D5A80 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x14000588C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(struct _CAPTUREBUF *a1, PCWCH UnicodeString, PCWCH a3, void **a4, int a5)
{
  ULONG v6; // edi
  ULONG BytesInUnicodeString; // esi
  __int64 UserSessionState; // rax
  ULONG v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned __int8 *v15; // rdi
  ULONG v16; // ecx
  ULONG v17[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+10h] BYREF

  v6 = (unsigned int)a3;
  BytesInMultiByteString = 0;
  v17[0] = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  BytesInUnicodeString = 2 * (_DWORD)a3;
  if ( a5 )
  {
    if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString, BytesInUnicodeString - 2) < 0 )
      return 3221225473LL;
    v12 = BytesInMultiByteString + 2;
    if ( BytesInMultiByteString + 2 < BytesInMultiByteString )
    {
      v14 = -2147024362;
      v12 = -1;
    }
    else
    {
      v14 = 0;
    }
    BytesInMultiByteString = v12;
    v13 = v12;
    if ( v14 < 0 )
      return 2147483653LL;
  }
  else
  {
    UserSessionState = W32GetUserSessionState();
    v12 = BytesInUnicodeString;
    if ( (**(_DWORD **)(UserSessionState + 19904) & 2) == 0 )
      v12 = v6;
    BytesInMultiByteString = v12;
    v13 = v12;
  }
  if ( v13 > *((_DWORD *)a1 + 1) || v13 >= 0x7FFFFFFF )
    return 2147483653LL;
  v15 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  if ( RtlUnicodeToMultiByteN((PCHAR)v15, v12, v17, UnicodeString, BytesInUnicodeString) >= 0 )
  {
    v16 = v17[0];
    *((_QWORD *)a1 + 2) = &v15[(v17[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v16;
    FixupCaptureDataOffsets(a1, a4, v15);
    return 0LL;
  }
  return 3221225473LL;
}
