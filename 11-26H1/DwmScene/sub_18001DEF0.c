/*
 * XREFs of sub_18001DEF0 @ 0x18001DEF0
 * Callers:
 *     sub_18001C9FC @ 0x18001C9FC (sub_18001C9FC.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_18002A2B0 @ 0x18002A2B0 (sub_18002A2B0.c)
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_18003AB58 @ 0x18003AB58 (sub_18003AB58.c)
 *     sub_1800573EC @ 0x1800573EC (sub_1800573EC.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005BCA4 @ 0x18005BCA4 (sub_18005BCA4.c)
 *     sub_18007544C @ 0x18007544C (sub_18007544C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001DEF0(_QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
