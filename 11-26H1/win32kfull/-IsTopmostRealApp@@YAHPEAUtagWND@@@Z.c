/*
 * XREFs of ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402D8748
 * Callers:
 *     NtUserSelectPalette @ 0x1401AEB50 (NtUserSelectPalette.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400483F8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 */

__int64 __fastcall IsTopmostRealApp(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi

  v2 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
  if ( !*(_QWORD *)(v4 + 168)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 168) + 16LL) + 464LL) != *(_QWORD *)(W32GetUserSessionState(a1, a2)
                                                                                   + 18928) )
  {
    return 0LL;
  }
  LOBYTE(v2) = a1 == FindNextTopWindow::NextTopWindow(0LL, 0LL, 2);
  return v2;
}
