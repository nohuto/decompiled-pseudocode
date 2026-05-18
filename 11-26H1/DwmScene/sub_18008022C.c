/*
 * XREFs of sub_18008022C @ 0x18008022C
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180039010 @ 0x180039010 (sub_180039010.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 */

__int64 *__fastcall sub_18008022C(_QWORD *a1, __int64 *a2, int a3, int a4, char a5)
{
  unsigned int v9; // esi
  __int64 *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 *result; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]

  sub_180012A94(*a2 + 72, &v15);
  sub_180080354(a1, &v15);
  v9 = 0;
  v10 = (__int64 *)(a1[2] + 256LL);
  do
  {
    if ( ((v9 & 0xFFFFFFFC) != 0 || v9 == 1) && *v10 )
      sub_18007DD3C(*v10, a2, a4);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 0xA );
  v11 = a1 + 6;
  if ( a3 )
  {
    if ( a5 && a1[12] )
      v11 = a1 + 12;
  }
  else if ( a5 )
  {
    v11 = (_QWORD *)((char *)a1 + (((unsigned __int128)-(__int128)(unsigned __int64)a1[10] >> 64) & 0x20) + 48);
  }
  else if ( a1[8] )
  {
    v11 = a1 + 8;
  }
  sub_180039010(*a2, v11);
  sub_18003AC0C((_QWORD *)(*(_QWORD *)(*a2 + 96) + 9784LL), a1 + 22);
  v12 = *a2;
  v13 = sub_18004232C((__int64)a1, &v15);
  result = sub_180013540((__int64 *)(*(_QWORD *)(v12 + 96) + 8LL), v13);
  if ( v16 )
    return (__int64 *)sub_180010EC8(v16);
  return result;
}
