/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1401DD6F8
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x14004F0FC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1401931E8 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14022045C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  __int64 Current; // rax
  __int64 *v4; // rdx
  unsigned int v5; // edx
  DXG_GUEST_GLOBAL_VMBUS *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 440, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 114);
  v2 = *((_QWORD *)this + 53);
  v7[0] = (char *)this + 424;
  while ( 1 )
  {
    v7[1] = v2;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 488) = 0;
    v2 = *v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 114);
  ExReleasePushLockSharedEx((char *)this + 440, 0LL);
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 464));
  v5 = *((_DWORD *)this + 431);
  if ( v5 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((struct _KTHREAD ***)this + 212), v5);
    *((_DWORD *)this + 431) = 0;
  }
  v6 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 212);
  if ( v6 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v6);
  *((_QWORD *)this + 59) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 464, 0LL);
  KeLeaveCriticalRegion();
}
