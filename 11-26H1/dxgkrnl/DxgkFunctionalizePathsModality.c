/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1401D4640
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // [rsp+58h] [rbp-39h] BYREF
  __int64 v10; // [rsp+60h] [rbp-31h]
  char v11; // [rsp+68h] [rbp-29h]
  int v12; // [rsp+78h] [rbp-19h] BYREF
  __int128 v13; // [rsp+80h] [rbp-11h]
  __int64 v14; // [rsp+90h] [rbp-1h]
  __int16 v15; // [rsp+98h] [rbp+7h]
  __int128 v16; // [rsp+A0h] [rbp+Fh]
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  __int64 v18; // [rsp+B8h] [rbp+27h]
  char v19; // [rsp+C0h] [rbp+2Fh]
  BOOL v20; // [rsp+C4h] [rbp+33h]
  int v21; // [rsp+C8h] [rbp+37h]
  _BOOL8 v22; // [rsp+CCh] [rbp+3Bh]
  __int64 v23; // [rsp+D8h] [rbp+47h]

  v9 = -1;
  v3 = a1;
  v10 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2168;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2168);
  if ( a2 )
  {
    if ( (v3 & 0xDEFD7FFF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 239;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(Flags & ~(D3DKMT_GETPATHSMODALITY_FUNCTIONALIZE_FLAGS)) == 0",
        239LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = a2;
    v12 = 0;
    v14 = 0LL;
    v15 = 0;
    v17 = 0LL;
    v19 = 0;
    v23 = 0LL;
    v13 = 0LL;
    v16 = 0LL;
    v21 = 1;
    v20 = (v3 & 0x8000) != 0;
    v22 = (v3 & 0x1000000) != 0;
    v6 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v12, v3, 0);
    v20 = 0;
    v7 = v6;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
    if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    return v7;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
    if ( v11 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
