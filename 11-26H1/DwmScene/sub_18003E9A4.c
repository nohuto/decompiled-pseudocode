/*
 * XREFs of sub_18003E9A4 @ 0x18003E9A4
 * Callers:
 *     sub_18003F214 @ 0x18003F214 (sub_18003F214.c)
 *     sub_18003F360 @ 0x18003F360 (sub_18003F360.c)
 *     sub_18003F4D8 @ 0x18003F4D8 (sub_18003F4D8.c)
 * Callees:
 *     sub_18003E9DC @ 0x18003E9DC (sub_18003E9DC.c)
 */

_QWORD *__fastcall sub_18003E9A4(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18003E9DC();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
