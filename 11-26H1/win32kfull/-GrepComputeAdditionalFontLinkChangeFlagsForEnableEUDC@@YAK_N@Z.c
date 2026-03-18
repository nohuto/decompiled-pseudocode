/*
 * XREFs of ?GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z @ 0x14016EFC8
 * Callers:
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC(char a1)
{
  __int64 CSRSSProcess; // rbx
  __int64 v3; // rcx

  CSRSSProcess = UserGetCSRSSProcess();
  if ( PsGetCurrentProcess(v3) == CSRSSProcess )
    return 0LL;
  else
    return 2 - (unsigned int)(a1 != 0);
}
