/*
 * XREFs of QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1403EC970
 * Callers:
 *     <none>
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1403206B8 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall QueryRegistryFontMapperFamilyFallbackListRoutine(
        unsigned __int16 *a1,
        __int64 a2,
        WCHAR *a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v7; // rdx
  int v8; // ecx
  __int64 SessionState; // rax
  unsigned __int16 v11[32]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int16 v12[32]; // [rsp+60h] [rbp-58h] BYREF

  memset_0(v11, 0, 0x80uLL);
  cCapString(v12, a3, 32);
  cCapString(v11, a1, 32);
  SessionState = W32GetSessionState(v8, v7);
  return AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
           (unsigned int *)(*(_QWORD *)(SessionState + 96) + 19700LL),
           (void **)(*(_QWORD *)(SessionState + 96) + 19688LL),
           a5,
           v11);
}
