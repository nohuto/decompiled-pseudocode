/*
 * XREFs of ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1401F4F14
 * Callers:
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401F6944 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x14006D48C (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x14018B6B4 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(DXGVIRTUALMACHINE *this, struct DXGPROCESSVMWP *a2)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d
  struct DXGGLOBAL *Global; // rdi
  struct DXGGLOBAL *v8; // rbx
  struct DXGGLOBAL **v9; // rcx
  DXGVIRTUALMACHINE *result; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 68;
  *((_DWORD *)this + 22) = -1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 28;
  *((_DWORD *)this + 30) = -1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 67;
  *((_DWORD *)this + 38) = -1;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((__int64)this + 160, 1);
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = v5;
  *((_DWORD *)this + 92) = v6;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 256;
  DXGSPINLOCK::DXGSPINLOCK((DXGVIRTUALMACHINE *)((char *)this + 408));
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 126) = 1;
  *((_WORD *)this + 260) = 0;
  *((_QWORD *)this + 54) = (char *)this + 424;
  *((_QWORD *)this + 53) = (char *)this + 424;
  *((_QWORD *)this + 61) = DXG_DEFERRED_WORK_QUEUE_DPC::DeferredWorkQueueCallback;
  *((_QWORD *)this + 62) = (char *)this + 408;
  *((_QWORD *)this + 59) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 448), NotificationEvent, 1u);
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 48) = (char *)this + 376;
  *((_QWORD *)this + 47) = (char *)this + 376;
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 35) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v8 = (DXGVIRTUALMACHINE *)((char *)this + 8);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 496));
  v9 = (struct DXGGLOBAL **)*((_QWORD *)Global + 214);
  if ( *v9 != (struct DXGGLOBAL *)((char *)Global + 1704) )
    __fastfail(3u);
  *((_QWORD *)this + 2) = v9;
  *(_QWORD *)v8 = (char *)Global + 1704;
  *v9 = v8;
  *((_QWORD *)Global + 214) = v8;
  ++*((_DWORD *)Global + 430);
  *((_QWORD *)Global + 63) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 496, 0LL);
  KeLeaveCriticalRegion();
  result = this;
  *((_DWORD *)this + 126) = 47;
  return result;
}
