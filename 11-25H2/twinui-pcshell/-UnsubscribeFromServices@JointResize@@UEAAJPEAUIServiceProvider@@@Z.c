/*
 * XREFs of ?UnsubscribeFromServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x180518420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFromEvents@JointResize@@AEAAJXZ @ 0x18022B654 (-UnregisterFromEvents@JointResize@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall JointResize::UnsubscribeFromServices(JointResize *this, struct IServiceProvider *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 224);
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v4 + 64LL))(v4, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  }
  v5 = JointResize::UnregisterFromEvents((JointResize *)((char *)this - 24));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x102,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
