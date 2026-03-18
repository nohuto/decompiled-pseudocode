/*
 * XREFs of ?GetBackdropFlags@CMaskBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x180192980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::GetBackdropFlags(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 312LL))(v4) | v2;
  return v2;
}
