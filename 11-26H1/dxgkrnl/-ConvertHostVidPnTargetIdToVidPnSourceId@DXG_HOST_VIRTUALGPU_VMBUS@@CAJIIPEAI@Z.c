/*
 * XREFs of ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x14036ACC4
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036A260 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140440500 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  _QWORD *v12; // rcx
  ADAPTER_RENDER **v13; // rcx
  struct DXGDEVICE *v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v16; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[160]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v15[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, v5, Current, v15);
  v7 = v15[0];
  if ( !v15[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741811;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6575;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle", 6575LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v15,
    v15[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v7, 2, v8, 0);
  SourceConnectedToTargetInClientVidPn = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)v7 + 237);
    if ( v12 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v12, a2, a3);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      v10 = 6568LL;
      v11 = L"Fail to locate VidPnSourceId";
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = -1073741811;
      WdLogSingleEntry0(2LL);
      v10 = 6558LL;
      v11 = L"Fail to locate display adapter";
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v10 = 6550LL;
    v11 = L"Fail to lock device";
  }
  WdLogGlobalForLineNumber = v10;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v15);
LABEL_11:
  v13 = (ADAPTER_RENDER **)v16;
  if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v13[2], (struct DXGDEVICE *)v13);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
