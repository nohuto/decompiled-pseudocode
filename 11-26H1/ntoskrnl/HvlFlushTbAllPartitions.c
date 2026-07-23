/*
 * XREFs of HvlFlushTbAllPartitions @ 0x1402517D0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 * Callees:
 *     VslFlushEntireTb @ 0x1402532C8 (VslFlushEntireTb.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 HvlFlushTbAllPartitions()
{
  __int64 result; // rax
  _QWORD v1[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v1[0] = 0LL;
      v1[2] = 0LL;
      v1[1] = 531LL;
      return HvcallFastExtended(65538, (unsigned int)v1, 24, 0, 0);
    }
    else
    {
      return VslFlushEntireTb();
    }
  }
  return result;
}
