/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x18022D590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 456) & 1) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 176));
  return result;
}
