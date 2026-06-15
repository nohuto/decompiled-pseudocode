/*
 * XREFs of sub_14005DAD0 @ 0x14005DAD0
 * Callers:
 *     sub_14005DE98 @ 0x14005DE98 (sub_14005DE98.c)
 *     sub_14005DF24 @ 0x14005DF24 (sub_14005DF24.c)
 *     sub_14005F1D4 @ 0x14005F1D4 (sub_14005F1D4.c)
 * Callees:
 *     sub_14005DB08 @ 0x14005DB08 (sub_14005DB08.c)
 */

_QWORD *__fastcall sub_14005DAD0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_14005DB08();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
