/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x14034D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1400334E0 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140037E2C (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x14034DCCC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(unsigned int *Src)
{
  __int64 v2; // rcx
  struct DXGDEVICE *Current; // rdi
  _BYTE *v4; // rcx
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // rcx
  signed int ULongFromUser; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int v12; // ebx
  ADAPTER_RENDER **v13; // rcx
  ADAPTER_RENDER **v14; // rcx
  ADAPTER_RENDER **v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGDEVICE *v19; // [rsp+50h] [rbp-168h] BYREF
  char v20; // [rsp+58h] [rbp-160h]
  struct DXGDEVICE *v21; // [rsp+60h] [rbp-158h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Srca; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp-130h] BYREF
  PVOID v24; // [rsp+98h] [rbp-120h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp-118h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp-108h]
  PVOID P; // [rsp+B8h] [rbp-100h] BYREF
  _BYTE v28[32]; // [rsp+C0h] [rbp-F8h] BYREF
  unsigned int v29; // [rsp+E0h] [rbp-D8h]
  _BYTE v30[160]; // [rsp+F0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)Src);
  v19 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 6072;
    v18 = PsGetCurrentProcess(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v18,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v24 = 0LL;
  v26 = 0;
  P = 0LL;
  v29 = 0;
  memset(&Srca, 0, sizeof(Srca));
  RtlCopyFromUser(&Srca, Src, 0x18uLL);
  Srca.Flags.Value = 0;
  if ( Srca.ObjectCount )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v24);
    v4 = v24;
    if ( v24 )
    {
      RtlCopyFromUser(v24, (void *)Srca.ObjectHandleArray, 4LL * v26);
      Srca.ObjectHandleArray = (const D3DKMT_HANDLE *)v24;
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&P, Srca.ObjectCount);
      if ( P )
      {
        RtlCopyFromUser(P, (void *)Srca.FenceValueArray, 8LL * v29);
        Srca.FenceValueArray = (const UINT64 *)P;
        v19 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, Srca.hDevice, (struct _KTHREAD **)Current, &v19);
        v6 = v19;
        if ( !v19 )
        {
          WdLogSingleEntry2(2LL, Srca.hDevice, -1073741811LL);
          WdLogGlobalForLineNumber = 6128;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
            Srca.hDevice,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_42;
        }
        v20 = 0;
        DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v19);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v6, 0, v7, 0);
        v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
        if ( v8 >= 0 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
          if ( !v9 )
          {
            WdLogSingleEntry2(2LL, Srca.hDevice, -1073741811LL);
            WdLogGlobalForLineNumber = 6150;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Input hDevice (0x%I64x) has no render adapter, returning 0x%I64x",
              Srca.hDevice,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
LABEL_75:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v19);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v21);
LABEL_45:
            if ( P != v28 && P )
              ExFreePoolWithTag(P, 0);
            v29 = 0;
            P = 0LL;
            if ( v24 != v25 && v24 )
              ExFreePoolWithTag(v24, 0);
            return 3221225485LL;
          }
          if ( *(_DWORD *)(v9 + 2320) < 0x5020u )
          {
LABEL_30:
            Global = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
            v12 = SignalSynchronizationObjectFromCpu(&Srca, Current, v6);
            if ( v23[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
            if ( v19 && v20 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v19 + 17));
              KeLeaveCriticalRegion();
            }
            v13 = (ADAPTER_RENDER **)v21;
            if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(v13[2], (struct DXGDEVICE *)v13);
            if ( P != v28 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v29 = 0;
            if ( v24 != v25 )
            {
              if ( v24 )
                ExFreePoolWithTag(v24, 0);
            }
            return v12;
          }
          ULongFromUser = RtlReadULongFromUser(Src + 6);
          Srca.Flags.Value = ULongFromUser;
          if ( (ULongFromUser & 0x7FFFFFF8) == 0 )
          {
            if ( ULongFromUser >= 0 )
              goto LABEL_30;
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 6181;
            goto LABEL_75;
          }
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 6175;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
          if ( v19 && v20 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v19 + 17));
            KeLeaveCriticalRegion();
          }
LABEL_42:
          v14 = (ADAPTER_RENDER **)v21;
          if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(v14[2], (struct DXGDEVICE *)v14);
          goto LABEL_45;
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
        if ( v19 && v20 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v19 + 17));
          KeLeaveCriticalRegion();
        }
        v15 = (ADAPTER_RENDER **)v21;
        if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(v15[2], (struct DXGDEVICE *)v15);
        if ( P != v28 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v29 = 0;
        if ( v24 != v25 && v24 )
          ExFreePoolWithTag(v24, 0);
        return (unsigned int)v8;
      }
      else
      {
        P = 0LL;
        v29 = 0;
        if ( v24 != v25 && v24 )
          ExFreePoolWithTag(v24, 0);
        v24 = 0LL;
        v26 = 0;
        return 3221225495LL;
      }
    }
    else
    {
      if ( P != v28 && P )
      {
        ExFreePoolWithTag(P, 0);
        v4 = v24;
      }
      P = 0LL;
      v29 = 0;
      if ( v4 != v25 && v4 )
        ExFreePoolWithTag(v4, 0);
      v24 = 0LL;
      v26 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( P != v28 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v29 = 0;
    if ( v24 != v25 && v24 )
      ExFreePoolWithTag(v24, 0);
    v24 = 0LL;
    v26 = 0;
    return 3221225485LL;
  }
}
