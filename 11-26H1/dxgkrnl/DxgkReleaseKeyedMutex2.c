/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x140200110
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
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(void *Src)
{
  struct _KTHREAD **Current; // rbx
  struct DXGKEYEDMUTEX *v3; // rdi
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  size_t Size; // [rsp+28h] [rbp-80h]
  int v10; // [rsp+50h] [rbp-58h] BYREF
  __int64 v11; // [rsp+58h] [rbp-50h]
  char v12; // [rsp+60h] [rbp-48h]
  unsigned int v13[4]; // [rsp+68h] [rbp-40h] BYREF
  void *v14[2]; // [rsp+78h] [rbp-30h]
  size_t v15; // [rsp+88h] [rbp-20h]
  struct DXGKEYEDMUTEX *v16; // [rsp+B8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v17; // [rsp+C0h] [rbp+18h] BYREF

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2069;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2069);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4144;
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
  *(_OWORD *)v13 = 0LL;
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  RtlCopyFromUser(v13, Src, 0x28uLL);
  v16 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v17, v13[0], Current, &v16);
  v3 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry2(3LL, v13[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4169;
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v17);
    goto LABEL_9;
  }
  LODWORD(Size) = v15;
  v6 = DXGKEYEDMUTEX::ReleaseSync(v16, v13[0], *(unsigned __int64 *)&v13[2], (unsigned __int64)v14[0], v14[1], Size, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry3(2LL, v13[0], v3, v6);
    WdLogGlobalForLineNumber = 4187;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v13[0],
      (__int64)v3,
      v7,
      0LL,
      0LL);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&v17);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
  return (unsigned int)v7;
}
