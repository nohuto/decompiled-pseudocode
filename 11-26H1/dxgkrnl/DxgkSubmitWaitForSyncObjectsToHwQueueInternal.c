/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1403153B8
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140314910 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1403153A0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1403158CC (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 Src, bool a2)
{
  __int128 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r12
  _BYTE *Pool2; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  char v19; // [rsp+60h] [rbp-78h]
  __int128 *v20; // [rsp+68h] [rbp-70h]
  struct DXGPROCESS *v21; // [rsp+70h] [rbp-68h]
  __int128 v22; // [rsp+78h] [rbp-60h] BYREF
  __int64 v23; // [rsp+88h] [rbp-50h]
  PVOID P; // [rsp+90h] [rbp-48h]
  _BYTE v25[16]; // [rsp+98h] [rbp-40h] BYREF
  int v26; // [rsp+A8h] [rbp-30h]

  v3 = (__int128 *)Src;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2162);
  Current = DXGPROCESS::GetCurrent(v4);
  v21 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2185;
    v16 = PsGetCurrentProcess(v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v16,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return v12;
  }
  Pool2 = 0LL;
  P = 0LL;
  v26 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(&v22, v3, 0x18uLL);
    v3 = &v22;
    v20 = &v22;
    Pool2 = P;
  }
  else
  {
    v20 = v3;
  }
  v8 = *((unsigned int *)v3 + 1);
  if ( (_DWORD)v8 )
  {
    if ( !a2 )
      goto LABEL_31;
    if ( (unsigned int)v8 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 < 4 )
      {
LABEL_24:
        if ( Pool2 != v25 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        P = 0LL;
        v26 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
        if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        return 3221225495LL;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * v8, 1265072196LL);
      P = Pool2;
    }
    else
    {
      P = v25;
      memset(v25, 0, 4LL * (unsigned int)v8);
      Pool2 = P;
    }
    v26 = v8;
    if ( Pool2 )
    {
      RtlCopyFromUser(Pool2, *((void **)v3 + 1), 4 * v8);
      *((_QWORD *)v3 + 1) = Pool2;
LABEL_31:
      v12 = SubmitWaitForSyncObjectsFromGpu(
              *((_DWORD *)v3 + 1),
              *((const unsigned int **)v3 + 1),
              *((const unsigned __int64 **)v3 + 2),
              *(_DWORD *)v3,
              Current,
              a2,
              0);
      if ( P != v25 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v26 = 0;
      goto LABEL_33;
    }
    goto LABEL_24;
  }
  WdLogSingleEntry2(2LL, *(unsigned int *)v3, -1073741811LL);
  WdLogGlobalForLineNumber = 2209;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
    *(unsigned int *)v3,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v26 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
