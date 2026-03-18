/*
 * XREFs of DxgkCloseAdapterImpl @ 0x1402E7AB0
 * Callers:
 *     DxgkCloseAdapterInternal @ 0x1401B5330 (DxgkCloseAdapterInternal.c)
 *     DxgkCloseAdapter @ 0x1402E7A90 (DxgkCloseAdapter.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x1403A0BD0 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCloseAdapterImpl(unsigned int *a1, char a2)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  char v10; // [rsp+60h] [rbp-18h]
  unsigned int ULongFromUser; // [rsp+90h] [rbp+18h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2002);
  if ( a2 )
    ULongFromUser = RtlReadULongFromUser(a1);
  else
    ULongFromUser = *a1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v5 = DXGADAPTER::DestroyHandle(Current, ULongFromUser);
  }
  else
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1787;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
  return v5;
}
