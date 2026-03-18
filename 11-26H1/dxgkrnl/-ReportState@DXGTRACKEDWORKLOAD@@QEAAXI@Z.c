/*
 * XREFs of ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x14020AC18
 * Callers:
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x14020A188 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqqqqqqPR7_EtwWriteTransfer @ 0x1400826DC (McTemplateK0ppqqqqqqPR7_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ReportState@TrackedWorkloadMonitor@@QEAAXXZ @ 0x14020ADCC (-ReportState@TrackedWorkloadMonitor@@QEAAXXZ.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x14020B014 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::ReportState(DXGTRACKEDWORKLOAD *this, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  int v7; // edi
  unsigned int v8; // edi
  const EVENT_DESCRIPTOR *v9; // rdx
  _BYTE v10[24]; // [rsp+68h] [rbp-230h] BYREF
  _BYTE v11[512]; // [rsp+80h] [rbp-218h] BYREF

  memset(v11, 0, sizeof(v11));
  v6 = a2 - 444;
  if ( !v6 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v11, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventCreateTrackedWorkload;
    goto LABEL_16;
  }
  v7 = v6 - 37;
  if ( !v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
      goto LABEL_17;
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v11, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventReportTrackedWorkload;
    goto LABEL_16;
  }
  if ( v7 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v8 = *((_DWORD *)this + 270);
    if ( v8 )
      memmove(v11, (char *)this + 568, 8LL * v8);
    v9 = (const EVENT_DESCRIPTOR *)&EventDestroyTrackedWorkload;
LABEL_16:
    McTemplateK0ppqqqqqqPR7_EtwWriteTransfer(
      v4,
      v9,
      v5,
      this,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 20),
      *((_DWORD *)this + 286),
      *((_DWORD *)this + 287),
      *((_DWORD *)this + 288),
      *((_DWORD *)this + 26),
      v8,
      v11);
  }
LABEL_17:
  if ( (qword_1401664C0 & 0x10000000) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)this + 5);
    TrackedWorkloadMonitor::ReportState((DXGTRACKEDWORKLOAD *)((char *)this + 328));
    DXGTRACKEDWORKLOAD::ReportStats(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  }
  DXGGLOBAL::GetGlobal();
}
