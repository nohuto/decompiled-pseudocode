/*
 * XREFs of ??1ContextualProcessorResponse@@QEAA@XZ @ 0x180018DF0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001AC90 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18001C510 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     _ContextualProcessorBuffer::ResetBuffer_::_1_::dtor$6 @ 0x1801D4A90 (_ContextualProcessorBuffer--ResetBuffer_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$6 @ 0x1801D4C50 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorResponse::~ContextualProcessorResponse(ContextualProcessorResponse *this)
{
  __int64 v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 24) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  v3 = (_QWORD **)*((_QWORD *)this + 20);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v14 = (_QWORD *)*v4;
      std::_Deallocate<16>(v4, 24LL);
      v4 = v14;
    }
    while ( v14 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 20), 24LL);
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 16) - v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = (_QWORD **)*((_QWORD *)this + 12);
  *v6[1] = 0LL;
  v7 = *v6;
  if ( *v6 )
  {
    do
    {
      v15 = (_QWORD *)*v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7 + 3);
      std::_Deallocate<16>(v7, 32LL);
      v7 = v15;
    }
    while ( v15 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 12), 32LL);
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    std::_Deallocate<16>(v9, (*((_QWORD *)this + 7) - v9) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v10 = (_QWORD **)*((_QWORD *)this + 3);
  *v10[1] = 0LL;
  v11 = *v10;
  if ( v11 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      std::_Deallocate<16>(v11, 24LL);
      v11 = v12;
    }
    while ( v12 );
  }
  std::_Deallocate<16>(*((_QWORD *)this + 3), 24LL);
  v13 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
