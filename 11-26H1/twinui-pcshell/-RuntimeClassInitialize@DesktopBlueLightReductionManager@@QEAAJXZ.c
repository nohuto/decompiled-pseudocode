/*
 * XREFs of ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x1802C11F4
 * Callers:
 *     ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801F5EF8 (--$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x18010A7F0 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180113258 (--$ActivateInstance@UIServiceHostComponent@@@wil@@YA-AV-$com_ptr_t@UIServiceHostComponent@@Uerr_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopBlueLightReductionManager::RuntimeClassInitialize(DesktopBlueLightReductionManager *this)
{
  BOOL v2; // eax
  const char *v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = IsOS(0x18u);
  try
  {
    if ( !v2 )
    {
      v4 = (__int64 *)wil::ActivateInstance<IServiceHostComponent>((__int64)&v9);
      v5 = *v4;
      *v4 = 0LL;
      v6 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      DesktopBlueLightReductionManager::SubscribeToColorOverrideStateChange((wil::details **)this);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v3);
  }
  return result;
}
