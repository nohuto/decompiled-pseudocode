/*
 * XREFs of ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x140083690
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1400830CC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1400837E0 (-IsDestroyed@COPMProtectedOutput@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140085240 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1400852B0 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall OPM::CMonitorPDO::IsDestroyed(OPM::CMonitorPDO *this)
{
  OPM::CMutex *v1; // rbx

  v1 = (OPM::CMutex *)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v1);
  if ( *((_WORD *)this + 12) && *((_WORD *)this + 13) && *((_QWORD *)this + 4) && *((_QWORD *)this + 2) )
  {
    OPM::CMutex::Unlock(v1);
    return 0;
  }
  else
  {
    OPM::CMutex::Unlock(v1);
    return 1;
  }
}
