/*
 * XREFs of sub_140026BB0 @ 0x140026BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 */

__int64 __fastcall sub_140026BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx

  v3 = sub_140005000(a3);
  *(_DWORD *)(v4 + 24) &= ~0x800u;
  *(_BYTE *)(v3 + 4225) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return sub_14000A8A0(v4, v6, 0);
}
