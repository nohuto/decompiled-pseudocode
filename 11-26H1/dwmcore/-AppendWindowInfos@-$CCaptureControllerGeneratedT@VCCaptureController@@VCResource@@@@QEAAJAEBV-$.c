/*
 * XREFs of ?AppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x18021DCF8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::AppendWindowInfos(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CCaptureControllerGeneratedT<CCaptureController,CResource>::SetOrAppendWindowInfos(a1, a2, a3);
}
