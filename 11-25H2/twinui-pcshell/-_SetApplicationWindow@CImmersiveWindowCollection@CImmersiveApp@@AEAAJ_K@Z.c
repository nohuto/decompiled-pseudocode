/*
 * XREFs of ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180305310
 * Callers:
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180303284 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803040CC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800429B8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1803056C4 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2,
        bool a3)
{
  int updated; // edi

  updated = CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(this, a2, a3);
  if ( updated >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, **((struct ITaskWindow ***)this + 20));
    CImmersiveApp::_UpdateWindowTitleAndButtons(*((int (__fastcall ****)(CImmersiveApp *, GUID *, __int64 *))this + 19));
  }
  return (unsigned int)updated;
}
