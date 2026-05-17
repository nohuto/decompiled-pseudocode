/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1800BF740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
        if ( v6 )
          break;
        if ( !*(_QWORD *)(i + 8) )
        {
          v7 = 2;
          goto LABEL_10;
        }
        i = *(_QWORD *)(i + 8);
      }
      if ( v6 != 1 )
      {
        v7 = 1;
        goto LABEL_10;
      }
      if ( !*(_QWORD *)(i + 16) )
        break;
    }
    v7 = 3;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 32;
  if ( v7 == 1 )
    return v8;
  return v2;
}
