/*
 * XREFs of sub_140023F00 @ 0x140023F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 */

__int64 __fastcall sub_140023F00(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r8

  v7 = sub_140005000(a3);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v8 = *(_QWORD *)(v4 + 64);
  else
    v8 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v8 + 20) = v3 != 0 ? 0 : 0x20;
  *(_DWORD *)(v6 + 24) &= 0xFF7FF7FF;
  *(_BYTE *)(v7 + 4225) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return sub_14000A8A0(v6, v5, 0);
}
