/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline @ 0x14006F88C (Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkSetStartPnPTransitionSessionized @ 0x1402052DC (DxgkSetStartPnPTransitionSessionized.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x14025965C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(struct _KTHREAD **this, char a2, struct _GUID *a3, void *a4)
{
  int updated; // eax
  __int64 v9; // rbx

  if ( this[18] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9209;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsStopResetLockExclusiveOwner()", 9209LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9210;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 9210LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9212;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsBddFallbackDriver()", 9212LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
    if ( (unsigned int)Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a4 )
      {
        DxgkSetStartPnPTransitionSessionized(a4);
        Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline();
        this[31] = (struct _KTHREAD *)*((_QWORD *)a4 + 6);
      }
    }
  }
  else
  {
    if ( this[396] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9237;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayOnlyAdapter()", 9237LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[395], 0LL);
    DmmClearDisplayManagerReferencesForAdapter((const struct DXGADAPTER *)this);
    *((_DWORD *)this + 50) = 3;
    if ( (unsigned int)Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline() )
    {
      updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_STOP, a3, 16LL);
      if ( updated < 0 )
      {
        v9 = updated;
        WdLogSingleEntry2(2LL, this, updated);
        WdLogGlobalForLineNumber = 9255;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
          (__int64)this,
          v9,
          0LL,
          0LL,
          0LL);
      }
    }
  }
}
