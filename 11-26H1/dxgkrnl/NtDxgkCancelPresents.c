/*
 * XREFs of NtDxgkCancelPresents @ 0x1403DEA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCancelPresents(_OWORD *Src)
{
  struct _KTHREAD **Current; // rsi
  struct DXGDEVICE *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // ebx
  ADAPTER_RENDER **v9; // rcx
  ADAPTER_RENDER **v11; // rcx
  const wchar_t *v12; // r9
  ADAPTER_RENDER **v13; // rcx
  const wchar_t *v14; // r9
  struct DXGDEVICE *v15; // [rsp+50h] [rbp-118h] BYREF
  struct DXGDEVICE *v16[2]; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v17[4]; // [rsp+68h] [rbp-100h] BYREF
  __int128 v18; // [rsp+78h] [rbp-F0h]
  __int128 v19; // [rsp+88h] [rbp-E0h]
  _BYTE v20[8]; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-C8h]
  char v22; // [rsp+A8h] [rbp-C0h]
  _BYTE v23[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v16[0] = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)Src);
  if ( !Current )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 959;
    v14 = L"Invalid DXGPROCESS. Returning 0x%I64x";
    goto LABEL_29;
  }
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    RtlCopyFromUser(v17, Src, 0x30uLL);
  }
  else
  {
    *(_OWORD *)v17 = *Src;
    v18 = Src[1];
    v19 = Src[2];
  }
  if ( v17[0] != 48 )
  {
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v17[0], 48LL, -1073741811LL);
    WdLogGlobalForLineNumber = 989;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid cbSize:0x%I64x specified. Expected cbsize:0x%I64x. Returning:0x%I64x",
      v17[0],
      48LL,
      -1073741811LL,
      0LL,
      0LL);
    return v8;
  }
  if ( !*((_QWORD *)&v18 + 1) )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 995;
    v14 = L"Invalid CompSurfaceLuid for Cancel Presents, returning 0x%I64x";
LABEL_29:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return v8;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v17[1], Current, v16);
  v3 = v16[0];
  if ( !v16[0] )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v17[1], -1073741811LL);
    WdLogGlobalForLineNumber = 1003;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v9 = (ADAPTER_RENDER **)v15;
    if ( v15 )
    {
LABEL_13:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v9[2], (struct DXGDEVICE *)v9);
    }
    return v8;
  }
  v4 = *(_QWORD *)(*((_QWORD *)v16[0] + 2) + 16LL);
  if ( (*(_DWORD *)(v4 + 3016) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1010;
    v12 = L"Presentation is not supported on MCDM DXGADAPTER: 0x%I64x";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v4, 0LL, 0LL, 0LL, 0LL);
    v13 = (ADAPTER_RENDER **)v15;
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v13[2], (struct DXGDEVICE *)v13);
    return (unsigned int)-1073741811;
  }
  if ( *(_BYTE *)(v4 + 209) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1016;
    v12 = L"NtDxgkCancelPresents is not currently supported on para-v adapter: 0x%I64x";
    goto LABEL_21;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16, v16[0]);
  v21 = v4;
  v22 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  if ( *(_DWORD *)(v4 + 200) == 1 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v3, 2, v5, 0);
    v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 3168) + 736LL) + 8LL) + 1072LL))(
             *((_QWORD *)v3 + 100),
             *((_QWORD *)&v18 + 1),
             v19,
             v18,
             v17[3],
             v17[2],
             *((_QWORD *)&v19 + 1));
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
      v9 = (ADAPTER_RENDER **)v15;
      if ( v15 )
        goto LABEL_13;
      return v8;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1036;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v15);
    return (unsigned int)v7;
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, -1073741823LL);
    WdLogGlobalForLineNumber = 1027;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v4,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
    v11 = (ADAPTER_RENDER **)v15;
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v11[2], (struct DXGDEVICE *)v11);
    return 3221225473LL;
  }
}
