/*
 * XREFs of sub_14004648C @ 0x14004648C
 * Callers:
 *     sub_1400463BC @ 0x1400463BC (sub_1400463BC.c)
 * Callees:
 *     sub_14003F528 @ 0x14003F528 (sub_14003F528.c)
 *     sub_14005BEA4 @ 0x14005BEA4 (sub_14005BEA4.c)
 */

__int64 __fastcall sub_14004648C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  v4 = sub_14003F528(a1, a2, &v8, &v7, v6);
  if ( !v4 )
    v4 = sub_14005BEA4(a1, a2, v8, v7);
  return v4 + 8;
}
