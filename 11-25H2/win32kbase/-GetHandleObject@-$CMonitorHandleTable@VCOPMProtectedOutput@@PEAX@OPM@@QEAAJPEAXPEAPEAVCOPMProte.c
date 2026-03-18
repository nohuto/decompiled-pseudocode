/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1400836EC
 * Callers:
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x140082B38 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x140083750 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1401466EC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14014776C (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140148AC4 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x140148F60 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1401511A4 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1401C9610 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ?DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEXZ @ 0x140083660 (-DoesCurrentProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEXZ.c)
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
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(*(HANDLE **)(*(_QWORD *)a1 + 8LL * (unsigned int)a2)) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v5;
  return 0LL;
}
