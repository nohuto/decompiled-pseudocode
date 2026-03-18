/*
 * XREFs of ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1400830CC
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x140082BE8 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x140082DF0 (--0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x140083200 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x140083690 (-IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::COPMProtectedOutput(
        COPMProtectedOutput *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        int *a5)
{
  int *v5; // r14
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v7; // eax
  OPM::CMutex *v8; // rsi
  int v9; // edi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v5 = a5;
  OPM::CMonitorPDO::CMonitorPDO(this, a3, a4, a5);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  v7 = InputBuffer;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = v7;
  if ( *v5 >= 0 )
  {
    v8 = (OPM::CMutex *)*((_QWORD *)this + 1);
    OPM::CMutex::Lock(v8);
    if ( OPM::CMonitorPDO::IsDestroyed(this) )
    {
      v9 = -1071774438;
    }
    else
    {
      v9 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Bu, &InputBuffer, 4u, (char *)this + 72, 8u);
      if ( v9 >= 0 )
        *((_BYTE *)this + 80) = 1;
    }
    OPM::CMutex::Unlock(v8);
    if ( v9 < 0 )
    {
      COPMProtectedOutput::Destroy(this);
      *v5 = v9;
    }
  }
  return this;
}
