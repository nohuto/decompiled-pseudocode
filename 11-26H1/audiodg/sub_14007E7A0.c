/*
 * XREFs of sub_14007E7A0 @ 0x14007E7A0
 * Callers:
 *     sub_14007DD08 @ 0x14007DD08 (sub_14007DD08.c)
 * Callees:
 *     sub_14007EE2C @ 0x14007EE2C (sub_14007EE2C.c)
 *     sub_14007EEE4 @ 0x14007EEE4 (sub_14007EEE4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007E7A0(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx

  if ( (unsigned __int8)sub_14007EEE4(a1, 0LL) )
  {
    v3 = sub_1400B6010(a1);
    if ( v3 >= 0 && InitOnceExecuteOnce(&stru_1400E8970, (PINIT_ONCE_FN)sub_14007B320, 0LL, 0LL) )
      sub_14007EE2C(a1);
  }
  else
  {
    v3 = -2147483635;
    RoOriginateError(2147483661LL, v2);
  }
  return (unsigned int)v3;
}
