/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180054A68
 * Callers:
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$4 @ 0x1801DCD63 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>::~list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>(
        _QWORD *a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      std::_Deallocate<16>(v3, 32LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16>(*a1, 32LL);
}
