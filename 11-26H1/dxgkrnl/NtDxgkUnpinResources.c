/*
 * XREFs of NtDxgkUnpinResources @ 0x1403E5040
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403E5570 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall NtDxgkUnpinResources(void *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v4; // rdi
  bool v5; // r15
  DXGDEVICE *v6; // r14
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  ADAPTER_RENDER **v10; // rcx
  __int64 v11; // rcx
  unsigned int i; // esi
  unsigned int ULongFromUser; // eax
  __int64 v15; // r12
  int v16; // eax
  ADAPTER_RENDER **v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp-118h] BYREF
  __int64 v20; // [rsp+58h] [rbp-110h]
  char v21; // [rsp+60h] [rbp-108h]
  struct DXGDEVICE *v22; // [rsp+68h] [rbp-100h] BYREF
  struct DXGDEVICE *v23[2]; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v24[4]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+90h] [rbp-D8h]
  unsigned int v26; // [rsp+98h] [rbp-D0h]
  _BYTE v27[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2080;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2080);
  Current = DXGPROCESS::GetCurrent(v2);
  v4 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6741;
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
    goto LABEL_14;
  }
  v5 = (*((_DWORD *)Current + 102) & 4) == 0;
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  RtlCopyFromUser(v24, Src, 0x18uLL);
  if ( !*(_QWORD *)&v24[2] || !v24[1] )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v24[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6773;
    goto LABEL_14;
  }
  v23[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v24[0], v4, v23);
  v6 = v23[0];
  if ( !v23[0] )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, v24[0], -1073741811LL);
    WdLogGlobalForLineNumber = 6784;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v24[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_34:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v22);
    goto LABEL_14;
  }
  if ( (*((_BYTE *)v23[0] + 1917) & 1) == 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23, v23[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v6, 2, v7, 0);
    v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0; i < v24[1]; ++i )
      {
        ULongFromUser = RtlReadULongFromUser((unsigned int *)(*(_QWORD *)&v24[2] + 4LL * i));
        v15 = ULongFromUser;
        v26 = ULongFromUser;
        v16 = DXGDEVICE::UnpinResource(v6, ULongFromUser, v5, (struct COREDEVICEACCESS *)v27);
        v9 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry2(3LL, v15, v16);
          WdLogGlobalForLineNumber = 6828;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
          goto LABEL_34;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
      v10 = (ADAPTER_RENDER **)v22;
      if ( !v22 )
        goto LABEL_14;
      goto LABEL_12;
    }
    WdLogSingleEntry2(3LL, v6, v8);
    WdLogGlobalForLineNumber = 6805;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
    v10 = (ADAPTER_RENDER **)v22;
    if ( v22 )
    {
LABEL_12:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v10[2], (struct DXGDEVICE *)v10);
    }
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    }
    return v9;
  }
  v17 = (ADAPTER_RENDER **)v22;
  if ( v22 && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v17[2], (struct DXGDEVICE *)v17);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return 0LL;
}
