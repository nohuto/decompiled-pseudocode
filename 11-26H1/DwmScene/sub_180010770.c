/*
 * XREFs of sub_180010770 @ 0x180010770
 * Callers:
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 * Callees:
 *     sub_18000FF18 @ 0x18000FF18 (sub_18000FF18.c)
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 */

int __fastcall sub_180010770(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  int v3; // edi
  _WORD *v6; // rcx
  __int64 v7; // r9
  __int64 i; // rcx
  unsigned __int16 v9; // dx
  volatile signed __int32 *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( v3 )
    {
      v2 = sub_18000FF18(8u, 0x190uLL);
      *(_QWORD *)(a1 + 24) = v2;
      if ( v2 )
      {
        *(_DWORD *)(a1 + 32) = 5;
        v6 = v2 + 200;
        while ( v2 != v6 )
        {
          *v2 = 80;
          v2 += 40;
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    if ( v3 )
    {
      for ( i = *(_QWORD *)(a1 + 24); i != v7 + 80LL * *(unsigned __int16 *)(a1 + 32); i += 80LL )
      {
        if ( *(_DWORD *)(i + 4) > *(_DWORD *)(a1 + 16) )
        {
          LODWORD(v2) = *(_DWORD *)(a2 + 8);
          if ( *(_DWORD *)(i + 8) == (_DWORD)v2 )
            return (int)v2;
        }
      }
    }
    v9 = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
    v10 = *(volatile signed __int32 **)(a1 + 8);
    *(_WORD *)(a1 + 34) = v9;
    LODWORD(v2) = sub_180010390(v7 + 80LL * v9, a2, _InterlockedIncrement(v10));
  }
  return (int)v2;
}
