/*
 * XREFs of __dyn_tls_init @ 0x18009C9F0
 * Callers:
 *     __dyn_tls_on_demand_init @ 0x18009CA64 (__dyn_tls_on_demand_init.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall **i)(); // rbx

  if ( a2 == 2 )
  {
    v2 = (unsigned int)tls_index;
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(_BYTE *)(v3 + 36) != 1 )
    {
      *(_BYTE *)(v3 + 36) = 1;
      for ( i = &off_1801F8258; i != (__int64 (__fastcall **)())&unk_1801F8260; ++i )
      {
        if ( *i )
          ((void (__fastcall *)(__int64))*i)(v2);
      }
    }
  }
}
