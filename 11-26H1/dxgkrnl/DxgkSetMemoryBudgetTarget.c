/*
 * XREFs of DxgkSetMemoryBudgetTarget @ 0x1403FEDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403FF37C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403FF3C8 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetMemoryBudgetTarget(unsigned int *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  unsigned int ULongFromUser; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  char v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2141;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2141);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent(v2);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5168;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225506LL;
  }
  v13 = 0LL;
  ULongFromUser = RtlReadULongFromUser(Src);
  if ( ULongFromUser < 0x10 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5193;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( ULongFromUser > 0x10 )
    ULongFromUser = 16;
  RtlCopyFromUser(&v13, Src, ULongFromUser);
  if ( !DWORD2(v13) || !HIDWORD(v13) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5217;
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( DWORD2(v13) >= 0x64 || HIDWORD(v13) >= 0x64 || (unsigned int)(HIDWORD(v13) + DWORD2(v13)) >= 0x64 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5227;
    goto LABEL_30;
  }
  if ( DWORD1(v13) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5233;
    goto LABEL_30;
  }
  ApplyResourceManagerPolicyToRenderAdapters(1LL, &v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  return 0LL;
}
