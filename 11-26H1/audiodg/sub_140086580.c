/*
 * XREFs of sub_140086580 @ 0x140086580
 * Callers:
 *     <none>
 * Callees:
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002C6CC @ 0x14002C6CC (sub_14002C6CC.c)
 */

__int64 __fastcall sub_140086580(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  __int64 *v7; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 1 )
  {
    v4 = -2147024809;
    v5 = 1197;
LABEL_3:
    sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v4);
    return v4;
  }
  v7 = (__int64 *)(a1 + 784);
  *(_DWORD *)(a1 + 80) = a2 != 0;
  sub_140004C9C((_QWORD *)(a1 + 784), a3);
  if ( *(_QWORD *)(a1 + 792) != *v7 )
    sub_14002C6CC((__int64 *)(a1 + 792), *v7);
  if ( !*(_QWORD *)(a1 + 792) )
  {
    v4 = -2147467262;
    v5 = 1204;
    goto LABEL_3;
  }
  *(_BYTE *)(a1 + 776) = 1;
  return 0LL;
}
