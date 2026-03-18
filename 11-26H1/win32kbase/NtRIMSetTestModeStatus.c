/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1401FF700
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1401FE0D0 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x140227898 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(int a1)
{
  int v2; // edx
  int v3; // r8d

  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1, v2, v3);
  else
    return 3221225506LL;
}
