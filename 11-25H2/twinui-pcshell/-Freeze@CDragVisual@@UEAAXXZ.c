/*
 * XREFs of ?Freeze@CDragVisual@@UEAAXXZ @ 0x18051DF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::Freeze(CDragVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
}
