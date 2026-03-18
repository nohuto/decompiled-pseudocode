/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1403A8CB4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  DXGPUSHLOCK *v2; // rdi
  struct DXGRESOURCE **v5; // rcx
  struct DXGRESOURCE **v6; // rsi
  __int64 v7; // rdx
  struct DXGRESOURCE **v8; // r14
  __int64 v9; // rdx

  v2 = (DXGPUSHLOCK *)(this + 30);
  if ( this != (struct _KTHREAD **)-240LL && this[31] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v2);
  v5 = this + 7;
  if ( a2 == this[7] )
  {
    v6 = this + 7;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 4) )
      goto LABEL_14;
    v6 = this + 7;
  }
  v7 = *((_QWORD *)a2 + 5);
  v8 = v5;
  if ( v7 )
  {
    v8 = v6;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)a2 + 4);
  }
  v9 = *((_QWORD *)a2 + 4);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 40) = *((_QWORD *)a2 + 5);
  }
  else
  {
    if ( *v5 != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9390;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pResourceList == pResource", 9390LL, 0LL, 0LL, 0LL, 0LL);
    }
    *v8 = (struct DXGRESOURCE *)*((_QWORD *)a2 + 5);
  }
LABEL_14:
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
