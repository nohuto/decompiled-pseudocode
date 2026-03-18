/*
 * XREFs of DxgkOutputDuplGetMetaData @ 0x1402A1540
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1402A1730 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_META.c)
 */

__int64 __fastcall DxgkOutputDuplGetMetaData(void *a1)
{
  void *v2; // r14
  int v3; // edi
  void *v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+30h] [rbp-38h]
  __int128 Src; // [rsp+38h] [rbp-30h] BYREF
  void *v12[2]; // [rsp+48h] [rbp-20h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2064);
  Src = 0LL;
  *(_OWORD *)v12 = 0LL;
  RtlCopyFromUser(&Src, a1, 0x20uLL);
  v2 = v12[0];
  LODWORD(v12[1]) = 0;
  v12[0] = 0LL;
  v3 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunThunk(Src);
  v4 = v12[0];
  v12[0] = v2;
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741789 )
    RtlCopyToUser(a1, &Src, 0x20uLL);
  if ( v3 >= 0 )
  {
    v5 = (unsigned int)v12[1];
    if ( LODWORD(v12[1]) )
    {
      if ( HIDWORD(Src) < LODWORD(v12[1]) )
        v5 = HIDWORD(Src);
      RtlCopyToUser(v2, v4, v5);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
  return (unsigned int)v3;
}
