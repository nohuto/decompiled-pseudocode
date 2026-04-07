/*
 * XREFs of ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x180098AD4
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180086B9C (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositionEffectCache::Initialize(CCompositionEffectCache *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return CCompositionEffectCache::CreateSolidColorBrush(0xFFu, this);
}
