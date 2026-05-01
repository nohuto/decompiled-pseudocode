/*
 * XREFs of ?GetPIDForRotation@CImmersiveApp@@UEAAKXZ @ 0x1802FD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x1800AE7DC (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetPIDForRotation(CImmersiveApp *this)
{
  bool v1; // zf
  HWND ApplicationWindow; // rax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*((_BYTE *)this + 456) & 1) == 0;
  dwProcessId = 0;
  if ( !v1 )
  {
    ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 176));
    if ( ApplicationWindow )
      GetWindowThreadProcessId(ApplicationWindow, &dwProcessId);
  }
  return dwProcessId;
}
