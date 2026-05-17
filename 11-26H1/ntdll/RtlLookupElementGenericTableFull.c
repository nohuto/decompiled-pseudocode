/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800B7E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B7F60 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFull(__int64 *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  int v9; // eax
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v4 + 40);
        if ( v9 )
          break;
        if ( !*(_QWORD *)(v4 + 8) )
        {
          *a3 = v4;
          result = 0LL;
          *a4 = 2;
          return result;
        }
        v4 = *(_QWORD *)(v4 + 8);
      }
      if ( v9 != 1 )
      {
        *a3 = v4;
        *a4 = 1;
        *a1 = RtlSplay(*a3);
        return *a3 + 40LL;
      }
      if ( !*(_QWORD *)(v4 + 16) )
        break;
      v4 = *(_QWORD *)(v4 + 16);
    }
    *a3 = v4;
    result = 0LL;
    *a4 = 3;
  }
  else
  {
    *a4 = 0;
    return 0LL;
  }
  return result;
}
