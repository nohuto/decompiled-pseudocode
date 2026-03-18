/*
 * XREFs of DxgkDestroyOutputDuplInternal @ 0x14018B870
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1401EF110 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyOutputDupl @ 0x140428D30 (DxgkDestroyOutputDupl.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1403DB80C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJIIPEAU_D3DKMT_DESTROY_OUTPUTDU.c)
 */

__int64 __fastcall DxgkDestroyOutputDuplInternal(_DWORD *Src, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  char v9; // [rsp+60h] [rbp-28h]
  unsigned int v10[2]; // [rsp+68h] [rbp-20h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v7, 2062);
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  if ( a2 )
  {
    if ( !(unsigned __int8)MmIsKernelAddress(Src) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3424;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"MmIsKernelAddress((PVOID)pDestroy)",
        3424LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v10 = *(_QWORD *)Src;
    v11 = Src[2];
  }
  else
  {
    RtlCopyFromUser(v10, Src, 0xCuLL);
  }
  v4 = OutputDuplThunks<_D3DKMT_DESTROY_OUTPUTDUPL *>::RunThunk(v10[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
  return v4;
}
