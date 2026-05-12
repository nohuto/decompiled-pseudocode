/*
 * XREFs of sub_14013115C @ 0x14013115C
 * Callers:
 *     sub_140131730 @ 0x140131730 (sub_140131730.c)
 *     sub_1401A74B0 @ 0x1401A74B0 (sub_1401A74B0.c)
 *     sub_1401A756C @ 0x1401A756C (sub_1401A756C.c)
 *     sub_1401A7654 @ 0x1401A7654 (sub_1401A7654.c)
 *     sub_1401A7724 @ 0x1401A7724 (sub_1401A7724.c)
 *     sub_1401A7904 @ 0x1401A7904 (sub_1401A7904.c)
 *     sub_1401A7B6C @ 0x1401A7B6C (sub_1401A7B6C.c)
 *     sub_1401A8380 @ 0x1401A8380 (sub_1401A8380.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14013115C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v2 == 1094997074 )
    {
      if ( v2 )
        return *(_QWORD *)(v2 + 6208);
    }
    else if ( *(_DWORD *)v2 == 1314275652 && v2 )
    {
      return *(_QWORD *)(v2 + 1416);
    }
  }
  return result;
}
