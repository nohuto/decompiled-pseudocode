/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1401DFD40
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1401C1710 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1400349C8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x140056518 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x14007BD48 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C3E0 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401E0334 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        void *const a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  DXGADAPTERLISTLOCK *v5; // r12
  unsigned int v10; // ebx
  _QWORD *v11; // r9
  _QWORD *v12; // r10
  unsigned int v13; // edx
  _QWORD *v14; // rdi
  DXGSHAREDPOWERREGISTRATIONOBJECT **v15; // r8
  char v16; // dl
  DXGSHAREDPOWERREGISTRATIONOBJECT *i; // rax
  DXGSHAREDPOWERREGISTRATIONOBJECT *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rdx
  DXGSHAREDPOWERREGISTRATIONOBJECT *v23; // rdx
  DXGSHAREDPOWERREGISTRATIONOBJECT **v24; // rax
  unsigned __int16 v26; // [rsp+9Ah] [rbp+22h]

  v26 = HIWORD(a4);
  v5 = (DXGGLOBAL *)((char *)this + 680);
  v10 = 0;
  DXGADAPTERLISTLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 680));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1776));
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v10 = -1073741130;
    goto LABEL_32;
  }
  v13 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v26 + 1640);
  if ( v13 >= *((_DWORD *)a2 + 852) || *(_DWORD *)(520LL * v13 + *((_QWORD *)a2 + 408) + 208) != 7 )
  {
LABEL_31:
    v10 = -1073741811;
    goto LABEL_32;
  }
  while ( 1 )
  {
    v14 = 0LL;
    if ( v11 != v12 )
      v14 = v11;
    if ( !v14 )
      goto LABEL_31;
    if ( (DXGADAPTER *)v14[4] == a2 && (void *const)v14[3] == a3 )
      break;
    v11 = (_QWORD *)*v11;
  }
  v15 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)v14[8];
  v16 = 0;
  for ( i = *v15; ; i = *(DXGSHAREDPOWERREGISTRATIONOBJECT **)i )
  {
    v18 = 0LL;
    if ( i != (DXGSHAREDPOWERREGISTRATIONOBJECT *)v15 )
      v18 = i;
    if ( !v18 )
      break;
    if ( *((_DWORD *)v18 + 6) == a4 )
    {
      v16 = 1;
      break;
    }
  }
  if ( a5 )
  {
    if ( v16 )
      goto LABEL_32;
    v19 = operator new(0x20uLL, 0x4B677844u, 256LL);
    if ( !v19 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6966;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating pNewListObj of type DXGSHAREDPOWERINUSELISTOBJECT",
        6966LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v10 = -1073741801;
      goto LABEL_32;
    }
    *(_QWORD *)(v19 + 16) = this;
    *(_OWORD *)v19 = 0LL;
    *(_DWORD *)(v19 + 24) = a4;
    v21 = (__int64 *)v14[8];
    v22 = *v21;
    if ( *(__int64 **)(*v21 + 8) == v21 )
    {
      *(_QWORD *)v19 = v22;
      *(_QWORD *)(v19 + 8) = v21;
      *(_QWORD *)(v22 + 8) = v19;
      *v21 = v19;
      DXGADAPTER::SetPowerComponentActiveCB(a2, a4, v20);
      goto LABEL_32;
    }
LABEL_30:
    __fastfail(3u);
  }
  if ( !v16 )
    goto LABEL_32;
  v23 = *(DXGSHAREDPOWERREGISTRATIONOBJECT **)v18;
  if ( *(DXGSHAREDPOWERREGISTRATIONOBJECT **)(*(_QWORD *)v18 + 8LL) != v18 )
    goto LABEL_30;
  v24 = (DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)v18 + 1);
  if ( *v24 != v18 )
    goto LABEL_30;
  *v24 = v23;
  *((_QWORD *)v23 + 1) = v24;
  if ( v18 )
    DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v18);
  DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
LABEL_32:
  _InterlockedDecrement((volatile signed __int32 *)this + 448);
  ExReleasePushLockSharedEx((char *)this + 1776, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v5);
  return v10;
}
