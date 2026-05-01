/*
 * XREFs of _lambda_f34156996333d9e1fc69e3257dca72a2_::operator() @ 0x1802ABE14
 * Callers:
 *     wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_::operator() @ 0x1802E12B0 (wistd--__function--__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_S_ea_1802E12B0.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f34156996333d9e1fc69e3257dca72a2_::operator()(__int64 *a1, _DWORD *a2)
{
  bool v2; // si
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  int v7; // edi
  __int64 v8[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (*a2 & 0x3FC000) != 0;
  v8[0] = *a1;
  v3 = v8[0];
  if ( v8[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 8LL))(v8[0]);
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    *((_BYTE *)v5 + 16) = v2;
    v5[3] = 0LL;
    if ( v5 + 3 != v8 )
    {
      v5[3] = v3;
      v8[0] = 0LL;
    }
    *v5 = &off_180705090;
  }
  else
  {
    v5 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v8);
}
