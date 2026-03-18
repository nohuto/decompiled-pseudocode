/*
 * XREFs of VfQueryDispatchTable @ 0x140604AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void *__fastcall VfQueryDispatchTable(int a1, unsigned int a2)
{
  __int64 v2; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rcx
  void *v7; // rax

  v2 = 0LL;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead && !VfClearanceFlag )
    return 0LL;
  if ( !a1 )
  {
    v7 = &VfWdmDispatchTable;
    if ( a2 > dword_140E01EE4 )
      return 0LL;
    return v7;
  }
  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( a2 <= dword_140E01EC4 )
        return &VfXdvDispatchTable;
      return (void *)v2;
    }
    if ( v5 == 1 && ViFnXdvQueryDispatchTable )
    {
      v6 = 4LL;
      return (void *)guard_dispatch_icall_no_overrides(v6);
    }
  }
  else if ( ViFnXdvQueryDispatchTable )
  {
    v6 = 2LL;
    return (void *)guard_dispatch_icall_no_overrides(v6);
  }
  return (void *)v2;
}
