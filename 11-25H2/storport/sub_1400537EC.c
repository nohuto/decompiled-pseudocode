/*
 * XREFs of sub_1400537EC @ 0x1400537EC
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_140026370 @ 0x140026370 (sub_140026370.c)
 *     sub_140029C00 @ 0x140029C00 (sub_140029C00.c)
 */

__int64 __fastcall sub_1400537EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = v6 + *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) != 40 )
    return 3221225473LL;
  if ( byte_1401688B4
    && *(_BYTE *)(v7 + 80) == 1
    && (unsigned int)(unsigned __int8)*(_DWORD *)(v7 + 16) - 129 <= 1
    && *(_BYTE *)(v7 + 59) == 0xEE )
  {
    return 3221225659LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
  v10 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(v10 + 8) = v6;
  if ( *(_BYTE *)(v7 + 80) == 1 )
  {
    v11 = 316LL;
    if ( *(_DWORD *)v5 != 1314275652 )
      v11 = 524LL;
    v12 = sub_14002285C(((*(_DWORD *)(v11 + v5) + 7) & 0xFFFFFFF8) + 1184, v9, (_QWORD *)v5);
  }
  else
  {
    v12 = (__int64)sub_140029C00(*(_QWORD *)(a1 + 728) + 64LL);
  }
  if ( !v12 )
    return 3221225473LL;
  v14 = v12 + 48;
  v15 = v12 + 1184;
  sub_140017C40(v12 + 48, v13, 0, 0LL);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v16 = *(_QWORD *)(v6 + 104);
  else
    v16 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v14 + 160) = a2;
  *(_QWORD *)(v14 + 168) = v6;
  *(_QWORD *)(v14 + 224) = a1;
  v17 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v14 + 136) = 0LL;
  *(_QWORD *)(v14 + 104) = v17;
  *(_QWORD *)(v14 + 768) = v16;
  if ( (*(_BYTE *)(v5 + 4660) & 1) != 0 )
  {
    *(_DWORD *)(v14 + 20) = *(_DWORD *)(v6 + 96);
  }
  else
  {
    *(_WORD *)(v14 + 20) = -1;
    *(_BYTE *)(v14 + 22) = -1;
  }
  v18 = *(_BYTE *)(v14 + 16);
  *(_DWORD *)(v14 + 24) = 0;
  *(_BYTE *)(v14 + 16) = v18 & 0xE3 | 4;
  *(_QWORD *)(v14 + 176) = *(_QWORD *)(v6 + 80);
  v19 = *(_QWORD *)(v6 + 64);
  *(_QWORD *)(v14 + 192) = 0LL;
  *(_QWORD *)(v14 + 184) = v19;
  *(_QWORD *)(v6 + 96) = v14;
  *(_QWORD *)(v6 + 104) = v15;
  sub_140026370((int *)v5, a2);
  *(_QWORD *)(v14 + 656) = sub_1400BC450;
  if ( *(_QWORD *)(v5 + 4960) )
    sub_1400212C0(v5, 0LL, 1LL);
  if ( *(_BYTE *)(v5 + 4370) )
    sub_140017D90(v5, (_QWORD *)v14);
  else
    sub_1400184D0(v5, v14);
  return 259LL;
}
