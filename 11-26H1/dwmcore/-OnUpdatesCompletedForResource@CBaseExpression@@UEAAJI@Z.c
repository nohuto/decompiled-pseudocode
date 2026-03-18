/*
 * XREFs of ?OnUpdatesCompletedForResource@CBaseExpression@@UEAAJI@Z @ 0x1801B14D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::OnUpdatesCompletedForResource(CBaseExpression *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 25);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 616LL))(v1);
  return 0LL;
}
