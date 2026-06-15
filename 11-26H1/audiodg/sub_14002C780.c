/*
 * XREFs of sub_14002C780 @ 0x14002C780
 * Callers:
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002D758 @ 0x14002D758 (sub_14002D758.c)
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 */

__int64 __fastcall sub_14002C780(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 336);
  if ( v1 == 2 )
  {
    v3 = sub_14002C870();
    if ( v3 >= 0 )
      goto LABEL_8;
    v7 = 2548;
LABEL_13:
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v3);
    return (unsigned int)v3;
  }
  if ( v1 == 1 )
  {
    v3 = sub_14002DD08();
    if ( v3 < 0 )
    {
      v7 = 2552;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  if ( (*(_QWORD *)a1 || *(_DWORD *)(a1 + 8))
    && (*(_DWORD *)(a1 + 112) == 3 || *(_DWORD *)(a1 + 136) || (*(_BYTE *)(a1 + 140) & 8) != 0) )
  {
    v3 = sub_14002C870();
    if ( v3 >= 0 )
      goto LABEL_8;
    v7 = 2571;
    goto LABEL_13;
  }
  v3 = sub_14002DD08();
  if ( v3 < 0 )
  {
    v7 = 2578;
    goto LABEL_13;
  }
LABEL_8:
  sub_14002DC40(a1);
  v4 = sub_14002D758(a1);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 2586, (int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", v4);
  return v5;
}
