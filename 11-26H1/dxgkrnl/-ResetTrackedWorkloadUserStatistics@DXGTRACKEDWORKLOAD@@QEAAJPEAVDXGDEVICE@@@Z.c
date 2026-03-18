/*
 * XREFs of ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x14020B0FC
 * Callers:
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x14020C200 (NtDxgkResetTrackedWorkloadStatistics.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  unsigned int i; // ecx
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 5);
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v4 = 136LL * i;
    v5 = this[4];
    if ( *((_BYTE *)v5 + v4 + 32) )
      *((_BYTE *)v5 + v4 + 120) = 0;
  }
  *((_DWORD *)this + 48) = 0;
  this[25] = (struct _KTHREAD *)0x7FEFFFFFFFFFFFFFLL;
  this[27] = 0LL;
  this[26] = (struct _KTHREAD *)0xFFEFFFFFFFFFFFFFLL;
  this[28] = 0LL;
  this[38] = 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
  return 0LL;
}
