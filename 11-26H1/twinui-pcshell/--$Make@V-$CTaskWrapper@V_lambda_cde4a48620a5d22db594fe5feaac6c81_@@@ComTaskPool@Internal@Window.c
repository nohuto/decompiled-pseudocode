/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@Z @ 0x1805DF8A8
 * Callers:
 *     ??$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@Z @ 0x1805DFF9C (--$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_cde4a48620a5d22db594fe5feaac6c81_>,_lambda_cde4a48620a5d22db594fe5feaac6c81_>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    v5[4] = *(_QWORD *)(a2 + 16);
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_cde4a48620a5d22db594fe5feaac6c81_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  return a1;
}
