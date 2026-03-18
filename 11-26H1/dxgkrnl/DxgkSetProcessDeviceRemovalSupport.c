/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x140407550
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(void *Src)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // rbx
  __int64 v6; // rbx
  const wchar_t *v7; // r9
  __int64 v8; // rcx
  signed __int16 v10; // cx
  __int64 v11; // rcx
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+60h] [rbp-18h]
  char v15; // [rsp+88h] [rbp+10h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2155);
  v2 = 0;
  Current = DXGPROCESS::GetCurrent(v3);
  v5 = Current;
  if ( !Current )
  {
    v6 = -1073741811LL;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5779;
    v7 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v6;
  }
  if ( *((_BYTE *)Current + 336) )
  {
    v6 = -1073741823LL;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5785;
    v7 = L"It is invalid to specify device removal support after device creation, returning 0x%I64x";
    goto LABEL_7;
  }
  v15 = 0;
  RtlCopyFromUser(&v15, Src, 1uLL);
  v10 = 1;
  if ( !v15 )
    v10 = 2;
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)v5 + 280, v10, 0) )
  {
    v2 = -1073740528;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5804;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device removal support has been specified before, returning 0x%I64x",
      -1073740528LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return v2;
}
