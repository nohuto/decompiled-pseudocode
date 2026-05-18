/*
 * XREFs of sub_180056234 @ 0x180056234
 * Callers:
 *     sub_18005681C @ 0x18005681C (sub_18005681C.c)
 *     sub_180056860 @ 0x180056860 (sub_180056860.c)
 *     sub_180057078 @ 0x180057078 (sub_180057078.c)
 *     sub_1800570E0 @ 0x1800570E0 (sub_1800570E0.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 *     sub_18005BB4C @ 0x18005BB4C (sub_18005BB4C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180056234(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 40);
      if ( v4 )
        result = sub_180010EC8(v4);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
