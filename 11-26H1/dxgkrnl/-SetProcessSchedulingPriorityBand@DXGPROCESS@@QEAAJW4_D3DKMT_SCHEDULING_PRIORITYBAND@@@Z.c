/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1401F7308
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401F8BC0 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1401949B0 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, int a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // r14
  struct DXGADAPTER *v5; // r15
  int v6; // eax
  DXGDEVICE *Current; // rax
  DXGDEVICE *v8; // rsi
  _QWORD v10[2]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v12[144]; // [rsp+70h] [rbp-D8h] BYREF

  v3 = a2;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(a1 + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4949;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 4949LL, 0LL, 0LL, 0LL, 0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  *(_QWORD *)(a1 + 224) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 211) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 419, 1, 0);
    *(_DWORD *)(a1 + 416) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      WdLogSingleEntry2(3LL, v3, -1073741811LL);
      WdLogGlobalForLineNumber = 4975;
      *(_QWORD *)(a1 + 224) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
      KeLeaveCriticalRegion();
      return 3221225485LL;
    }
    *(_DWORD *)(a1 + 416) = 2;
  }
  v4 = *(_QWORD **)(a1 + 320);
  v10[0] = a1 + 320;
  while ( 1 )
  {
    v10[1] = v4;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    v8 = Current;
    if ( !Current )
      break;
    v5 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, v5, 0LL);
    v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL);
    if ( v6 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v8);
    }
    else
    {
      WdLogSingleEntry2(3LL, v5, v6);
      WdLogGlobalForLineNumber = 5002;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11);
    v4 = (_QWORD *)*v4;
  }
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 211) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 419, 0, 1);
  *(_QWORD *)(a1 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
