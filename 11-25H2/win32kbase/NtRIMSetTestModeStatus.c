/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1401D8660
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1401D6BE0 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1402259B4 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(unsigned int a1)
{
  __int64 v2; // rdx

  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1, v2);
  else
    return 3221225506LL;
}
