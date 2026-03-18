/*
 * XREFs of ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18022EE8C
 * Callers:
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18022EEBC (--1CEffectCompilationService@@EEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18022EFCC (-_Tidy@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, 0x10uLL);
}
