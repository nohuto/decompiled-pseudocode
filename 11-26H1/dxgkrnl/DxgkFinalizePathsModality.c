/*
 * XREFs of DxgkFinalizePathsModality @ 0x140412AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140364738 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkFinalizePathsModality(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-39h] BYREF
  __int64 v7; // [rsp+28h] [rbp-31h]
  char v8; // [rsp+30h] [rbp-29h]
  int v9; // [rsp+40h] [rbp-19h] BYREF
  __int128 v10; // [rsp+48h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-1h]
  __int16 v12; // [rsp+60h] [rbp+7h]
  __int128 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  char v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  int v18; // [rsp+90h] [rbp+37h]
  __int64 v19; // [rsp+94h] [rbp+3Bh]
  __int64 v20; // [rsp+A0h] [rbp+47h]

  v6 = -1;
  v7 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v8 = 1;
    v6 = 2170;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v6, 2170);
  if ( a1 )
  {
    v17 = 0;
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0;
    v14 = 0LL;
    v15 = a1;
    v16 = 0;
    v18 = 1;
    v19 = 0LL;
    v20 = 0LL;
    v4 = CCD_TOPOLOGY::FinalizeTopology((CCD_TOPOLOGY *)&v9);
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
    if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
    return v4;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
    if ( v8 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
