/*
 * XREFs of ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18022EFCC
 * Callers:
 *     ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18022EE8C (--1-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffectCom.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18022EEBC (--1CEffectCompilationService@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1801DE580 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx

  while ( *(_QWORD *)(a1 + 32) )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(a1);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    while ( v2 > 0 )
    {
      --v2;
      v3 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v2);
      if ( v3 )
        std::_Deallocate<16>(v3, 0x10uLL);
    }
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
