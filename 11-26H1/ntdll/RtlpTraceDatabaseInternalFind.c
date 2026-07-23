/*
 * XREFs of RtlpTraceDatabaseInternalFind @ 0x18014A2E0
 * Callers:
 *     RtlTraceDatabaseFind @ 0x180149F80 (RtlTraceDatabaseFind.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18014A124 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpTraceDatabaseInternalFind(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // eax
  __int64 i; // rdx
  __int64 v10; // r8

  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 104))(a2, a3);
  ++*(_DWORD *)(a1 + 4LL * (v8 & 0xF) + 128);
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * (v8 % *(_DWORD *)(a1 + 88))); i; i = *(_QWORD *)(i + 40) )
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
