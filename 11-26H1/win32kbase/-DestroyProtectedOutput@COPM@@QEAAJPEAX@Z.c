/*
 * XREFs of ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x140008D00
 * Callers:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x140008CC0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1400091B4 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x14000A2C0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::DestroyProtectedOutput(COPM *this, void *a2)
{
  int HandleObject; // edi
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  OPM::CMutex::Lock((COPM *)((char *)this + 56));
  v7 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((char *)this + 24, a2, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           (char *)this + 24,
           v7,
           (unsigned int)a2,
           (char *)this + 48);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  OPM::CMutex::Unlock((COPM *)((char *)this + 56));
  return (unsigned int)HandleObject;
}
