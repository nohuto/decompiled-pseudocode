/*
 * XREFs of ??$make_unique@VApplicationFlyoutView@@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@V?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VApplicationFlyoutView@@U?$default_delete@VApplicationFlyoutView@@@std@@@0@AEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@0@AEAPEBG@Z @ 0x1805FB384
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_unique<ApplicationFlyoutView,IPrivilegedPresentationOperations * &,IInputHostLayout * &,std::unique_ptr<Utils::ProtocolLauncher>,unsigned short const * &,0>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  char *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax

  v9 = (char *)operator new(0x68uLL);
  v10 = *a5;
  v11 = *a3;
  v12 = *a2;
  *(_QWORD *)v9 = &ApplicationFlyoutView::`vftable';
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)v9 + 1,
    v12);
  *((_QWORD *)v9 + 2) = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v13 = *a4;
  *a4 = 0LL;
  *((_QWORD *)v9 + 3) = v13;
  std::wstring::wstring((__int64)(v9 + 32), v10);
  *((_QWORD *)v9 + 8) = 0LL;
  *(_OWORD *)(v9 + 72) = 0LL;
  *((_DWORD *)v9 + 22) = 3;
  *((_QWORD *)v9 + 12) = 0LL;
  *a1 = v9;
  return a1;
}
