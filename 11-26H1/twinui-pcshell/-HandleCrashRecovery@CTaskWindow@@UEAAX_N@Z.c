/*
 * XREFs of ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x180301D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18001EB94 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1800588F8 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::HandleCrashRecovery(struct IImmersiveApplicationInternal **this, char a2)
{
  _BYTE *v4; // rsi
  _BOOL8 v5; // r12
  struct IImmersiveMonitor *v6; // r9
  struct IImmersiveApplicationInternal *v7; // r15
  void (__fastcall *v8)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v9; // [rsp+60h] [rbp+8h] BYREF

  if ( this[6] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[16], (struct CTaskWindow::TASK_WINDOW *)(this + 4));
    v4 = this + 7;
  }
  else
  {
    v4 = this + 7;
    v5 = *((_BYTE *)this + 56) == 0;
    v6 = 0LL;
    v9 = 0LL;
    v7 = this[16];
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)v7 + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
      v8(v7, &v9);
      v6 = v9;
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      (__int64)this[4],
      0xDu,
      v6,
      this[16],
      v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  }
  if ( *v4 )
  {
    if ( !a2 )
      (*((void (__fastcall **)(struct IImmersiveApplicationInternal **, _QWORD))*this + 20))(this, 0LL);
  }
}
