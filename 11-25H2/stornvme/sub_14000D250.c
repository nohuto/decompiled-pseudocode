/*
 * XREFs of sub_14000D250 @ 0x14000D250
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_140023AC0 @ 0x140023AC0 (sub_140023AC0.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000D250(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1104);
  v8 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 1560);
    if ( (*(_BYTE *)(result + 261) & 0x20) != 0 )
    {
      v6 = (__int64 *)(a1 + 4232);
      v7 = *(_QWORD *)(a1 + 4232);
      if ( v7 )
      {
        result = *(_QWORD *)(a1 + 4240);
        v8 = result;
        if ( !result )
          return result;
      }
      else
      {
        result = sub_140006100(a1, 0x400u);
        v7 = *v6;
        if ( !*v6 )
          return result;
        *(_QWORD *)(a1 + 4240) = 0LL;
      }
      sub_140032C80(v7, 0LL, 1024LL);
      sub_140009580(a1, a1 + 1008);
      *(_BYTE *)(v2 + 4225) |= 3u;
      *(_WORD *)(v2 + 4212) = 0;
      sub_140006580(a1, v2, 0, 0x400u, v8, -1, 0LL, 0);
      *(_BYTE *)(v2 + 4225) |= 4u;
      *(_QWORD *)(v2 + 4160) = *v6;
      *(_QWORD *)(v2 + 4168) = v8;
      *(_DWORD *)(v2 + 4208) = 1024;
      sub_1400092F0(a1, a1 + 1016);
      result = sub_140008130(a1, a1 + 1016, a2);
      if ( *(_BYTE *)(a1 + 1019) != 1 )
      {
        result = sub_14000CF50(a1, 1024LL, v6, *(_QWORD *)(a1 + 4240));
        *v6 = 0LL;
        *(_QWORD *)(a1 + 4240) = 0LL;
      }
    }
  }
  return result;
}
