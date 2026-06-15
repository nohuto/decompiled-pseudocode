/*
 * XREFs of sub_14006AC50 @ 0x14006AC50
 * Callers:
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140030D48 @ 0x140030D48 (sub_140030D48.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14004B6D4 @ 0x14004B6D4 (sub_14004B6D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006AC50(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // ebp
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1 == 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = !v6;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)(v4 + 40) = 6;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)v4 = off_1400BC708;
    *(_DWORD *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0LL;
    v7 = sub_14004B6D4(
           *(_QWORD *)(a1 + 128),
           (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 128) + 16LL) + 18,
           (_QWORD *)(v4 + 48));
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v5 + 60) = *(_DWORD *)a1;
      *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 12);
      sub_140030D48((_QWORD *)(v5 + 8), (_QWORD *)(v5 + 48));
      sub_140030D48((_QWORD *)(v5 + 16), (_QWORD *)(v5 + 48));
      *(_QWORD *)(v5 + 64) = *(_QWORD *)(a1 + 304);
      result = 0LL;
      *a2 = v5;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 988, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v7);
      sub_1400B6010(v5);
      return v8;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 984, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", -2147024882);
    return 2147942414LL;
  }
  return result;
}
