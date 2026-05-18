/*
 * XREFs of sub_18000FD08 @ 0x18000FD08
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_18000D964 @ 0x18000D964 (sub_18000D964.c)
 *     sub_18000E6A0 @ 0x18000E6A0 (sub_18000E6A0.c)
 *     sub_18000E740 @ 0x18000E740 (sub_18000E740.c)
 *     sub_18000EB70 @ 0x18000EB70 (sub_18000EB70.c)
 *     sub_18000FF18 @ 0x18000FF18 (sub_18000FF18.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_180011074 @ 0x180011074 (sub_180011074.c)
 */

__int64 __fastcall sub_18000FD08(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = sub_18000FF18(8u, 0x78uLL);
  sub_18000D954(&v16, v6);
  if ( sub_18000D964(&v16) )
  {
    v9 = -2147024882;
    sub_1800102C4(retaddr, 328LL, "wil", 2147942414LL);
LABEL_7:
    sub_18000E6A0((__int64 *)&v16);
    return v9;
  }
  v10 = v16;
  v14 = 0LL;
  if ( (v16 & 3) != 0 )
    sub_180010F3C(v7);
  v11 = sub_18000EB70((__int64)&v14, a1, v8, v16 >> 2);
  v9 = v11;
  if ( v11 < 0 )
  {
    sub_1800102C4(retaddr, 331LL, "wil", (unsigned int)v11);
    sub_18000E740(&v14);
    goto LABEL_7;
  }
  *(_DWORD *)v10 = 1;
  *(_QWORD *)(v10 + 8) = *a2;
  v13 = v14;
  *a2 = 0LL;
  *(_OWORD *)(v10 + 16) = __PAIR128__(*((unsigned __int64 *)&v14 + 1), v13);
  v14 = 0uLL;
  memset((void *)(v10 + 34), 0, 0x56uLL);
  *(_WORD *)(v10 + 32) = 88;
  *(_DWORD *)(v10 + 36) = 1;
  memset((void *)(v10 + 40), 0, 0x50uLL);
  *a3 = sub_180011074(&v16);
  sub_18000E740(&v14);
  sub_18000E6A0((__int64 *)&v16);
  return 0LL;
}
