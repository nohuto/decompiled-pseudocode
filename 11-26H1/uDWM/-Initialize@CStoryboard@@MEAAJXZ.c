/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x18003E230
 * Callers:
 *     <none>
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?_EnsurePriority@CStoryboard@@IEAAXXZ @ 0x18003E464 (-_EnsurePriority@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this)
{
  CStoryboard::_LogStoryboardEvent(this);
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  CStoryboard::_EnsurePriority(this);
  return 0LL;
}
