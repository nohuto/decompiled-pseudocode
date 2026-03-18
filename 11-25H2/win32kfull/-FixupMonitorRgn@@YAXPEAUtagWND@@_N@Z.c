/*
 * XREFs of ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1401BD758
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1401A8004 (IsSmallerThanScreen.c)
 */

void __fastcall FixupMonitorRgn(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx

  v3 = (unsigned __int8)a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 8) != 0 )
  {
    if ( ***(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968) <= 1u || IsSmallerThanScreen(a1) )
    {
      v4 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) )
        return;
      v4 = 2LL;
    }
    SelectWindowRgn(a1, v4, v3);
  }
}
