/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1401511A4
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x140151120 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1400836EC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall COPM::GetRandomNumber(void **this, unsigned __int64 a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  struct _KMUTANT **v3; // rbx
  int HandleObject; // edi
  PDEVICE_OBJECT *v8; // rdi
  void **v9; // rsi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _KMUTANT **)(this + 6);
  OPM::CMutex::Lock(this + 6);
  v11 = 0LL;
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)(this + 3), a2, &v11);
  if ( HandleObject >= 0 )
  {
    v8 = (PDEVICE_OBJECT *)v11;
    v9 = *(void ***)(v11 + 8);
    OPM::CMutex::Lock(v9);
    if ( ((unsigned __int8 (__fastcall *)(PDEVICE_OBJECT *))(*v8)->NextDevice)(v8) )
      HandleObject = -1071774438;
    else
      HandleObject = CallMonitor(v8[2], 0x23248Fu, v8 + 9, 8u, a3, 0x10u);
    OPM::CMutex::Unlock((struct _KMUTANT **)v9);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  OPM::CMutex::Unlock(v3);
  return (unsigned int)HandleObject;
}
