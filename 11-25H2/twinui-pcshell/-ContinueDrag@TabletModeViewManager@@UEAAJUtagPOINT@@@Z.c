/*
 * XREFs of ?ContinueDrag@TabletModeViewManager@@UEAAJUtagPOINT@@@Z @ 0x1804FD210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeViewManager::ContinueDrag(TabletModeViewManager *this, struct tagPOINT a2)
{
  __int64 v2; // r9

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
    return 2147943568LL;
  if ( !*((_BYTE *)this + 80) )
    (*(void (__fastcall **)(_QWORD, _QWORD, struct tagPOINT))(*(_QWORD *)v2 + 32LL))(*((_QWORD *)this + 6), 0LL, a2);
  return 0LL;
}
