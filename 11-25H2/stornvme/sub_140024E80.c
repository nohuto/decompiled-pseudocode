/*
 * XREFs of sub_140024E80 @ 0x140024E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140024E80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+48h]

  sub_140009580(a1, a1 + 1008);
  v12 = 0LL;
  v13 = 0LL;
  sub_140006100(a1, 0x200u);
  if ( v12 )
  {
    sub_140032C80(v12, 0LL, 512LL);
    v6 = *(_QWORD *)(a1 + 1104);
    LOBYTE(v7) = -127;
    *(_BYTE *)(v6 + 4225) |= 3u;
    *(_WORD *)(v6 + 4212) = 0;
    sub_140006580(a1, v6, v7, 0x200u, v13, 0, 0LL, 0);
    *(_BYTE *)(v6 + 4225) |= 4u;
    *(_QWORD *)(v6 + 4192) = sub_1400262E0;
    *(_QWORD *)(v6 + 4160) = v12;
    *(_QWORD *)(v6 + 4168) = v13;
    *(_DWORD *)(v6 + 4208) = 512;
    sub_1400092F0(a1, a1 + 1016);
    LOBYTE(v8) = 1;
    sub_140008130(a1, a1 + 1016, v8);
  }
  else
  {
    *(_BYTE *)(a1 + 1019) = 38;
  }
  if ( *(_BYTE *)(a1 + 1019) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4048) )
    {
      v9 = sub_140005000(*(_QWORD *)(a1 + 4048));
      *(_BYTE *)(v9 + 4225) |= 8u;
      *(_BYTE *)(v10 + 3) = 4;
      sub_14000A8A0(a1, v10, 0);
      *(_QWORD *)(a1 + 4048) = 0LL;
    }
    *(_DWORD *)(a1 + 4056) &= ~1u;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  if ( v12 )
    sub_14000CF50(a1, 512LL, &v12, v13);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
