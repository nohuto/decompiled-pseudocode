/*
 * XREFs of ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8
 * Callers:
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401B5348 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401F6364 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14036EF20 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036FBB0 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x14003CBD8 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x140370E7C (--0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_.c)
 *     ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403714B8 (-AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateDevice(
        DXGADAPTER **a1,
        DXGDEVICE **a2,
        int a3,
        int a4,
        DXGADAPTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v15; // rcx
  DXGPROCESS *Current; // rbp
  __int64 v17; // rax
  int v18; // edi
  DXGADAPTER **v19; // rsi
  DXGADAPTER *v20; // rax
  DXGDEVICE *v22; // rax
  DXGDEVICE *v23; // rbx
  int v24; // [rsp+40h] [rbp-38h]

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner((ADAPTER_RENDER *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1772;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1772LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 && (!DXGADAPTER::IsCoreResourceSharedOwner(a5) || !*((_QWORD *)a5 + 395)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1775;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsCoreResourceSharedOwner() && pDisplayAdapter->IsDisplayAdapter())",
      1775LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1776;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppDevice != NULL", 1776LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v15);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1782;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1782LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a2 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)a1[2] + 3);
  v17 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(1968LL);
  if ( !v17
    || (LOBYTE(v24) = a8,
        v22 = (DXGDEVICE *)DXGDEVICE::DXGDEVICE(v17, a1, a9, a10, a3, Current, a4, a5, v24, a11),
        (v23 = v22) == 0LL) )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1804;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGDEVICE class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_10:
    DXGADAPTER::ReleaseReferenceNoTracking(a1[2]);
    return (unsigned int)v18;
  }
  v18 = DXGDEVICE::Initialize(v22, a6, a7);
  if ( v18 < 0 )
  {
    DXGDEVICE::DestroyAllDeviceState(v23, 0LL);
    DXGDEVICE::`scalar deleting destructor'(v23);
    goto LABEL_10;
  }
  if ( *((_DWORD *)v23 + 116) == 2 )
  {
    if ( a1[7] != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1842;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLockCdd.IsExclusiveOwner()",
        1842LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = a1 + 20;
  }
  else
  {
    if ( a1[4] != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1847;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_DeviceCreationLock.IsExclusiveOwner()",
        1847LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = a1 + 18;
  }
  v20 = *v19;
  if ( *((DXGADAPTER ***)*v19 + 1) != v19 )
    __fastfail(3u);
  *(_QWORD *)v23 = v20;
  *((_QWORD *)v23 + 1) = v19;
  *((_QWORD *)v20 + 1) = v23;
  *v19 = v23;
  DXGPROCESS::AddDevice(Current, v23);
  *a2 = v23;
  return (unsigned int)v18;
}
