/*
 * XREFs of sub_18003F270 @ 0x18003F270
 * Callers:
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 *     sub_1800DA93E @ 0x1800DA93E (sub_1800DA93E.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_18003F270(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 32);
    if ( v3 )
      sub_180010F00(v3);
  }
  return sub_180028E60(a1);
}
