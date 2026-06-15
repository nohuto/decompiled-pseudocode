/*
 * XREFs of sub_14005F890 @ 0x14005F890
 * Callers:
 *     sub_14005FBC8 @ 0x14005FBC8 (sub_14005FBC8.c)
 *     sub_14005FDB0 @ 0x14005FDB0 (sub_14005FDB0.c)
 *     sub_14005FE78 @ 0x14005FE78 (sub_14005FE78.c)
 *     sub_1400605D0 @ 0x1400605D0 (sub_1400605D0.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_1400873E0 @ 0x1400873E0 (sub_1400873E0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_14005F890(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = sub_140003238(v3++);
    while ( v3 != a2 );
  }
  return result;
}
