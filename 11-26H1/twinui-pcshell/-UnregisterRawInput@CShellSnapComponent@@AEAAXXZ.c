/*
 * XREFs of ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A3564
 * Callers:
 *     ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x1805A02A0 (-ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z.c)
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1805A0FD4 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ @ 0x1805A35B0 (-UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ.c)
 */

void __fastcall CShellSnapComponent::UnregisterRawInput(CShellSnapComponent *this)
{
  SmartCookie *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CShellSnapComponent *)((char *)this + 936);
  if ( *((_DWORD *)this + 264) )
  {
    CSnapComponentTelemetry::UnregisterRawInput();
    v2 = SmartCookie::Unregister(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86D,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v2);
  }
}
