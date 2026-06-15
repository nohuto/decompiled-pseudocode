/*
 * XREFs of sub_14005FE3C @ 0x14005FE3C
 * Callers:
 *     sub_14005F8C8 @ 0x14005F8C8 (sub_14005F8C8.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005F83C @ 0x14005F83C (sub_14005F83C.c)
 */

__int64 __fastcall sub_14005FE3C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_14005F83C(*(__int64 **)(a1 + 24), *(__int64 **)(a1 + 32));
    return sub_1400453E4(*(_QWORD *)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
