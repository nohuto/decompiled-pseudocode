/*
 * XREFs of sub_140039B20 @ 0x140039B20
 * Callers:
 *     sub_140039ADC @ 0x140039ADC (sub_140039ADC.c)
 *     sub_140044A2C @ 0x140044A2C (sub_140044A2C.c)
 * Callees:
 *     sub_14003E4C0 @ 0x14003E4C0 (sub_14003E4C0.c)
 */

char __fastcall sub_140039B20(volatile __int32 *a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+48h] [rbp+20h] BYREF

  UnbiasedTime = 0LL;
  QueryUnbiasedInterruptTime(&UnbiasedTime);
  v2 = 0LL;
  while ( !_InterlockedExchange(a1, 0) )
  {
    if ( v2 >= 0x3E8 || !(unsigned __int8)sub_14003E4C0(a1, (unsigned int)(1000 - v2)) )
      return 0;
    v4 = 0LL;
    QueryUnbiasedInterruptTime(&v4);
    v2 = (v4 - UnbiasedTime) / 0x2710;
  }
  return 1;
}
