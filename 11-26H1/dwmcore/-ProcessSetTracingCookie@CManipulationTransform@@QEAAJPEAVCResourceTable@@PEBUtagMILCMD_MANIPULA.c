/*
 * XREFs of ?ProcessSetTracingCookie@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETTRACINGCOOKIE@@@Z @ 0x1801CF628
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationTransform::ProcessSetTracingCookie(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM_SETTRACINGCOOKIE *a3)
{
  *((_DWORD *)this + 69) = *((_DWORD *)a3 + 2);
  return 0LL;
}
