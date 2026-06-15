/*
 * XREFs of sub_14008041C @ 0x14008041C
 * Callers:
 *     sub_140067618 @ 0x140067618 (sub_140067618.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001E8BC @ 0x14001E8BC (sub_14001E8BC.c)
 *     sub_1400389AC @ 0x1400389AC (sub_1400389AC.c)
 *     sub_140039C30 @ 0x140039C30 (sub_140039C30.c)
 */

__int64 __fastcall sub_14008041C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v10 = 0LL;
    sub_1400389AC(&v10, 0LL);
    v5 = sub_14001E8BC(a2, v4, &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        36,
        (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
        v5);
      sub_140039C30(&v10);
      return v6;
    }
    v8 = v10;
    v10 = 0LL;
    sub_1400389AC((void **)(a1 + 40), v8);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 40);
    sub_140039C30(&v10);
  }
  return 0LL;
}
