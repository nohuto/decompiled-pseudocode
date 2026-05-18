/*
 * XREFs of sub_180011964 @ 0x180011964
 * Callers:
 *     sub_180011B74 @ 0x180011B74 (sub_180011B74.c)
 *     sub_180011EBC @ 0x180011EBC (sub_180011EBC.c)
 *     sub_1800127CC @ 0x1800127CC (sub_1800127CC.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_18002FA70 @ 0x18002FA70 (sub_18002FA70.c)
 *     sub_180031890 @ 0x180031890 (sub_180031890.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_180035614 @ 0x180035614 (sub_180035614.c)
 *     sub_180035694 @ 0x180035694 (sub_180035694.c)
 *     sub_1800357BC @ 0x1800357BC (sub_1800357BC.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

__int64 __fastcall sub_180011964(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
        result = sub_180010F00(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
