/*
 * XREFs of ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A5FC
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180078DA4 (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::UnregisterAccentState(CWindowList *this, struct CWindowData *a2)
{
  _QWORD *v3; // r8
  unsigned int i; // edx

  v3 = (_QWORD *)((char *)this + 568);
  for ( i = 0; i < *((_DWORD *)this + 148); ++i )
  {
    if ( *(struct CWindowData **)(*v3 + 16LL * i) == a2 )
    {
      DynArray<CWindowList::AccentStateDetails,0>::RemoveAt(v3);
      return;
    }
  }
}
