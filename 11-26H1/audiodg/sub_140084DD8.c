/*
 * XREFs of sub_140084DD8 @ 0x140084DD8
 * Callers:
 *     sub_140083A90 @ 0x140083A90 (sub_140083A90.c)
 * Callees:
 *     sub_14000E7B8 @ 0x14000E7B8 (sub_14000E7B8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140084DD8(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rdx

  v3 = *a2;
  do
  {
    if ( !v3 )
      return 2289827866LL;
    v5 = v3[2];
    v6 = v3;
    v3 = (__int64 *)*v3;
  }
  while ( *(_QWORD *)(v5 + 120) != a3 );
  sub_14000E7B8(a2, v6);
  sub_1400B6010(v5);
  return 0LL;
}
