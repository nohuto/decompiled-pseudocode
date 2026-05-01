/*
 * XREFs of ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180230B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowManagerBridge::Uninitialize(wil::details **this, void *a2)
{
  Windows::Internal::ApplicationModel::WindowManagement *v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::SetEvent(this[36], a2);
  if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v3) )
  {
    v4 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this[34] + 240LL))(this[34]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v5);
  }
}
