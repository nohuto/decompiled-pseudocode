/*
 * XREFs of sub_14005C820 @ 0x14005C820
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 */

__int64 __fastcall sub_14005C820(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v5; // ebx
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v5 = sub_14003826C((__int64 *)(a1 + 408), a2);
  if ( v5 < 0 )
  {
    v6 = 1871;
LABEL_3:
    sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v5);
    return (unsigned int)v5;
  }
  v5 = sub_14003826C((__int64 *)(a1 + 424), a3);
  if ( v5 < 0 )
  {
    v6 = 1872;
    goto LABEL_3;
  }
  return 0LL;
}
