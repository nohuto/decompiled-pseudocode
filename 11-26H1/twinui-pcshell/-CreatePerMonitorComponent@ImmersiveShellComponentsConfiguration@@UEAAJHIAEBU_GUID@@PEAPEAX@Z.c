/*
 * XREFs of ?CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x1803E4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCreator@ComponentCreator@@QEAAAEAV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@W4ImmersiveComponentOptions@@@Z @ 0x1801BD6D0 (-GetCreator@ComponentCreator@@QEAAAEAV-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_po.c)
 *     ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x1803E589C (-at@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::CreatePerMonitorComponent(
        ImmersiveShellComponentsConfiguration *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  __int64 v7; // rax
  _QWORD *Creator; // rax
  __int64 v9; // r10
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at(
         (char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 72,
         a3);
  Creator = (_QWORD *)ComponentCreator::GetCreator((__int64)this + 96, *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8LL));
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(*(_QWORD *)*Creator + 24LL))(
          *Creator,
          v9,
          a4,
          a5);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40F,
    (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
