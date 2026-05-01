/*
 * XREFs of ?GetBatch@UwpWindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801555C8
 * Callers:
 *     ?PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180154BCC (-PushBoundsToAppView@UwpWindowWrapper@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UwpWindowWrapper::GetBatch(
        UwpWindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !*a2 && *((_DWORD *)this + 76) )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 152LL))(
                     *((_QWORD *)this + 36),
                     &v10);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v5 + 56LL))(
           *v5,
           *((unsigned int *)this + 76),
           0LL,
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v6,
        v7);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
