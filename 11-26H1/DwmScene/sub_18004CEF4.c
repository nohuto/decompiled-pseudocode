/*
 * XREFs of sub_18004CEF4 @ 0x18004CEF4
 * Callers:
 *     sub_18002DAF0 @ 0x18002DAF0 (sub_18002DAF0.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800184AC @ 0x1800184AC (sub_1800184AC.c)
 *     sub_18001BA04 @ 0x18001BA04 (sub_18001BA04.c)
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18004CEF4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rbx
  int Src; // [rsp+80h] [rbp+18h] BYREF
  char v12; // [rsp+84h] [rbp+1Ch] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18002AE20((__int64 *)(a1 + 16));
  sub_18000D81C(a1 + 32, 32LL, 64LL, sub_1800143C0);
  *(_DWORD *)(a1 + 2080) = 0;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  v4 = sub_180011790(0x48uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 2088) = v4;
  sub_18000D81C(a1 + 2104, 32LL, 512LL, sub_1800143C0);
  *(_DWORD *)(a1 + 18488) = 0;
  sub_1800181BC((_QWORD *)(a1 + 18496), (__int64)&unk_1801CCF58);
  sub_1800181BC((_QWORD *)(a1 + 18528), (__int64)&unk_1801CD4D8);
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  v5 = sub_180011790(0x50uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 18560) = v5;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  v6 = sub_180011790(0x68uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 18576) = v6;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v7 = sub_180011790(0x50uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 18592) = v7;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  v8 = sub_180011790(0x38uLL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 18608) = v8;
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  Src = 3;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  sub_18001BA04(a1 + 18664, 1uLL);
  v9 = *(char **)(a1 + 18664);
  sub_180017A18(&Src, (__int64)&v12, v9);
  *(_QWORD *)(a1 + 18672) = v9 + 4;
  v13 = 0LL;
  sub_1800184AC(&v13);
  *(_QWORD *)(a1 + 18688) = a2;
  sub_18001490C(a1 + 18456, "<invalid>", 9uLL);
  return a1;
}
