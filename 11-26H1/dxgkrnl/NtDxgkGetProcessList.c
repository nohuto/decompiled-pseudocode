/*
 * XREFs of NtDxgkGetProcessList @ 0x1401B9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1401A9800 (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 */

__int64 __fastcall NtDxgkGetProcessList(void *Src)
{
  void *v2; // rdi
  LONG HighPart; // ebx
  PVOID Pool2; // rax
  __int64 v5; // rcx
  int ProcessAdapterInfo; // ebx
  struct DXGADAPTER *v8; // rbx
  unsigned int v9; // edi
  unsigned int i; // edx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _LUID v14[2]; // [rsp+50h] [rbp-298h] BYREF
  void *Srca; // [rsp+60h] [rbp-288h]
  int v16; // [rsp+68h] [rbp-280h] BYREF
  __int64 v17; // [rsp+70h] [rbp-278h]
  char v18; // [rsp+78h] [rbp-270h]
  struct DXGADAPTER *v19[2]; // [rsp+80h] [rbp-268h] BYREF
  int v20; // [rsp+90h] [rbp-258h]
  void *v21; // [rsp+98h] [rbp-250h]
  _BYTE v22[32]; // [rsp+A0h] [rbp-248h] BYREF
  PVOID P; // [rsp+C0h] [rbp-228h]
  _BYTE v24[512]; // [rsp+C8h] [rbp-220h] BYREF
  LONG v25; // [rsp+2C8h] [rbp-20h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2203);
  *(_OWORD *)&v14[0].LowPart = 0LL;
  Srca = 0LL;
  v2 = 0LL;
  v21 = 0LL;
  v19[0] = 0LL;
  P = 0LL;
  v25 = 0;
  RtlCopyFromUser(v14, Src, 0x18uLL);
  if ( !Srca )
    goto LABEL_21;
  HighPart = v14[1].HighPart;
  if ( !v14[1].HighPart )
    goto LABEL_21;
  v2 = Srca;
  v21 = Srca;
  if ( v14[1].HighPart <= 0x40u )
  {
    P = v24;
    memset(v24, 0, 8LL * (unsigned int)v14[1].HighPart);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v14[1].HighPart < 8 )
    {
      Pool2 = 0LL;
      goto LABEL_13;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * (unsigned int)v14[1].HighPart, 1265072196LL);
    P = Pool2;
  }
  v25 = HighPart;
LABEL_13:
  Srca = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13184;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Out of memory allocating D3DKMT_GETPROCESSLIST_PER_PROCESS, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v24 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v25 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
    }
    return 3221225495LL;
  }
LABEL_21:
  if ( v14[1].LowPart != 1024 )
  {
    ProcessAdapterInfo = -1073741811;
    WdLogSingleEntry2(2LL, v14[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13201;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DesiredAccess:0x%I64x specified, returning 0x%I64x",
      v14[1].LowPart,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v19, v14);
  v8 = v19[0];
  if ( !v19[0] )
  {
    ProcessAdapterInfo = -1073741811;
    WdLogSingleEntry3(2LL, v14[0].HighPart, v14[0].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 13210;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v14[0].HighPart,
      v14[0].LowPart,
      -1073741811LL,
      0LL,
      0LL);
LABEL_46:
    if ( P != v24 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v25 = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return (unsigned int)ProcessAdapterInfo;
  }
  if ( !*((_QWORD *)v19[0] + 396) )
  {
    ProcessAdapterInfo = -1073741637;
    WdLogSingleEntry3(3LL, v14[0].HighPart, v14[0].LowPart, -1073741637LL);
    WdLogGlobalForLineNumber = 13218;
    goto LABEL_46;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22, v19[0], 1);
  if ( *((_DWORD *)v8 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v8 + 396),
                           (void **)Srca,
                           (unsigned int *)&v14[1].HighPart,
                           v14[1].LowPart);
    v20 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      RtlWriteULongToUser((_DWORD *)Src + 3, v14[1].HighPart);
      if ( ProcessAdapterInfo >= 0 && v14[1].HighPart )
        RtlCopyToUser(v2, Srca, 8LL * (unsigned int)v14[1].HighPart);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13243;
      v9 = 0;
      for ( i = v14[1].HighPart; v9 < i; ++v9 )
      {
        v11 = (void *)*((_QWORD *)Srca + v9);
        if ( v11 )
        {
          ZwClose(v11);
          i = v14[1].HighPart;
        }
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    goto LABEL_46;
  }
  WdLogSingleEntry3(2LL, v14[0].HighPart, v14[0].LowPart, -1073741811LL);
  WdLogGlobalForLineNumber = 13230;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
    v14[0].HighPart,
    v14[0].LowPart,
    -1073741811LL,
    0LL,
    0LL);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  if ( P != v24 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v25 = 0;
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
