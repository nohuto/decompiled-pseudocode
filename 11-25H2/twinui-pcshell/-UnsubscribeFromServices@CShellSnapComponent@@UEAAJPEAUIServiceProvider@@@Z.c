/*
 * XREFs of ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18057FA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x1802B6148 (-UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ.c)
 *     ?RevokeSnapIds@CShellSnapComponent@@AEAAXXZ @ 0x18057DAFC (-RevokeSnapIds@CShellSnapComponent@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::UnsubscribeFromServices(CShellSnapComponent *this, struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v6; // r14
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 30);
  if ( v3 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 32LL))(
      v3,
      ((unsigned __int64)this + 96) & -(__int64)(this != (CShellSnapComponent *)48));
  v4 = (_QWORD *)((char *)this + 248);
  if ( *((_QWORD *)this + 40) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 56LL))(*v4);
  v10 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 25);
  if ( v5 )
  {
    v10 = 0LL;
    v6 = (_QWORD *)((char *)this + 248);
    if ( (**v5)(v5, &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36, &v10) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      v6 = (_QWORD *)((char *)this + 248);
    }
  }
  else
  {
    v6 = (_QWORD *)((char *)this + 248);
  }
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
  if ( *((_QWORD *)this + 50) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 136LL))(*v4);
  if ( *((_DWORD *)this + 140) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 64LL))(*((_QWORD *)this + 69));
  SnapInteraction::InteractionTracker::UnsubscribeFromServices((CShellSnapComponent *)((char *)this + 568));
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 408));
  SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 736));
  if ( *((_QWORD *)this + 41) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 104LL))(*v6);
  if ( *((_DWORD *)this + 98) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47));
  if ( *((_DWORD *)this + 276) != -1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 104LL))(*((_QWORD *)this + 22));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AF,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v7);
    *((_DWORD *)this + 276) = -1;
  }
  CShellSnapComponent::RevokeSnapIds((RTL_SRWLOCK *)this - 6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return 0LL;
}
