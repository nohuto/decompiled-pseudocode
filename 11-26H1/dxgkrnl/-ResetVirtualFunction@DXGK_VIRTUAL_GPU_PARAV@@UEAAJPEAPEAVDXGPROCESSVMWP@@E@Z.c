/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x14021C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x140083BF8 (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14018F6F0 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct DXGPROCESSVMWP **a2,
        char a3)
{
  _QWORD *i; // rdi
  DXGPROCESS *v7; // rcx
  _BYTE v9[88]; // [rsp+50h] [rbp-D8h] BYREF
  DXGADAPTER *v10; // [rsp+A8h] [rbp-80h]

  if ( !*((_BYTE *)this + 156) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, *((struct DXGADAPTER *const *)this + 2), 0LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 691;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CoreAdapterAccess.IsSharedOwner()",
          691LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGPUSHLOCK::AcquireShared((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      for ( i = (_QWORD *)*((_QWORD *)this + 40); i != (_QWORD *)((char *)this + 320); i = (_QWORD *)*i )
      {
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(i + 39));
        if ( !*((_BYTE *)i - 48) )
          DXGDEVICE::FlushScheduler(i - 15, 4LL, 4294967293LL, 0LL);
        i[40] = 0LL;
        ExReleasePushLockExclusiveEx(i + 39, 0LL);
        KeLeaveCriticalRegion();
      }
      _InterlockedDecrement((volatile signed __int32 *)this + 76);
      ExReleasePushLockSharedEx((char *)this + 288, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
    }
    if ( *((_QWORD *)this + 12) && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 13)) && a2 )
      *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 173) = 0;
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
  }
  if ( a3 )
  {
    v7 = (DXGPROCESS *)*((_QWORD *)this + 12);
    if ( v7 )
    {
      DXGPROCESS::ReleaseReference(v7);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  *((_BYTE *)this + 156) = 1;
  return 0LL;
}
