/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1800BFC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 i; // rbx
  int v9; // eax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 44) )
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
        if ( v9 )
          break;
        if ( !*(_QWORD *)(i + 8) )
        {
          *a3 = i;
          result = 0LL;
          *a4 = 2;
          return result;
        }
        i = *(_QWORD *)(i + 8);
      }
      if ( v9 != 1 )
      {
        *a3 = i;
        *a4 = 1;
        return *a3 + 32LL;
      }
      if ( !*(_QWORD *)(i + 16) )
        break;
    }
    *a3 = i;
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
