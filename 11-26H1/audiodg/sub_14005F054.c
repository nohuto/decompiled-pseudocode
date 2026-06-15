/*
 * XREFs of sub_14005F054 @ 0x14005F054
 * Callers:
 *     sub_14005DB34 @ 0x14005DB34 (sub_14005DB34.c)
 *     sub_14006496C @ 0x14006496C (sub_14006496C.c)
 * Callees:
 *     sub_140053F68 @ 0x140053F68 (sub_140053F68.c)
 */

__int64 __fastcall sub_14005F054(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_140053F68((__int64)a1, a1[2] + 1LL);
  return sub_14005EE7C(a1, v2);
}
