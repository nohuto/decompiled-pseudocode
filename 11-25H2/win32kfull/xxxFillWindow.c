/*
 * XREFs of xxxFillWindow @ 0x140054024
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x140054368 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1401D4B80 (NtUserFillWindow.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x140053AE4 (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x14005426C (xxxPaintRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, (int *)&v10) )
    return 1LL;
  v8 = a2;
  if ( a1 )
    v8 = a1;
  return xxxPaintRect(v8, a2, a3, a4, &v10);
}
