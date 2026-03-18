/*
 * XREFs of BgkpTryEnableConsole @ 0x1405C5A00
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140D13854 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140E65D44 )
  {
    if ( qword_140E65D18 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140E0AA10, 0LL);
  }
  return result;
}
