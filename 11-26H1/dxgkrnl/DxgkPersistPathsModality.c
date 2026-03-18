/*
 * XREFs of DxgkPersistPathsModality @ 0x1403494E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkPersistPathsModality(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-39h] BYREF
  __int64 v8; // [rsp+30h] [rbp-31h]
  char v9; // [rsp+38h] [rbp-29h]
  int v10; // [rsp+48h] [rbp-19h] BYREF
  __int128 v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  __int16 v13; // [rsp+68h] [rbp+7h]
  __int128 v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  __int64 v16; // [rsp+88h] [rbp+27h]
  bool v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  int v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+9Ch] [rbp+3Bh]
  __int64 v21; // [rsp+A8h] [rbp+47h]

  v7 = -1;
  v3 = a1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2167;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2167);
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v17 = a2 == 0;
  v16 = a2;
  v18 = 0;
  v19 = 1;
  v20 = 0LL;
  v21 = 0LL;
  v4 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)&v10, v3);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
  return v4;
}
