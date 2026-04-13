/*
 * XREFs of __dyn_tls_init @ 0x180021920
 * Callers:
 *     __dyn_tls_on_demand_init @ 0x180021994 (__dyn_tls_on_demand_init.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _dyn_tls_init(__int64 a1, int a2)
{
  __int64 v2; // rdx
  void (**i)(void); // rbx

  if ( a2 == 2 )
  {
    v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(_DWORD *)(v2 + 4) != 1 )
    {
      *(_DWORD *)(v2 + 4) = 1;
      for ( i = &qword_1800E0358; i < &qword_1800E0358; ++i )
      {
        if ( *i )
          (*i)();
      }
    }
  }
  return 1LL;
}
