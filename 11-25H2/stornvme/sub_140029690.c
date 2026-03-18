/*
 * XREFs of sub_140029690 @ 0x140029690
 * Callers:
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

_UNKNOWN **__fastcall sub_140029690(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  result = &retaddr;
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_140009580(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    result = (_UNKNOWN **)sub_140006100(a1, 0x100u);
    if ( v6 )
    {
      sub_140032C80(v6, 0LL, 256LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v6;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 256;
      v3 = *(_QWORD *)(a1 + 1104);
      *(_QWORD *)(v3 + 4120) = 0LL;
      *(_BYTE *)(v3 + 4096) = 10;
      *(_BYTE *)(v3 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_1400297E0;
      sub_1400092F0(a1, a1 + 1016);
      LOBYTE(v4) = 1;
      sub_140008130(a1, a1 + 1016, v4);
      return (_UNKNOWN **)sub_14000CF50(a1, 256LL, &v6, 0LL);
    }
  }
  return result;
}
