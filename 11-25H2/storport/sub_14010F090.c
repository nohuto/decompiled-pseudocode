/*
 * XREFs of sub_14010F090 @ 0x14010F090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 *     sub_140101670 @ 0x140101670 (sub_140101670.c)
 */

__int64 __fastcall sub_14010F090(__int64 a1)
{
  _DWORD *v1; // rax
  IRP *v2; // rdx

  v1 = sub_14006B3C4(a1);
  return sub_140101670((__int64)v1, v2);
}
