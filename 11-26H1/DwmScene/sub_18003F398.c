/*
 * XREFs of sub_18003F398 @ 0x18003F398
 * Callers:
 *     sub_18003EA0C @ 0x18003EA0C (sub_18003EA0C.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18003F398(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010EC8(v2);
  return sub_180014244(a1);
}
