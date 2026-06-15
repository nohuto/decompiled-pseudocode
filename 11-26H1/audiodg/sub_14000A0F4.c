/*
 * XREFs of sub_14000A0F4 @ 0x14000A0F4
 * Callers:
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 * Callees:
 *     sub_14000A184 @ 0x14000A184 (sub_14000A184.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400364B0 @ 0x1400364B0 (sub_1400364B0.c)
 */

__int64 __fastcall sub_14000A0F4(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(a1 + 16) )
  {
    v2 = sub_14000A184();
    if ( v2 >= 0 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 4) = 1;
      return 0LL;
    }
    v4 = 180LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v2 = sub_1400364B0();
    if ( v2 >= 0 )
      goto LABEL_3;
    v4 = 184LL;
LABEL_5:
    sub_14000C2A8(retaddr, v4, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", (unsigned int)v2);
    return (unsigned int)v2;
  }
  sub_14000C2A8(retaddr, 190LL, "avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp", 2147549183LL);
  return 2147549183LL;
}
