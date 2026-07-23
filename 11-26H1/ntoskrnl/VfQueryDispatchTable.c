/*
 * XREFs of VfQueryDispatchTable @ 0x140644A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void *__fastcall VfQueryDispatchTable(int a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  void *v10; // rax

  v2 = 0LL;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead && !VfClearanceFlag )
    return 0LL;
  if ( !a1 )
  {
    v10 = &VfWdmDispatchTable;
    if ( (unsigned int)a2 > dword_140E01F04 )
      return 0LL;
    return v10;
  }
  v4 = a1 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( (unsigned int)a2 <= dword_140E01F54 )
        return &VfXdvDispatchTable;
      return (void *)v2;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 && (unsigned int)a2 <= dword_140E01F94 )
            return &VfDomainDispatchTable;
        }
        else if ( (unsigned int)a2 <= dword_140E01F84 )
        {
          return &VfBiosDispatchTable;
        }
      }
      else if ( (unsigned int)a2 <= dword_140E01F74 )
      {
        return &DifIovDispatchTable;
      }
      return (void *)v2;
    }
    if ( ViFnXdvQueryDispatchTable )
    {
      v9 = 4LL;
      return (void *)guard_dispatch_icall_no_overrides(v9, a2);
    }
  }
  else if ( ViFnXdvQueryDispatchTable )
  {
    v9 = 2LL;
    return (void *)guard_dispatch_icall_no_overrides(v9, a2);
  }
  return (void *)v2;
}
