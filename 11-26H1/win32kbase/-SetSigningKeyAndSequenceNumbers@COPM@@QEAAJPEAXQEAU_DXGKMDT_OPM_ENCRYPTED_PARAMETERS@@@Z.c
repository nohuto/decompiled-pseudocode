/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008AC8
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x140008B50 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x140008DA4 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14000A2C0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  OPM::CMutex *v3; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (COPM *)((char *)this + 48);
  OPM::CMutex::Lock((COPM *)((char *)this + 48));
  v9 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)this + 24, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CMutex::Unlock(v3);
  return (unsigned int)HandleObject;
}
