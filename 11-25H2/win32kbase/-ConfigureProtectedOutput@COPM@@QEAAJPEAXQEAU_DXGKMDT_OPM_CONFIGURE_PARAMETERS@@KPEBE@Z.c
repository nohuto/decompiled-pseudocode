/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14014776C
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x140147610 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1400836EC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140147838 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        void **this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  struct _KMUTANT **v5; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct _KMUTANT **)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v12 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)(this + 3), a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::Configure(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CMutex::Unlock(v5);
  return (unsigned int)HandleObject;
}
