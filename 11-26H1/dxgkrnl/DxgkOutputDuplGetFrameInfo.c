/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1403E3F80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x14029F000 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(void *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-68h] BYREF
  __int64 v6; // [rsp+28h] [rbp-60h]
  char v7; // [rsp+30h] [rbp-58h]
  _OWORD Src[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]

  v5 = -1;
  v6 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v7 = 1;
    v5 = 2063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v7 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v5, 2063);
  memset(Src, 0, sizeof(Src));
  v9 = 0LL;
  RtlCopyFromUser(Src, a1, 0x38uLL);
  v2 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *>::RunThunk(
         Src[0],
         DWORD1(Src[0]),
         (__int64)Src,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v2 >= 0 )
    RtlCopyToUser(a1, Src, 0x38uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v5);
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
  return (unsigned int)v2;
}
