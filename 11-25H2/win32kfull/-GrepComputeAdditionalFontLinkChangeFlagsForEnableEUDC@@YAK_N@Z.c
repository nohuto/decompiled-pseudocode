/*
 * XREFs of ?GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC@@YAK_N@Z @ 0x1401475AC
 * Callers:
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepComputeAdditionalFontLinkChangeFlagsForEnableEUDC(unsigned __int8 a1)
{
  int v1; // edi
  __int64 CSRSSProcess; // rbx
  __int64 v3; // rcx

  v1 = a1;
  CSRSSProcess = UserGetCSRSSProcess();
  if ( PsGetCurrentProcess(v3) == CSRSSProcess )
    return 0LL;
  else
    return (v1 ^ 1u) + 1;
}
