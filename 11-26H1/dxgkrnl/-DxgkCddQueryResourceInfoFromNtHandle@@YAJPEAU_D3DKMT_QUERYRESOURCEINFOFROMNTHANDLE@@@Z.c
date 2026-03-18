/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x140396410
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140396E10 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rax
  D3DKMT_HANDLE hDevice; // edx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rdx
  int Resource; // ebx
  HANDLE hNtHandle; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // r8
  PVOID v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  ADAPTER_RENDER **v14; // rcx
  __int64 v15; // rcx
  ADAPTER_RENDER **v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  char v26; // [rsp+80h] [rbp-80h]
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v28[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v29[64]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v30; // [rsp+118h] [rbp+18h]
  char v31; // [rsp+120h] [rbp+20h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1622;
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
    goto LABEL_18;
  }
  hDevice = a1->hDevice;
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, hDevice, Current, (struct DXGDEVICE **)&v21);
  v5 = v21;
  if ( v21 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
      (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v22,
      (struct DXGDEVICE *)v21);
    COREACCESS::COREACCESS((COREACCESS *)v28, *(struct DXGADAPTER *const *)(v5[2] + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v29, *(struct DXGADAPTER *const *)(v5[2] + 16LL));
    v30 = v5;
    v31 = 0;
    Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
    if ( Resource >= 0 )
    {
      hNtHandle = a1->hNtHandle;
      v21 = 0LL;
      v9 = ObReferenceObjectByHandle(hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v21, 0LL);
      v11 = v21;
      Resource = v9;
      if ( v9 == -1073741788 )
      {
        WdLogSingleEntry3(3LL, v5, a1->hNtHandle, -1073741788LL);
        WdLogGlobalForLineNumber = 1666;
      }
      else if ( v9 >= 0 )
      {
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v5, a1, v10, v21);
      }
      else
      {
        WdLogSingleEntry3(3LL, v5, a1->hNtHandle, v9);
        WdLogGlobalForLineNumber = 1674;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v29, v12);
      COREACCESS::~COREACCESS((COREACCESS *)v28, v13);
      if ( v23 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v22 + 136));
        KeLeaveCriticalRegion();
      }
      v14 = (ADAPTER_RENDER **)v20;
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(v14[2], (struct DXGDEVICE *)v14);
      if ( v11 )
        ObfDereferenceObject(v11);
      goto LABEL_18;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v29, v6);
    COREACCESS::~COREACCESS((COREACCESS *)v28, v18);
    if ( v23 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v22 + 136));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    Object = a1->hDevice;
    WdLogGlobalForLineNumber = 1636;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Object,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = (ADAPTER_RENDER **)v20;
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v17[2], (struct DXGDEVICE *)v17);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return (unsigned int)Resource;
}
