/*
 * XREFs of ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x18008E3C8
 * Callers:
 *     CreateInputServiceProxy @ 0x18008DBBC (CreateInputServiceProxy.c)
 * Callees:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180057D20 (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0InputServiceProxy@@QEAA@XZ @ 0x180161CE8 (--0InputServiceProxy@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputServiceProxy,IInputServiceProxy,IInputServiceProxyOwner * &>(
        _QWORD *a1,
        struct IInputServiceProxyOwner **a2)
{
  InputServiceProxy *v4; // rax
  InputServiceProxy *v6; // rdi
  int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  InputServiceProxy *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (InputServiceProxy *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v6 = InputServiceProxy::InputServiceProxy(v4);
  v9 = v6;
  v8 = 0LL;
  v7 = InputServiceProxy::RuntimeClassInitialize(v6, *a2);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(InputServiceProxy *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
           a1);
    (*(void (__fastcall **)(InputServiceProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(InputServiceProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v8);
  return (unsigned int)v7;
}
