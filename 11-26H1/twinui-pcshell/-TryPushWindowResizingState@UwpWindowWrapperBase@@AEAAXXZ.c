/*
 * XREFs of ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801C9FA0
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator() @ 0x180445270 (_lambda_3bc8458981c1f89b7e30203ff9c56e4f_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UwpWindowWrapperBase::TryPushWindowResizingState(UwpWindowWrapperBase *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // r8
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (!Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(this)
     || (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 2) + 224LL))((char *)this + 16) == 1)
    && *((_DWORD *)this + 74) )
  {
    v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 152LL))(
                     *((_QWORD *)this + 35),
                     &v9);
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v8);
    LOBYTE(v4) = *((_BYTE *)this + 463);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v3 + 200LL))(
           *v3,
           *((unsigned int *)this + 74),
           v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x477,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v6);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
