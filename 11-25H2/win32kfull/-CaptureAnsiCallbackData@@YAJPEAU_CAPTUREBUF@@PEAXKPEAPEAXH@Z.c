/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B9BB8
 * Callers:
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x140170AC0 (SfnINSTRINGNULL.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402BAD10 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x14018C810 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline @ 0x1402BA358 (Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(
        struct _CAPTUREBUF *a1,
        PCWCH UnicodeString,
        ULONG MaxBytesInMultiByteString,
        void **a4,
        int a5)
{
  __int64 v6; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG BytesInUnicodeString; // edi
  __int64 UserSessionState; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  CHAR *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG v21; // edx
  ULONG v22; // ecx
  ULONG v23[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+10h] BYREF

  v6 = MaxBytesInMultiByteString;
  BytesInMultiByteString = 0;
  v23[0] = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !(unsigned int)Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline(a1) )
  {
    v14 = *((unsigned int *)a1 + 1);
    if ( 2 * v6 <= v14 )
    {
      BytesInUnicodeString = 2 * v6;
      goto LABEL_21;
    }
    return 2147483653LL;
  }
  BytesInUnicodeString = 2 * v6;
  if ( a5 )
  {
    if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString, BytesInUnicodeString - 2) < 0 )
      return 3221225473LL;
    v14 = BytesInMultiByteString + 2;
    if ( (unsigned int)v14 < BytesInMultiByteString )
    {
      v16 = -2147024362;
      v14 = 0xFFFFFFFFLL;
    }
    else
    {
      v16 = 0;
    }
    BytesInMultiByteString = v14;
    v15 = v14;
    if ( v16 < 0 )
      return 2147483653LL;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v11, v10);
    v14 = BytesInUnicodeString;
    if ( (**(_DWORD **)(UserSessionState + 19872) & 2) == 0 )
      v14 = (unsigned int)v6;
    BytesInMultiByteString = v14;
    v15 = v14;
  }
  if ( (unsigned int)v14 > *((_DWORD *)a1 + 1) || v15 >= 0x7FFFFFFF )
    return 2147483653LL;
LABEL_21:
  v17 = (CHAR *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledDeviceUsageNoInline(v14) )
  {
    if ( RtlUnicodeToMultiByteN(v17, BytesInMultiByteString, v23, UnicodeString, BytesInUnicodeString) < 0 )
      return 3221225473LL;
LABEL_28:
    v22 = v23[0];
    *((_QWORD *)a1 + 2) = &v17[(v23[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v22;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v17);
    return 0LL;
  }
  v20 = W32GetUserSessionState(v19, v18);
  v21 = BytesInUnicodeString;
  if ( (**(_DWORD **)(v20 + 19872) & 2) == 0 )
    v21 = v6;
  if ( RtlUnicodeToMultiByteN(v17, v21, v23, UnicodeString, BytesInUnicodeString) >= 0 )
    goto LABEL_28;
  return 3221225473LL;
}
