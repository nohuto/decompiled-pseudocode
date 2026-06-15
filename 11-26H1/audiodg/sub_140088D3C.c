/*
 * XREFs of sub_140088D3C @ 0x140088D3C
 * Callers:
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     sub_14004846C @ 0x14004846C (sub_14004846C.c)
 *     sub_140053D30 @ 0x140053D30 (sub_140053D30.c)
 *     sub_14008764C @ 0x14008764C (sub_14008764C.c)
 */

__int64 __fastcall sub_140088D3C(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // ebx
  int v9; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a3;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a3 + 32);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 32), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    sub_140017CB0((volatile signed __int32 *)(2 * v6 + 16));
  }
LABEL_8:
  if ( v3 )
    sub_140053D30(v3);
  v8 = sub_14008764C(*(_QWORD *)(a1 + 72), (_DWORD *)(a1 + 80), a3, v3);
  if ( v8 >= 0 )
  {
    sub_1400382A0(&v12, a2);
    sub_14004846C((void **)(a1 + 64), &v12);
    sub_14001D96C(&v12);
    if ( *(_QWORD *)(a1 + 64) )
      return 0LL;
    v8 = -2147024882;
    v9 = 122;
  }
  else
  {
    v9 = 119;
  }
  sub_14000C2A8(
    (int)retaddr,
    v9,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\audiopumpdspresourcemanager.cpp",
    v8);
  return (unsigned int)v8;
}
