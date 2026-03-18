/*
 * XREFs of ?OnDeactivated@CSynchronousSuperWetInk@@UEAAXXZ @ 0x180284D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::OnDeactivated(CSynchronousSuperWetInk *this)
{
  __int64 v1; // rcx

  if ( *((_DWORD *)this + 43) != 2 )
  {
    v1 = *((_QWORD *)this + 23);
    if ( v1 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 96) + 424LL))(*(_QWORD *)(v1 + 96), 0LL);
  }
}
