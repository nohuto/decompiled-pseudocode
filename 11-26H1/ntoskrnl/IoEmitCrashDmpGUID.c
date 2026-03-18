/*
 * XREFs of IoEmitCrashDmpGUID @ 0x1405C65F8
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     IopWheaSelLogCheckPointEx @ 0x1405CA070 (IopWheaSelLogCheckPointEx.c)
 *     IopWheaSelLogError @ 0x1405CA160 (IopWheaSelLogError.c)
 */

__int64 IoEmitCrashDmpGUID()
{
  if ( dword_140E0AA24 >= 0 )
    return IopWheaSelLogCheckPointEx(2147483757LL, &Uuid, 16LL);
  else
    return IopWheaSelLogError(2147483758LL, (unsigned int)dword_140E0AA24, 0LL);
}
