/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x18007C650
 * Callers:
 *     <none>
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180029CCC (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18007C68C (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::Initialize(__m128i *this, __int64 a2)
{
  CStoryboard::_LogStoryboardEvent(this, a2);
  this[4].m128i_i32[2] = *(_DWORD *)(*(__int64 (__fastcall **)(__m128i *))(this->m128i_i64[0] + 16))(this);
  CStoryboard::_EnsurePriority((CStoryboard *)this);
  return 0LL;
}
