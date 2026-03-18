/*
 * XREFs of sub_14002D24C @ 0x14002D24C
 * Callers:
 *     sub_140021B90 @ 0x140021B90 (sub_140021B90.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002D24C(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v7; // r9d
  __int64 v8; // r13
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rcx

  v7 = a3;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = 16LL * a6;
  v10 = (unsigned __int64)a5 << 6;
  v11 = *(unsigned __int16 *)(v9 + v8 + 86);
  *(_WORD *)(*(_QWORD *)(a1 + 960) + v10 + 42) = v7;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 16) = (unsigned int)(2 * *(_DWORD *)(a1 + 200) * v7)
                                                + *(_QWORD *)(a1 + 176)
                                                + 4096LL;
  v12 = *(_QWORD *)(v8 + 16 * (a6 + 3LL) + 28);
  if ( v12 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960)) = v12;
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 8) = 0LL;
  }
  else if ( *(_WORD *)(v9 + v8 + 86) && (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    sub_140006100(a1, v11 << 6);
    return 8;
  }
  StorPortExtendedFunction(0LL, a1, (unsigned int)(32 * v11), 1701672526LL);
  return 1;
}
