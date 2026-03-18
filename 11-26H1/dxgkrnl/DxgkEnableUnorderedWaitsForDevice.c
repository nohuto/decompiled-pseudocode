/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1403B88B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(__int64 a1, char a2)
{
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v5; // rbx
  __int64 v6; // rax
  ADAPTER_RENDER **v7; // rcx
  ADAPTER_RENDER **v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+58h] [rbp-28h]
  _BYTE v12[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h]
  char v14; // [rsp+70h] [rbp-10h]
  struct DXGDEVICE *v15; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGDEVICE *v16; // [rsp+B8h] [rbp+38h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7845;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v16 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v3, Current, &v16);
  v5 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry2(2LL, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 7855;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v3,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v9 = (ADAPTER_RENDER **)v15;
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v9[2], (struct DXGDEVICE *)v9);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v10, v16);
  v6 = *((_QWORD *)v5 + 2);
  v14 = 0;
  v13 = *(_QWORD *)(v6 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
  if ( *((_DWORD *)v5 + 152) == 1 )
  {
    *((_BYTE *)v5 + 1915) = a2;
    if ( !a2 && *((_QWORD *)v5 + 100) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 736LL) + 8LL) + 880LL))();
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    if ( v10 && v11 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 136));
      KeLeaveCriticalRegion();
    }
    v7 = (ADAPTER_RENDER **)v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v7[2], (struct DXGDEVICE *)v7);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v3, -1073741130LL);
    WdLogGlobalForLineNumber = 7871;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v10);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v15);
    return 3221226166LL;
  }
}
