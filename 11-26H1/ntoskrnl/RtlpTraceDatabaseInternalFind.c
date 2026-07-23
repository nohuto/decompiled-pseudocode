/*
 * XREFs of RtlpTraceDatabaseInternalFind @ 0x140623090
 * Callers:
 *     RtlTraceDatabaseFind @ 0x140622D80 (RtlTraceDatabaseFind.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140622EC0 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // eax
  __int64 i; // rdx
  __int64 v10; // r8

  v8 = guard_dispatch_icall_no_overrides(a2, a3);
  ++*(_DWORD *)(a1 + 4LL * (v8 & 0xF) + 152);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (v8 % *(_DWORD *)(a1 + 112))); i; i = *(_QWORD *)(i + 40) )
  {
    if ( a2 == *(_DWORD *)(i + 8) )
    {
      v10 = 0LL;
      if ( a2 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(i + 48) + 8 * v10) == *(_QWORD *)(a3 + 8 * v10) )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        if ( (_DWORD)v10 == a2 )
        {
          if ( a4 )
            *a4 = i;
          return 1;
        }
      }
    }
  }
  if ( a4 )
    *a4 = 0LL;
  return 0;
}
