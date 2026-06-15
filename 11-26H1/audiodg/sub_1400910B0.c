/*
 * XREFs of sub_1400910B0 @ 0x1400910B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400910B0(__int64 a1, int a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 40) )
  {
    sub_14000C2A8(
      (int)retaddr,
      189,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspcrossprocessaudioendpoint.cpp",
      -2147418113);
    return 2147549183LL;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = a2;
    return 0LL;
  }
}
