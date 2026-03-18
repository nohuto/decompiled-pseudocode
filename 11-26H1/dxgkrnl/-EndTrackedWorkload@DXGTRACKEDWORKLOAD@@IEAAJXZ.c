/*
 * XREFs of ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x14020A318
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x14020B2AC (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1400583DC (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1400A4E1C (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?Scale@RollingStats@@QEAAXN@Z @ 0x1400A5044 (-Scale@RollingStats@@QEAAXN@Z.c)
 *     ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1400A5088 (-SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1401B235C (-DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLE.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  signed int v1; // r12d
  unsigned int v2; // r14d
  unsigned int v3; // edi
  UINT v5; // ecx
  UINT EffectivePowerLevel; // esi
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  unsigned int v16; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-1Ch] BYREF
  _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL v18; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v16 = 0;
  v17 = 0;
  if ( !DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
  {
    if ( !TrackedWorkloadMonitor::GetTargetPowerLevel(
            (DXGTRACKEDWORKLOAD *)((char *)this + 328),
            (DXGTRACKEDWORKLOAD *)((char *)this + 232),
            &v16,
            &v17) )
      return v3;
    v1 = v16;
    v2 = v17;
  }
  v5 = v2;
  *(_QWORD *)&v18.EffectivePowerLevel = 0LL;
  EffectivePowerLevel = 1;
  if ( DXGTRACKEDWORKLOAD::m_enableBypassPowerLevel )
    v5 = DXGTRACKEDWORKLOAD::m_bypassPowerLevel;
  v7 = 0LL;
  v18.PowerLevel = v5;
  while ( (unsigned int)v7 < *((_DWORD *)this + 270) )
  {
    v8 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
           *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + v7 + 71) + 16LL) + 16LL),
           *(void **)(*((_QWORD *)this + v7 + 71) + 184LL),
           &v18);
    v3 = v8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      LODWORD(v15) = v8;
      LODWORD(v14) = v18.EffectivePowerLevel;
      LODWORD(v13) = v2;
      LODWORD(v12) = v1;
      LODWORD(v11) = v7;
      McTemplateK0pqqqqq_EtwWriteTransfer(
        v18.EffectivePowerLevel,
        &TrackedWorkloadSetPowerLevel,
        v9,
        this,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1983;
      return v3;
    }
    if ( EffectivePowerLevel <= v18.EffectivePowerLevel )
      EffectivePowerLevel = v18.EffectivePowerLevel;
    v7 = (unsigned int)(v7 + 1);
  }
  TrackedWorkloadMonitor::SetEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328), EffectivePowerLevel, 0);
  RollingStats::Scale((DXGTRACKEDWORKLOAD *)((char *)this + 232), (double)v1 / (double)(int)EffectivePowerLevel);
  return v3;
}
