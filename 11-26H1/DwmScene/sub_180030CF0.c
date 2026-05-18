/*
 * XREFs of sub_180030CF0 @ 0x180030CF0
 * Callers:
 *     sub_18006095C @ 0x18006095C (sub_18006095C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_180029AC0 @ 0x180029AC0 (sub_180029AC0.c)
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 *     sub_18002FE28 @ 0x18002FE28 (sub_18002FE28.c)
 *     sub_1800301FC @ 0x1800301FC (sub_1800301FC.c)
 *     sub_18003053C @ 0x18003053C (sub_18003053C.c)
 *     sub_1800309F0 @ 0x1800309F0 (sub_1800309F0.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 *     sub_1800310E8 @ 0x1800310E8 (sub_1800310E8.c)
 *     sub_180031168 @ 0x180031168 (sub_180031168.c)
 *     sub_1800311BC @ 0x1800311BC (sub_1800311BC.c)
 *     sub_180031218 @ 0x180031218 (sub_180031218.c)
 *     sub_180031294 @ 0x180031294 (sub_180031294.c)
 *     sub_1800329A0 @ 0x1800329A0 (sub_1800329A0.c)
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_18006FA50 @ 0x18006FA50 (sub_18006FA50.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall sub_180030CF0(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  __int64 *v10; // rax
  HANDLE CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-81h] BYREF
  __int64 v17[4]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v18; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-41h] BYREF

  v17[1] = a1;
  v17[2] = (__int64)a3;
  v17[3] = (__int64)a4;
  v17[0] = (__int64)a5;
  sub_180029AC0(a1 + 8, a2);
  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180029AC0(a1 + 112, a2);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  v9 = (_QWORD *)sub_180011790(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)(a1 + 168) = v9;
  sub_180030B40((__int64 *)(a1 + 184));
  sub_1800311BC(a1 + 200);
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  sub_180029AC0(a1 + 312, a2);
  sub_18006FA50(a1 + 368);
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 464) = *a3;
  *(_QWORD *)(a1 + 472) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = *a4;
  *(_QWORD *)(a1 + 488) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 496) = *a5;
  *(_QWORD *)(a1 + 504) = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  sub_1800310E8(a1 + 528);
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  sub_18002AE20((__int64 *)(a1 + 728));
  *(_BYTE *)(a1 + 744) = 1;
  *(_OWORD *)(a1 + 748) = 0LL;
  *(_OWORD *)(a1 + 764) = 0LL;
  *(_OWORD *)(a1 + 780) = 0LL;
  *(_QWORD *)(a1 + 796) = 0LL;
  *(_DWORD *)(a1 + 804) = 0;
  sub_180029AC0(a1 + 808, a2);
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0x8000000000000000uLL;
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 1LL;
  *(_DWORD *)(a1 + 952) = 2139095039;
  *(_QWORD *)(a1 + 956) = 1023960469LL;
  sub_18002FE28((_QWORD *)(a1 + 968));
  sub_18003053C((_QWORD *)(a1 + 984));
  *(_QWORD *)(a1 + 1072) = 0LL;
  sub_1800309F0((__int64 *)(a1 + 1080));
  *(_DWORD *)(a1 + 1096) = 1;
  sub_180029AC0(a1 + 1104, a2);
  *(_BYTE *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_OWORD *)(a1 + 1184) = 0LL;
  *(_DWORD *)(a1 + 1200) = 60;
  sub_180031294(a1 + 1208);
  sub_180025874(a1 + 1280);
  sub_180031218(a1 + 1368);
  sub_180031168(a1 + 1424);
  sub_1800329A0(a1);
  v16 = a1;
  v10 = sub_1800301FC(&v18, &v16);
  sub_180011F5C((_QWORD *)(a1 + 512), v10);
  if ( v19 )
    sub_180010EC8(v19);
  sub_18004EF74(*(_QWORD *)(a1 + 512));
  *(_QWORD *)(a1 + 1176) = *sub_180012B20(v17);
  memset(&ppsmemCounters, 0, sizeof(ppsmemCounters));
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  *(_QWORD *)(a1 + 1168) = ppsmemCounters.PeakWorkingSetSize;
  v12 = a3[1];
  if ( v12 )
    sub_180010EC8(v12);
  v13 = a4[1];
  if ( v13 )
    sub_180010EC8(v13);
  v14 = a5[1];
  if ( v14 )
    sub_180010EC8(v14);
  return a1;
}
