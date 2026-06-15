/*
 * XREFs of sub_140037BE8 @ 0x140037BE8
 * Callers:
 *     sub_140037A44 @ 0x140037A44 (sub_140037A44.c)
 *     sub_14007D840 @ 0x14007D840 (sub_14007D840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037BE8(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = 8LL * a2;
  if ( v4 )
    v7 = o_realloc(v4, v6);
  else
    v7 = _o_malloc(v6, v6);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 64) = v7;
    *(_DWORD *)(a1 + 52) = a2;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
