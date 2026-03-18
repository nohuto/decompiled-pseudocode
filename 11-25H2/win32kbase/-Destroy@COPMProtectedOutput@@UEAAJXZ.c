/*
 * XREFs of ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x140083200
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1400830CC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x140145528 (--1COPMProtectedOutput@@UEAA@XZ.c)
 * Callees:
 *     CallMonitor @ 0x140083470 (CallMonitor.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x140083580 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
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
    *((_BYTE *)this + 80) = 0;
    if ( v6 < 0 )
      v3 = v6;
    *((_QWORD *)this + 9) = 0LL;
  }
  OPM::CMutex::Unlock(v1);
  v4 = OPM::CMonitorPDO::Destroy(this);
  if ( v4 < 0 && v3 >= 0 )
    return (unsigned int)v4;
  return (unsigned int)v3;
}
