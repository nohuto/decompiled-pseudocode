/*
 * XREFs of sub_1800494AC @ 0x1800494AC
 * Callers:
 *     sub_180014FE0 @ 0x180014FE0 (sub_180014FE0.c)
 *     sub_180049048 @ 0x180049048 (sub_180049048.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_1800490A8 @ 0x1800490A8 (sub_1800490A8.c)
 *     sub_180049298 @ 0x180049298 (sub_180049298.c)
 *     sub_18007A800 @ 0x18007A800 (sub_18007A800.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800494AC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  sub_180011CC4(v9, "Mesh Instance");
  sub_18007A800(a1, v9, a2);
  sub_1800129D0((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_1800FA7E0;
  sub_18003C8A4(*a2, 3, 1);
  v4 = *(_QWORD *)(a1 + 104);
  v5 = 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v4) >> 3);
  if ( v5 <= 1 )
  {
    if ( !v5 )
    {
      if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 120) - v4) >> 3) )
        *(_QWORD *)(a1 + 112) = sub_180049298(*(_QWORD *)(a1 + 112), 1 - v5);
      else
        sub_1800490A8((__int64 *)(a1 + 104), 1uLL);
    }
  }
  else
  {
    v6 = v4 + 88;
    sub_180049070(v4 + 88, *(_QWORD *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = v6;
  }
  v7 = a2[1];
  if ( v7 )
    sub_180010EC8(v7);
  return a1;
}
