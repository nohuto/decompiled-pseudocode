/*
 * XREFs of ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180300C68
 * Callers:
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1802FE9F4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1802FF9FC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005E1E4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800A95CC (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x180301028 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
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
