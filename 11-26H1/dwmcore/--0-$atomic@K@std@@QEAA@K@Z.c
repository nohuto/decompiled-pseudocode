/*
 * XREFs of ??0?$atomic@K@std@@QEAA@K@Z @ 0x18020FA48
 * Callers:
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x18020F9BC (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 * Callees:
 *     ??0?$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z @ 0x18020FA70 (--0-$_Atomic_integral_facade@K@std@@QEAA@AEBK@Z.c)
 */

__int64 __fastcall std::atomic<unsigned long>::atomic<unsigned long>(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_integral_facade<unsigned long>::_Atomic_integral_facade<unsigned long>(a1, v3);
  return v1;
}
