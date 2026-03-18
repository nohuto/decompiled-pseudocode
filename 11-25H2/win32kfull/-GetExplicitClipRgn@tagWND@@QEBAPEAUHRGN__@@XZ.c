/*
 * XREFs of ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60
 * Callers:
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x140053B74 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     OffsetWindow @ 0x14005B9D0 (OffsetWindow.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400E1FB8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserGetWindowRgnEx @ 0x140299860 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall tagWND::GetExplicitClipRgn(tagWND *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0 )
    return 0LL;
  else
    return *(HRGN *)(v1 + 168);
}
