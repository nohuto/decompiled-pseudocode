/*
 * XREFs of ??$MakeAndInitialize@VDelegatedInkCanvasProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDelegatedInkCanvasProcessor@@@Z @ 0x18007E030
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005B630 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x18007E0D4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DelegatedInkCanvasProcessor,DelegatedInkCanvasProcessor,>(
        _QWORD *a1)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>(v2);
    *(_QWORD *)v3 = &DelegatedInkCanvasProcessor::`vftable';
    v3[16] = 1;
    *((_QWORD *)v3 + 3) = 0LL;
    std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)v3 + 4);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = v3;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v5);
    return 2147942414LL;
  }
}
