/*
 * XREFs of sub_14005C3DC @ 0x14005C3DC
 * Callers:
 *     sub_14005BC54 @ 0x14005BC54 (sub_14005BC54.c)
 * Callees:
 *     sub_14003F528 @ 0x14003F528 (sub_14003F528.c)
 *     sub_1400464F4 @ 0x1400464F4 (sub_1400464F4.c)
 *     sub_14005BEA4 @ 0x14005BEA4 (sub_14005BEA4.c)
 */

__int64 __fastcall sub_14005C3DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0;
  LODWORD(v11) = 0;
  v6 = sub_14003F528(a1, a2, &v9, &v11, v10);
  v7 = v6;
  if ( v6 )
  {
    sub_1400464F4((__int64 *)(v6 + 8), a3);
  }
  else
  {
    v7 = sub_14005BEA4(a1, a2, v9, v11);
    v11 = v7;
    sub_1400464F4((__int64 *)(v7 + 8), a3);
  }
  return v7;
}
