/*
 * XREFs of DxgkConvertPathsModalityToDisplayConfig @ 0x140337710
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140337F0C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x14033E1B0 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkConvertPathsModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        int *a2,
        __int64 a3,
        _DWORD *a4)
{
  int v8; // eax
  int TopologyClass; // ebx
  __int64 v10; // rcx
  int v12; // [rsp+28h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-51h]
  char v14; // [rsp+38h] [rbp-49h]
  _DWORD v15[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h]
  __int64 v17; // [rsp+50h] [rbp-31h]
  int v18; // [rsp+58h] [rbp-29h] BYREF
  __int128 v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int16 v21; // [rsp+78h] [rbp-9h]
  __int128 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  struct D3DKMT_GETPATHSMODALITY *v24; // [rsp+98h] [rbp+17h]
  bool v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  int v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+ACh] [rbp+2Bh]
  __int64 v29; // [rsp+B8h] [rbp+37h]
  int v30; // [rsp+E8h] [rbp+67h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2177;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2177);
  if ( a4 )
    *a4 = 0;
  v8 = *a2;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v25 = a1 == 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v24 = a1;
  v26 = 0;
  v27 = 1;
  v28 = 0LL;
  v29 = 0LL;
  v15[0] = 0;
  v16 = a3;
  v17 = a3;
  v15[1] = v8;
  TopologyClass = ConvertPathModalityToDisplayConfig(a1, 0, 0, (struct QDC_CONTEXT *)v15);
  if ( TopologyClass >= 0 )
  {
    *a2 = 1749801491 * ((v17 - v16) >> 3);
    if ( a4 )
    {
      v30 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass((CCD_TOPOLOGY *)&v18, (enum CCD_TOPOLOGY_CLASS *)&v30);
      if ( TopologyClass >= 0 )
        *a4 = v30;
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return (unsigned int)TopologyClass;
}
