/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1403B6D4C
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1400A1B20 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1403B6D10 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1403B6D30 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x140306B70 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 Src, int a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r15d
  _OWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  void **v16; // rax
  __int64 v17; // rcx
  unsigned int *Elements; // rax
  unsigned int *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+50h] [rbp-278h] BYREF
  __int64 v28; // [rsp+58h] [rbp-270h]
  char v29; // [rsp+60h] [rbp-268h]
  struct _KTHREAD **v30; // [rsp+68h] [rbp-260h]
  void *v31[58]; // [rsp+70h] [rbp-258h] BYREF
  PVOID P; // [rsp+240h] [rbp-88h] BYREF
  _BYTE v33[64]; // [rsp+248h] [rbp-80h] BYREF
  int v34; // [rsp+288h] [rbp-40h]

  v4 = a4;
  v6 = (_OWORD *)Src;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2044);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7);
  v30 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1165;
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
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  memset(v31, 0, sizeof(v31));
  if ( a2 )
  {
    RtlCopyFromUser(v31, v6, 0x1D0uLL);
    v13 = HIDWORD(v31[17]);
    if ( HIDWORD(v31[17]) > 0x40 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1194;
      goto LABEL_12;
    }
    if ( HIDWORD(v31[0]) > 0x20 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1200;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Signaling too many objects %d",
        HIDWORD(v31[0]),
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v16 = v31;
    v17 = 3LL;
    do
    {
      *(_OWORD *)v16 = *v6;
      *((_OWORD *)v16 + 1) = v6[1];
      *((_OWORD *)v16 + 2) = v6[2];
      *((_OWORD *)v16 + 3) = v6[3];
      *((_OWORD *)v16 + 4) = v6[4];
      *((_OWORD *)v16 + 5) = v6[5];
      *((_OWORD *)v16 + 6) = v6[6];
      v16 += 16;
      *((_OWORD *)v16 - 1) = v6[7];
      v6 += 8;
      --v17;
    }
    while ( v17 );
    *(_OWORD *)v16 = *v6;
    *((_OWORD *)v16 + 1) = v6[1];
    *((_OWORD *)v16 + 2) = v6[2];
    *((_OWORD *)v16 + 3) = v6[3];
    *((_OWORD *)v16 + 4) = v6[4];
    v13 = HIDWORD(v31[17]);
  }
  P = 0LL;
  v34 = 0;
  Elements = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64)&P, v13 + 1);
  v19 = Elements;
  if ( Elements )
  {
    *Elements = (unsigned int)v31[0];
    v21 = 0LL;
    v22 = HIDWORD(v31[17]);
    if ( HIDWORD(v31[17]) )
    {
      do
      {
        v23 = (unsigned int)(v21 + 1);
        v19[v23] = *((_DWORD *)&v31[18] + v21);
        v21 = v23;
        v22 = HIDWORD(v31[17]);
      }
      while ( (unsigned int)v23 < HIDWORD(v31[17]) );
    }
    v24 = SignalSynchronizationObjectInternal(
            HIDWORD(v31[0]),
            (unsigned int *)&v31[1],
            (unsigned int)v31[17],
            v22 + 1,
            v19,
            0LL,
            (unsigned __int64)v31[50],
            &v31[50],
            Current,
            (a2 != 0) | (unsigned int)(4 * v4));
    if ( v24 >= 0 )
    {
      if ( P != v33 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v34 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      if ( P != v33 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v34 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
      return (unsigned int)v24;
    }
  }
  else
  {
    if ( P != v33 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v34 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
}
