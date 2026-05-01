/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18013D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  signed __int32 v6; // eax
  __int64 v7; // rdi
  signed __int32 v8; // edx
  __int64 (__fastcall *v9)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  __int64 v10; // rax
  int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    do
      v6 = *(_DWORD *)(v5 + 36);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v6 + 1, v6) );
    v4 = v5;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 656LL);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 656LL));
    v14 = v7;
    do
      v8 = *(_DWORD *)(v4 + 36);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 36), v8 - 1, v8) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v14 )
  {
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL);
    return (unsigned int)v11;
  }
  v9 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v14 + 88LL);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v11 = v9(v14, v10, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, a2);
  if ( v11 < 0 )
  {
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return (unsigned int)v11;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return 0LL;
}
