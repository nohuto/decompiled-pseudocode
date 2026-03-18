/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430
 * Callers:
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x1400086A4 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x140008734 (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1400087E8 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x140008B50 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140008D84 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008DA4 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     NtGdiGetCertificateByHandle @ 0x140008EE0 (NtGdiGetCertificateByHandle.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1400094C0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1400097E4 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14000A3C4 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x14000A620 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x14019BD20 (NtGdiConfigureOPMProtectedOutput.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401F3330 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 *     NtGdiGetCertificate @ 0x1401F4440 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
