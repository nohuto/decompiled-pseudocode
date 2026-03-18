/*
 * XREFs of ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x140009E0C
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1400098D0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1400099F0 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x140009AE0 (-IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x140009EF0 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     CallMonitor @ 0x14000A460 (CallMonitor.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::COPMProtectedOutput(
        COPMProtectedOutput *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        int *a5)
{
  int *v5; // r14
  void **v7; // rsi
  int v8; // edi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v5 = a5;
  OPM::CMonitorPDO::CMonitorPDO(this, a3, a4, a5);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  *((_DWORD *)this + 21) = InputBuffer;
  *((_QWORD *)this + 9) = 0LL;
  if ( *v5 >= 0 )
  {
    v7 = (void **)*((_QWORD *)this + 1);
    OPM::CMutex::Lock(v7);
    if ( OPM::CMonitorPDO::IsDestroyed(this) )
    {
      v8 = -1071774438;
    }
    else
    {
      v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Bu, &InputBuffer, 4u, (char *)this + 72, 8u);
      if ( v8 >= 0 )
        *((_BYTE *)this + 80) = 1;
    }
    OPM::CMutex::Unlock((struct _KMUTANT **)v7);
    if ( v8 < 0 )
    {
      COPMProtectedOutput::Destroy(this);
      *v5 = v8;
    }
  }
  return this;
}
