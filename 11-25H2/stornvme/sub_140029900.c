/*
 * XREFs of sub_140029900 @ 0x140029900
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140029AF8 @ 0x140029AF8 (sub_140029AF8.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 */

__int64 __fastcall sub_140029900(__int64 a1)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 3238002697LL;
  v3 = sub_140006100(a1, 0x200u);
  if ( v3 )
    goto LABEL_12;
  if ( v8 )
  {
    v3 = sub_140029AF8(a1, v8, &v9);
    if ( v3 )
      goto LABEL_12;
    v5 = v8;
    if ( v8 )
    {
      v6 = *(unsigned __int16 *)(v8 + 12);
      if ( !(_WORD)v6 )
      {
        v3 = -1056964599;
        goto LABEL_13;
      }
      v3 = sub_140029BE8(a1, (unsigned int)((v6 + 1) << 9));
      if ( !v3 )
      {
        v5 = v8;
        if ( *(_BYTE *)(v8 + 383) != *(_BYTE *)(*(_QWORD *)(a1 + 3968) + 383LL) )
          v3 = -1056964607;
        goto LABEL_13;
      }
LABEL_12:
      v5 = v8;
LABEL_13:
      if ( v5 )
        sub_14000CF50(a1, 512LL, &v8, v9);
    }
  }
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 3968);
    if ( v7 )
      StorPortExtendedFunction(1LL, a1, v7, v4);
    *(_OWORD *)(a1 + 3968) = 0LL;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
  }
  return v3;
}
