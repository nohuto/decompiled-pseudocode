/*
 * XREFs of LdrpAccessResourceData @ 0x140A8E9F8
 * Callers:
 *     RtlLoadString @ 0x140807F90 (RtlLoadString.c)
 *     LdrAccessResource @ 0x140A8DDE0 (LdrAccessResource.c)
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 * Callees:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetImageSize @ 0x1404A4648 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v7 = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized != 1 )
    return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
  v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = RtlImageDirectoryEntryToData((PVOID)a1, 1u, 2u, &v15);
  if ( !v9 )
    return 3221225609LL;
  if ( a2 < (unsigned __int64)v9 )
  {
LABEL_6:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(v7, v10, a2, v14);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v7 = AlternateResourceModuleHandle;
    return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
  }
  result = LdrpGetImageSize(v7, &v13);
  if ( (_DWORD)result != -1073741701 )
  {
    if ( !v13 || a2 >= v8 && a2 < v8 + v13 )
      return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
    goto LABEL_6;
  }
  return result;
}
