/*
 * XREFs of sub_180019470 @ 0x180019470
 * Callers:
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 */

__int64 __fastcall sub_180019470(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 *i; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18001367C(a2, &v6);
  for ( i = *(__int64 **)(v2 + 112); i != *(__int64 **)(v2 + 120); ++i )
  {
    v4 = *i;
    if ( *(_QWORD *)(*i + 16) == v6 )
    {
      if ( v7 )
        sub_180010EC8(v7);
      return v4;
    }
  }
  if ( v7 )
    sub_180010EC8(v7);
  return 0LL;
}
