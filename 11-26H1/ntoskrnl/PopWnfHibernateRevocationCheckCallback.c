/*
 * XREFs of PopWnfHibernateRevocationCheckCallback @ 0x1407D3F10
 * Callers:
 *     <none>
 * Callees:
 *     PoDisableSleepStates @ 0x1407CF760 (PoDisableSleepStates.c)
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 */

__int64 PopWnfHibernateRevocationCheckCallback()
{
  _BYTE v1[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h] BYREF

  v1[0] = 0;
  PopValidateWinresume(v1);
  if ( v1[0] )
    PoDisableSleepStates(4, 8, &v2);
  return 0LL;
}
