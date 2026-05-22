/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001E2F8
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18001CC9C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001E64C (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     _InputContext::Create_::_1_::dtor$3 @ 0x1801D4330 (_InputContext--Create_--_1_--dtor$3.c)
 *     _ContextualProcessorBuffer::ResetBuffer_::_1_::dtor$4 @ 0x1801D4A70 (_ContextualProcessorBuffer--ResetBuffer_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$4 @ 0x1801D4C30 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$4.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$9 @ 0x1801D6190 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$9.c)
 *     _std::_Default_allocator_traits_std::allocator_ContextualProcessorBuffer::InputSample___::construct_ContextualProcessorBuffer::InputSample_ContextualProcessorBuffer::InputSample__::_1_::dtor$1 @ 0x1801D6E5E (_std--_Default_allocator_traits_std--allocator_ContextualProcessorBuffer--InputSamp_ea_1801D6E5E.c)
 *     _std::_Default_allocator_traits_std::allocator_ContextualProcessorBuffer::InputSample___::construct_ContextualProcessorBuffer::InputSample_ContextualProcessorBuffer::InputSample__::_1_::dtor$2 @ 0x1801D6E74 (_std--_Default_allocator_traits_std--allocator_ContextualProcessorBuffer--InputSamp_ea_1801D6E74.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  *v3[1] = 0LL;
  v4 = *v3;
  if ( *v3 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      v7 = v4[3];
      if ( v7 )
      {
        v4[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      std::_Deallocate<16>(v4, 32LL);
      v4 = v6;
    }
    while ( v6 );
  }
  return std::_Deallocate<16>(a1[1], 32LL);
}
