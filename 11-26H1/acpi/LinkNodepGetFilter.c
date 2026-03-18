/*
 * XREFs of LinkNodepGetFilter @ 0x1400467BC
 * Callers:
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     LinkNodepGetFilter @ 0x1400467BC (LinkNodepGetFilter.c)
 * Callees:
 *     LinkNodepGetFilter @ 0x1400467BC (LinkNodepGetFilter.c)
 */

__int64 __fastcall LinkNodepGetFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v2 + 8) & 0x60) != 0 && *(_QWORD *)(v2 + 784) == a2 )
    return a1;
  v4 = *(_QWORD *)(v2 + 800);
  if ( v4 == v2 + 800 )
    return 0LL;
  v5 = v4 - 816;
  v6 = v4 - 816;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 768);
    if ( v7 )
    {
      result = LinkNodepGetFilter(v7, a2);
      if ( result )
        break;
    }
    v6 = *(_QWORD *)(v6 + 816) - 816LL;
    if ( v6 == v5 )
      return 0LL;
  }
  return result;
}
