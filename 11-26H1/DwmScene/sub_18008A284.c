/*
 * XREFs of sub_18008A284 @ 0x18008A284
 * Callers:
 *     sub_18005FD4C @ 0x18005FD4C (sub_18005FD4C.c)
 *     sub_180089FE0 @ 0x180089FE0 (sub_180089FE0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003EF1C @ 0x18003EF1C (sub_18003EF1C.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_18008B1B0 @ 0x18008B1B0 (sub_18008B1B0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008A284(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = sub_180012C40(v7, a2);
  sub_180056AE0(a1, (__int64)v4);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerCamera::`vftable';
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1828) = 1061158912;
  *(_DWORD *)(a1 + 1832) = 1092616192;
  *(_DWORD *)(a1 + 1880) = 1071644672;
  sub_18003EF1C((_DWORD *)(a1 + 1904), _InterlockedIncrement(&dword_1801C8F14));
  *(_QWORD *)(a1 + 1884) = 0LL;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  sub_18008B1B0(a1);
  v5 = a2[1];
  if ( v5 )
    sub_180010EC8(v5);
  return a1;
}
