/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1402AFBA8
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1401958C0 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkOpenAdapterFromLuid @ 0x1402AFB90 (DxgkOpenAdapterFromLuid.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1402AFAB8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *Src, char a2)
{
  DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  struct DXGADAPTER *v8; // rbx
  ADAPTER_RENDER *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp-68h] BYREF
  __int64 v17; // [rsp+58h] [rbp-60h]
  char v18; // [rsp+60h] [rbp-58h]
  _BYTE v19[8]; // [rsp+68h] [rbp-50h] BYREF
  struct DXGADAPTER *v20; // [rsp+70h] [rbp-48h]
  char v21; // [rsp+78h] [rbp-40h]
  unsigned __int64 v22; // [rsp+80h] [rbp-38h] BYREF
  struct _LUID AdapterLuid; // [rsp+88h] [rbp-30h] BYREF
  unsigned int hAdapter; // [rsp+90h] [rbp-28h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2082);
  AdapterLuid = 0LL;
  hAdapter = 0;
  if ( a2 )
  {
    RtlCopyFromUser(&AdapterLuid, Src, 0xCuLL);
  }
  else
  {
    AdapterLuid = Src->AdapterLuid;
    hAdapter = Src->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent();
  v5 = Current;
  if ( !Current )
  {
    v13 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 447;
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
LABEL_26:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return (unsigned int)v13;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v13 = (*(__int64 (__fastcall **)(struct _LUID))(*((_QWORD *)v5 + 11) + 464LL))(AdapterLuid);
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 462;
        goto LABEL_26;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v22);
  v8 = v7;
  if ( !v7 )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(3LL, AdapterLuid.LowPart, AdapterLuid.HighPart, -1073741811LL);
    WdLogGlobalForLineNumber = 480;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)v7 + 754) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 490;
    DXGADAPTER::ReleaseReference(v8);
  }
  else
  {
    v20 = v7;
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    if ( *((_DWORD *)v8 + 50) != 1
      || *((_BYTE *)v8 + 3057)
      || (v9 = (ADAPTER_RENDER *)*((_QWORD *)v8 + 396)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v9, v5) )
    {
      v10 = DXGADAPTER::CreateHandle(v8, v5, &hAdapter);
      DXGADAPTER::ReleaseReference(v8);
      if ( a2 )
        RtlWriteULongToUser(&Src->hAdapter, hAdapter);
      else
        Src->hAdapter = hAdapter;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      }
      return v10;
    }
    WdLogSingleEntry2(4LL, v8, v5);
    WdLogGlobalForLineNumber = 508;
    DXGADAPTER::ReleaseReference(v8);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return 3221225506LL;
}
