/*
 * XREFs of ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001AE30
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800608C8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18006924C (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::UnregisterAccentState(CWindowList *this, struct CWindowData *a2)
{
  _QWORD *v2; // r8
  unsigned int i; // edx

  v2 = (_QWORD *)((char *)this + 568);
  for ( i = 0; i < *((_DWORD *)this + 148); ++i )
  {
    if ( *(struct CWindowData **)(*v2 + 16LL * i) == a2 )
    {
      DynArray<CWindowList::AccentStateDetails,0>::RemoveAt(v2);
      return;
    }
  }
}
