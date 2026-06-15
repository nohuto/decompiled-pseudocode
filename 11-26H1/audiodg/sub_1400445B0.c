/*
 * XREFs of sub_1400445B0 @ 0x1400445B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_1400446B0 @ 0x1400446B0 (sub_1400446B0.c)
 *     sub_140046BEC @ 0x140046BEC (sub_140046BEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400445B0(_OWORD *a1)
{
  unsigned __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v2 = sub_14000DA4C();
  v4 = sub_14000DF30(0x2E8uLL, v2, v3);
  v10 = v4;
  if ( v4 )
    v5 = sub_1400446B0(v4);
  else
    v5 = 0LL;
  v10 = v5;
  if ( v5 )
  {
    sub_1400B6010(v5);
    *(_OWORD *)(v5 + 224) = *a1;
    v6 = sub_1400B6010(v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
      sub_1400B6010(v5);
      return 0LL;
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        23,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
        v6);
      sub_140046BEC(&v10);
      return v7;
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      20,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
      -2147024882);
    return 2147942414LL;
  }
}
