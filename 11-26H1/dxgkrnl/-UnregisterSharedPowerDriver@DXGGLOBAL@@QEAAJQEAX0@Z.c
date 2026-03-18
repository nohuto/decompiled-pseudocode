/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1401E01D4
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1401C1770 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1400349C8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x14007BC90 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x14007BD48 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C3E0 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x14007C42C (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401E0334 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(
        KSPIN_LOCK *this,
        DXGADAPTER *a2,
        struct DXGTHREADPROCESS **a3)
{
  DXGADAPTERLISTLOCK *v3; // r13
  unsigned int v7; // esi
  struct DXGTHREADPROCESS **v8; // r9
  struct DXGTHREADPROCESS **v9; // r10
  struct DXGTHREADPROCESS ***v10; // rbx
  DXGSHAREDPOWERREGISTRATIONOBJECT **v11; // r14
  DXGSHAREDPOWERREGISTRATIONOBJECT *v12; // rdi
  DXGSHAREDPOWERREGISTRATIONOBJECT *v13; // rcx
  DXGSHAREDPOWERREGISTRATIONOBJECT *v14; // r8
  unsigned int v15; // r13d
  DXGSHAREDPOWERREGISTRATIONOBJECT **v16; // rax
  struct DXGTHREADPROCESS **v17; // rcx
  DXGADAPTERLISTLOCK *v19; // [rsp+50h] [rbp+8h]

  v3 = (DXGADAPTERLISTLOCK *)(this + 85);
  v19 = (DXGADAPTERLISTLOCK *)(this + 85);
  v7 = 0;
  DXGADAPTERLISTLOCK::AcquireShared((DXGADAPTERLISTLOCK *)(this + 85));
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 222));
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState((DXGGLOBAL *)this, a2) )
  {
    while ( 1 )
    {
      v10 = 0LL;
      if ( v8 != v9 )
        v10 = (struct DXGTHREADPROCESS ***)v8;
      if ( !v10 )
      {
        v7 = -1073741811;
        goto LABEL_21;
      }
      if ( v10[4] == (struct DXGTHREADPROCESS **)a2 && v10[3] == a3 )
        break;
      v8 = (struct DXGTHREADPROCESS **)*v8;
    }
    v11 = v10[8];
    v12 = *v11;
    while ( 1 )
    {
      v13 = 0LL;
      if ( v12 != (DXGSHAREDPOWERREGISTRATIONOBJECT *)v11 )
        v13 = v12;
      if ( !v13 )
        break;
      v14 = *(DXGSHAREDPOWERREGISTRATIONOBJECT **)v13;
      v15 = *((_DWORD *)v13 + 6);
      v12 = *(DXGSHAREDPOWERREGISTRATIONOBJECT **)v12;
      if ( *(DXGSHAREDPOWERREGISTRATIONOBJECT **)(*(_QWORD *)v13 + 8LL) != v13
        || (v16 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v13 + 1), *v16 != v13) )
      {
        __fastfail(3u);
      }
      *v16 = v14;
      *((_QWORD *)v14 + 1) = v16;
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v13);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v15);
    }
    DXGGLOBAL::RemoveThreadToDxgThreadList(this, v10);
    v17 = v10[8];
    if ( v17 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v17);
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'((DXGSHAREDPOWERREGISTRATIONOBJECT *)v10);
    v3 = v19;
  }
  else
  {
    v7 = -1073741130;
  }
LABEL_21:
  this[223] = 0LL;
  ExReleasePushLockExclusiveEx(this + 222, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v3);
  return v7;
}
