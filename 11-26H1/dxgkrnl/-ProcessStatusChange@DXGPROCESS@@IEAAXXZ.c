/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1403D3438
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1401F5B10 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14005B6F0 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1401949B0 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  char *v3; // r14
  char *i; // rbx
  struct DXGDEVICE *v6; // rdi
  struct DXGADAPTER *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  struct DXGGLOBAL *Global; // rax
  _BYTE v13[8]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD ApcState[7]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v15[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[64]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v17[64]; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGDEVICE *v18; // [rsp+F0h] [rbp-18h]
  char v19; // [rsp+F8h] [rbp-10h]

  v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  memset(&ApcState[1], 0, 48);
  KeStackAttachProcess(v2, (PRKAPC_STATE)&ApcState[1]);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  v3 = (char *)this + 320;
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 105, 0);
  for ( i = (char *)*((_QWORD *)this + 40); i == v3 || !i ? 0LL : i - 24; i = *(char **)i )
  {
    if ( i == v3 || !i )
      v6 = 0LL;
    else
      v6 = (struct DXGDEVICE *)(i - 24);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, v6);
      COREACCESS::COREACCESS((COREACCESS *)v16, *(struct DXGADAPTER *const *)(*((_QWORD *)v6 + 2) + 16LL));
      v7 = (struct DXGADAPTER *)*((_QWORD *)v6 + 237);
      if ( !v7 )
        v7 = *(struct DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v17, v7);
      v8 = *((_QWORD *)v6 + 2);
      v9 = *((_QWORD *)v6 + 237);
      v18 = v6;
      if ( v9 == *(_QWORD *)(v8 + 16) || (v19 = 1, !v9) )
        v19 = 0;
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15, 0LL) >= 0 )
        DXGDEVICE::NotifyProcessStatusChange(v6);
      COREACCESS::~COREACCESS((COREACCESS *)v17, v10);
      COREACCESS::~COREACCESS((COREACCESS *)v16, v11);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
    }
  }
  if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(*((_QWORD *)Global + 34) + 8LL) + 1000LL))(this);
  }
  KeUnstackDetachProcess((PRKAPC_STATE)&ApcState[1]);
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
}
