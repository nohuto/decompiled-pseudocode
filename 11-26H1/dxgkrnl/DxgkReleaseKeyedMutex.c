/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1401FFE30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140007F98 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x14004C5B0 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(void *Src)
{
  struct _KTHREAD **Current; // rbx
  struct DXGKEYEDMUTEX *v3; // rsi
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  size_t Size; // [rsp+28h] [rbp-80h]
  int v10; // [rsp+50h] [rbp-58h] BYREF
  __int64 v11; // [rsp+58h] [rbp-50h]
  char v12; // [rsp+60h] [rbp-48h]
  struct DXGKEYEDMUTEX *v13; // [rsp+68h] [rbp-40h] BYREF
  DXGKEYEDMUTEX *v14; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v15[4]; // [rsp+78h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp-20h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2055);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4083;
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
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
    if ( v12 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  RtlCopyFromUser(v15, Src, 0x18uLL);
  v13 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v14, v15[0], Current, &v13);
  v3 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry2(3LL, v15[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4108;
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v14);
    goto LABEL_9;
  }
  LODWORD(Size) = 0;
  v6 = DXGKEYEDMUTEX::ReleaseSync(v13, v15[0], *(unsigned __int64 *)&v15[2], v16, 0LL, Size, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry3(2LL, v15[0], v3, v6);
    WdLogGlobalForLineNumber = 4126;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v15[0],
      (__int64)v3,
      v7,
      0LL,
      0LL);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  return (unsigned int)v7;
}
