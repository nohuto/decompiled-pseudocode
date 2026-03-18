/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440
 * Callers:
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14006D8A4 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x14006D8DC (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x140082D88 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140083298 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x14008382C (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1401454F0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1401465B0 (NtGdiGetCertificateByHandle.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x140147610 (NtGdiConfigureOPMProtectedOutput.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140147838 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x140148990 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14015C1F0 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401C7450 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 *     NtGdiGetCertificate @ 0x1401C9760 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
