/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1403B7B0C
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1403B7AD0 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1403B7AF0 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *Src,
        int a2,
        bool a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 CurrentProcess; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  D3DKMT_HANDLE *v17; // rdi
  __int64 v18; // rcx
  int v19; // [rsp+60h] [rbp-128h] BYREF
  __int64 v20; // [rsp+68h] [rbp-120h]
  char v21; // [rsp+70h] [rbp-118h]
  struct DXGPROCESS *v22; // [rsp+78h] [rbp-110h]
  unsigned int v23[52]; // [rsp+80h] [rbp-108h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2043);
  Current = DXGPROCESS::GetCurrent(v6);
  v22 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1061;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v10;
  }
  memset(v23, 0, 0xC8uLL);
  if ( a2 )
  {
    RtlCopyFromUser(v23, Src, 0xC8uLL);
    if ( !v23[1] )
    {
      WdLogSingleEntry2(2LL, v23[0], -1073741811LL);
      WdLogGlobalForLineNumber = 1077;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
        v23[0],
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    if ( v23[1] > 0x20 )
    {
      WdLogSingleEntry3(2LL, v23[0], v23[1], -1073741811LL);
      WdLogGlobalForLineNumber = 1086;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x waiting on too many objects %I64d, returning 0x%I64x",
        v23[0],
        v23[1],
        -1073741811LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
  }
  else
  {
    *(_OWORD *)v23 = *(_OWORD *)&Src->hContext;
    *(_OWORD *)&v23[4] = *(_OWORD *)&Src->ObjectHandleArray[2];
    *(_OWORD *)&v23[8] = *(_OWORD *)&Src->ObjectHandleArray[6];
    *(_OWORD *)&v23[12] = *(_OWORD *)&Src->ObjectHandleArray[10];
    *(_OWORD *)&v23[16] = *(_OWORD *)&Src->ObjectHandleArray[14];
    *(_OWORD *)&v23[20] = *(_OWORD *)&Src->ObjectHandleArray[18];
    *(_OWORD *)&v23[24] = *(_OWORD *)&Src->ObjectHandleArray[22];
    *(_OWORD *)&v23[28] = *(_OWORD *)&Src->ObjectHandleArray[26];
    v17 = &Src->ObjectHandleArray[30];
    *(_OWORD *)&v23[32] = *(_OWORD *)v17;
    *(_OWORD *)&v23[36] = *((_OWORD *)v17 + 1);
    *(_OWORD *)&v23[40] = *((_OWORD *)v17 + 2);
    *(_OWORD *)&v23[44] = *((_OWORD *)v17 + 3);
    *(_QWORD *)&v23[48] = *((_QWORD *)v17 + 8);
  }
  v10 = WaitForSynchronizationObjectFromGpu(
          v23[1],
          &v23[2],
          0LL,
          *(unsigned __int64 *)&v23[34],
          v23[0],
          Current,
          a2 != 0,
          0,
          0,
          0,
          a3);
  if ( v10 < 0 )
    goto LABEL_7;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return 0LL;
}
