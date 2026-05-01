/*
 * XREFs of __dyn_tls_init @ 0x180002330
 * Callers:
 *     __dyn_tls_on_demand_init @ 0x1800023A4 (__dyn_tls_on_demand_init.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  void (__fastcall **i)(__int64); // rbx

  if ( a2 == 2 )
  {
    v2 = (unsigned int)tls_index;
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(_BYTE *)(v3 + 4) != 1 )
    {
      *(_BYTE *)(v3 + 4) = 1;
      for ( i = (void (__fastcall **)(__int64))&unk_18004AF30; i != (void (__fastcall **)(__int64))&unk_18004AF30; ++i )
      {
        if ( *i )
          (*i)(v2);
      }
    }
  }
}
