/*
 * XREFs of sub_180086880 @ 0x180086880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 *     sub_1800601DC @ 0x1800601DC (sub_1800601DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180086880(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_180012C40(&v8, a2);
  sub_1800587B0(a1, v4);
  sub_1800601DC(&v8, a2);
  v5 = v8;
  sub_180013540((__int64 *)(v8 + 1896), (_QWORD *)(a1 + 1896));
  *(_DWORD *)(v5 + 1940) = *(_DWORD *)(a1 + 1940);
  *(_DWORD *)(v5 + 1944) = *(_DWORD *)(a1 + 1944);
  *(_BYTE *)(v5 + 1952) = *(_BYTE *)(a1 + 1952);
  *(_DWORD *)(v5 + 1948) = *(_DWORD *)(a1 + 1948);
  *(_DWORD *)(v5 + 1956) = *(_DWORD *)(a1 + 1956);
  *(_DWORD *)(v5 + 1964) = *(_DWORD *)(a1 + 1964);
  *(_DWORD *)(v5 + 1960) = *(_DWORD *)(a1 + 1960);
  *(_DWORD *)(v5 + 1968) = *(_DWORD *)(a1 + 1968);
  sub_1800143E4(v5 + 1768, a1 + 1768);
  result = sub_1800143E4(v5 + 1848, a1 + 1848);
  if ( v9 )
    result = sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
