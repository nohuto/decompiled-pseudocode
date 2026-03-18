/*
 * XREFs of _SelectPalette @ 0x14018BD50
 * Callers:
 *     NtUserSelectPalette @ 0x14018BCF0 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14022553C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B3CB4 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     _IsChild @ 0x1401512B0 (_IsChild.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     WindowFromCacheDC @ 0x140287FB0 (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402BE6D8 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  struct tagWND *NonChildAncestor; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx

  v5 = 1;
  if ( !a3
    && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 7004LL) & 1) != 0
    && a2 != GreGetStockObject(15LL) )
  {
    v6 = WindowFromCacheDC(a1);
    v7 = (struct tagWND *)v6;
    if ( v6 )
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v6);
      v10 = *((_QWORD *)NonChildAncestor + 5);
      if ( (*(_BYTE *)(v10 + 18) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (struct tagWND *)GetThreadDesktopWindow(0LL, v8) )
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)NonChildAncestor + 2) + 528LL), 0x800u);
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v8) + 18888) )
        v13 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888) + 128LL);
      else
        v13 = 0LL;
      v14 = *(_QWORD *)(*((_QWORD *)NonChildAncestor + 3) + 8LL);
      if ( NonChildAncestor != *(struct tagWND **)(v14 + 24)
        && NonChildAncestor != *(struct tagWND **)(v14 + 168)
        && v13
        && ((struct tagWND *)v13 == v7 || (unsigned int)IsChild(v13, (__int64)v7) || (unsigned int)IsTopmostRealApp(v7))
        && *(char *)(*((_QWORD *)v7 + 5) + 24LL) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
