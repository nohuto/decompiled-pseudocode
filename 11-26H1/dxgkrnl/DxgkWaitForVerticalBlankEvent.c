/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1403863C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(void *Src)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h]
  char v7; // [rsp+50h] [rbp-38h]
  union _LARGE_INTEGER v8; // [rsp+58h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+68h] [rbp-20h]

  v5 = -1;
  v6 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v7 = 1;
    v5 = 2026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v7 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v5, 2026);
  v9 = 0LL;
  v10 = 0;
  RtlCopyFromUser(&v9, Src, 0xCuLL);
  v8.QuadPart = -800000LL;
  v2 = DxgkWaitForVerticalBlankEventInternal((unsigned int)v9, SHIDWORD(v9), v10, 0, 0LL, &v8);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v5);
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
  return v2;
}
