/*
 * XREFs of ?NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z @ 0x1402836EC
 * Callers:
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x140283780 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::NotifyHostMonitorPowerState(BLTQUEUE *this, char a2)
{
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 0x200u;
    *((_BYTE *)this + 688) = a2;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 688) = a2;
    *((_BYTE *)this + 665) = 1;
  }
  BLTQUEUE::IssueCommand(this);
}
