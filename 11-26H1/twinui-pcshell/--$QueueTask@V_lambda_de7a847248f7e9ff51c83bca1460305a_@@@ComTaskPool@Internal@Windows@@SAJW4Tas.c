/*
 * XREFs of ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x180182008
 * Callers:
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18006547C (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@$$QEAV0@@Z @ 0x1801820B0 (--0_lambda_de7a847248f7e9ff51c83bca1460305a_@@QEAA@$$QEAV0@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_de7a847248f7e9ff51c83bca1460305a_>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    _lambda_de7a847248f7e9ff51c83bca1460305a_::_lambda_de7a847248f7e9ff51c83bca1460305a_(v7 + 2, a4);
    *v7 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
