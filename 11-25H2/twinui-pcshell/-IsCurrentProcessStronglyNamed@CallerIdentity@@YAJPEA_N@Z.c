/*
 * XREFs of ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x180653898
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803DFE64 (--$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180653978 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 */

signed int __fastcall CallerIdentity::IsCurrentProcessStronglyNamed(CallerIdentity *this, bool *a2)
{
  ARI::ProcessToken::SysAppId *CurrentProcess; // rax
  bool *v4; // r8
  signed int result; // eax

  CurrentProcess = (ARI::ProcessToken::SysAppId *)GetCurrentProcess();
  result = ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(CurrentProcess, this, v4);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
