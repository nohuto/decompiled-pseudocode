/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14000A2C0
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140008410 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1400089F4 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008AC8 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x140008D00 (-DestroyProtectedOutput@COPM@@QEAAJPEAX@Z.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x140009020 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x14000942C (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1400094F8 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401F42F0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEXZ @ 0x14000A330 (-DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEXZ.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi

  if ( a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 12) )
    return *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)a2);
  if ( !v5 )
    return *(unsigned int *)(a1 + 16);
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(*(OPM::CMonitorPDO **)(*(_QWORD *)a1
                                                                                    + 8LL * (unsigned int)a2)) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
