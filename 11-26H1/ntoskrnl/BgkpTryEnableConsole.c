/*
 * XREFs of BgkpTryEnableConsole @ 0x1405C8270
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140D19A1C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140E65F52 )
  {
    if ( qword_140E65F08 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140E0AA10, 0LL);
  }
  return result;
}
