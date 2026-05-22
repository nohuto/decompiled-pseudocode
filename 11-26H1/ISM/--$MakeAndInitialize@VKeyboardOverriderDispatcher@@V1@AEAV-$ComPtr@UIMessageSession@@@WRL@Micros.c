/*
 * XREFs of ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800F0400
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F210C (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x1800F05C8 (--0KeyboardOverriderDispatcher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800F6364 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
        KeyboardOverriderDispatcher **a1,
        __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  KeyboardOverriderDispatcher *v6; // rbx
  KeyboardOverriderDispatcher *v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x310uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v8 = (KeyboardOverriderDispatcher *)v4;
  if ( v4 )
  {
    v10 = v4;
    v6 = KeyboardOverriderDispatcher::KeyboardOverriderDispatcher((KeyboardOverriderDispatcher *)v4);
    v8 = v6;
    v9 = 0LL;
    v5 = KeyboardOverriderDispatcher::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(KeyboardOverriderDispatcher *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v9);
  return (unsigned int)v5;
}
