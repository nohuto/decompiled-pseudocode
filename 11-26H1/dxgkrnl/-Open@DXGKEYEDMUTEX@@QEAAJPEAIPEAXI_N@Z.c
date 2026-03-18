/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C
 * Callers:
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1401FE3D4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B04D0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403D0708 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403DBBA8 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040DE30 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x140045AE8 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140230F54 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, void *a3, unsigned int a4, bool a5)
{
  unsigned __int64 v5; // rsi
  __int64 v9; // rcx
  unsigned int *Current; // r15
  char v11; // di
  _QWORD *v12; // r14
  unsigned int v13; // esi
  unsigned int v14; // edx
  int v15; // r8d
  unsigned int v17; // eax
  unsigned int v18; // edi
  void *v19; // rax
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *Global; // rax
  int v22; // ebx
  _BYTE v23[32]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  Current = (unsigned int *)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(3LL, a2, CurrentProcess);
    WdLogGlobalForLineNumber = 4404;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v23, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
    {
LABEL_5:
      v11 = 1;
      goto LABEL_6;
    }
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4474;
    goto LABEL_19;
  }
  v17 = *((_DWORD *)this + 42);
  if ( v17 )
  {
    if ( v17 == (_DWORD)v5 )
      goto LABEL_5;
    WdLogSingleEntry4(3LL, this, v5, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 4466;
    goto LABEL_19;
  }
  if ( !a3 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4456;
LABEL_19:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    return 3221225485LL;
  }
  v11 = 1;
  if ( *((_QWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4423;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPrivateRuntimeData == NULL", 4423LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = (void *)operator new[](v5, 0x4B677844u, 256LL);
  *((_QWORD *)this + 20) = v19;
  if ( !v19 )
  {
    v18 = -1073741801;
    WdLogSingleEntry3(6LL, this, v5, -1073741801LL);
    WdLogGlobalForLineNumber = 4432;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"KeyedMutex 0x%I64x: Out of memory allocating m_PrivateRuntimeData of size 0x%I64x, returning 0x%I64x",
      (__int64)this,
      v5,
      -1073741801LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    return v18;
  }
  *((_DWORD *)this + 42) = v5;
  RtlCopyFromUser(v19, a3, v5);
LABEL_6:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v23,
    (struct DXGPROCESS *)Current);
  v12 = Current + 70;
  v13 = HMGRTABLE::AllocHandle(Current + 70, (__int64)this, 9, 0, 0);
  if ( !v13 )
  {
    v18 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 4489;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"pKeyedMutex 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DXGKEYEDMUTEX::ReleaseReference(this);
LABEL_22:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
    return v18;
  }
  if ( *((_BYTE *)this + 176) )
  {
    if ( !a5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4500;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OpenForUserMode == true", 4500LL, 0LL, 0LL, 0LL, 0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 212),
            (struct DXGPROCESS *)Current,
            this,
            v13);
    if ( v22 < 0 )
    {
      DXGPROCESS::FreeHandleSafe((DXGPROCESS *)Current, v13);
      v18 = v22;
      goto LABEL_22;
    }
  }
  if ( a5 )
  {
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 >= Current[74]
      || (v15 = *(_DWORD *)(*v12 + 16LL * v14 + 8), ((v13 >> 25) & 0x60) != (*(_BYTE *)(*v12 + 16LL * v14 + 8) & 0x60))
      || (v15 & 0x2000) != 0
      || (v15 & 0x1F) == 0 )
    {
      v11 = 0;
    }
    if ( v11 )
      *(_DWORD *)(16LL * v14 + *v12 + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
  *a2 = v13;
  return 0LL;
}
