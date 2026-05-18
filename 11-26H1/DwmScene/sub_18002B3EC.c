/*
 * XREFs of sub_18002B3EC @ 0x18002B3EC
 * Callers:
 *     sub_18002B48C @ 0x18002B48C (sub_18002B48C.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18002B428 @ 0x18002B428 (sub_18002B428.c)
 */

__int64 __fastcall sub_18002B3EC(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_18002B428(*a1);
    return sub_18000C444(v1);
  }
  return result;
}
