/*
 * XREFs of sub_1400BEB50 @ 0x1400BEB50
 * Callers:
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140036A1C @ 0x140036A1C (sub_140036A1C.c)
 *     sub_14008F190 @ 0x14008F190 (sub_14008F190.c)
 *     sub_1400A1DE8 @ 0x1400A1DE8 (sub_1400A1DE8.c)
 *     sub_1400BE9A8 @ 0x1400BE9A8 (sub_1400BE9A8.c)
 *     sub_1400BEB00 @ 0x1400BEB00 (sub_1400BEB00.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400BEB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r8d
  _BYTE Dst[128]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 3552);
  v7 = *(_QWORD *)(v2 + 3560);
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 6000LL);
  memset_0(Dst, 0, sizeof(Dst));
  if ( !v8
    || !v6
    || !v7
    || (v9 = *(_BYTE *)(v6 + 26) & 0xF, !*(_QWORD *)(v7 + 16 * (v9 + 176)))
    || *(_QWORD *)(v7 + 16 * (v9 + 176)) % ((unsigned __int64)*(unsigned __int16 *)(v6 + 72) + 1)
    || (*(_DWORD *)(v2 + 1952) & 0x20) == 0 )
  {
    v5 = -1073741637;
    goto LABEL_20;
  }
  if ( !*(_BYTE *)(v6 + 4 * v9 + 130) && !*(_QWORD *)v6 )
  {
    *(_BYTE *)(a2 + 93) = 0;
    return v5;
  }
  *(_BYTE *)(a2 + 93) = 1;
  v10 = sub_1400BE9A8(a2, 0LL, (__int64)Dst);
  if ( !v10 )
  {
    v5 = -1073741811;
LABEL_20:
    sub_1400BEB00(a2 + 32);
    return v5;
  }
  v5 = sub_14008F190(a2 + 40, Dst, v10, v11, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  if ( (v5 & 0x80000000) != 0 )
    goto LABEL_20;
  v12 = sub_1400143E0(64LL, 108LL, 1129210194LL, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a2 + 80) = v12;
  v13 = v12;
  if ( !v12 )
  {
    v5 = -1073741801;
    goto LABEL_20;
  }
  memset_0((void *)(v12 + 8), 0, 0x64uLL);
  *(_DWORD *)v13 = 1;
  *(_DWORD *)(v13 + 4) = 108;
  *(_OWORD *)(v13 + 25) = *(_OWORD *)(v8 + 24);
  *(_OWORD *)(v13 + 41) = *(_OWORD *)(v8 + 40);
  *(_QWORD *)(v13 + 57) = *(_QWORD *)(v8 + 56);
  sub_1400A1DE8(v8, v13 + 90, 0x10u);
  sub_140036A1C(*(_QWORD *)(a2 + 80) + 25LL, v14 + 49);
  sub_140036A1C(*(_QWORD *)(a2 + 80) + 90LL, v15 + 1);
  if ( !byte_1401688B4 )
    *(_WORD *)(a2 + 56) &= ~1u;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 1952LL) & 0x20) != 0 )
    *(_WORD *)(a2 + 56) |= 4u;
  return v5;
}
