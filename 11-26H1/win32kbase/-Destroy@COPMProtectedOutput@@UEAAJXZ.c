/*
 * XREFs of ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1400099F0
 * Callers:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140009760 (--1COPMProtectedOutput@@UEAA@XZ.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x140009E0C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x140009B40 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     CallMonitor @ 0x14000A460 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::Destroy(COPMProtectedOutput *this)
{
  OPM::CMutex *v1; // rbx
  int v3; // esi
  int v4; // eax
  int v6; // eax

  v1 = (OPM::CMutex *)*((_QWORD *)this + 1);
  v3 = 0;
  OPM::CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
  {
    v6 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x2324A3u, (char *)this + 72, 8u, 0LL, 0);
    *((_QWORD *)this + 9) = 0LL;
    *((_BYTE *)this + 80) = 0;
    if ( v6 < 0 )
      v3 = v6;
  }
  OPM::CMutex::Unlock(v1);
  v4 = OPM::CMonitorPDO::Destroy(this);
  if ( v4 < 0 && v3 >= 0 )
    return (unsigned int)v4;
  return (unsigned int)v3;
}
