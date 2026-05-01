/*
 * XREFs of ?PrivilegedMaximizeWindow@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@@Z @ 0x1802E9D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::PrivilegedMaximizeWindow(
        CTrustedComponentForegroundControl *this,
        HWND a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(PVOID, HWND))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 32LL))(
         CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\appmanager\\lib\\trustedforegroundcontrol.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
