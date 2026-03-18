/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x14020B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1400826AC (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x140209C88 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x14020A008 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(DXGTRACKEDWORKLOAD *Src)
{
  unsigned int v2; // edi
  unsigned int ULongFromUser; // eax
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r9
  const char *v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // r11d
  __int64 v11; // rcx
  bool v12; // al
  int v13; // r8d
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  DXGTRACKEDWORKLOAD *v21; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v22[2]; // [rsp+58h] [rbp-120h] BYREF
  int v23; // [rsp+60h] [rbp-118h] BYREF
  __int64 v24; // [rsp+68h] [rbp-110h]
  char v25; // [rsp+70h] [rbp-108h]
  struct DXGDEVICE *v26; // [rsp+78h] [rbp-100h] BYREF
  DXGTRACKEDWORKLOAD *v27[2]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v29[32]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v30[160]; // [rsp+C0h] [rbp-B8h] BYREF

  v21 = Src;
  v2 = 0;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2207);
  *(_QWORD *)v22 = 0LL;
  ULongFromUser = RtlReadULongFromUser((unsigned int *)Src);
  if ( ULongFromUser < 8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 375;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  if ( ULongFromUser > 8 )
    ULongFromUser = 8;
  RtlCopyFromUser(v22, Src, ULongFromUser);
  v26 = 0LL;
  v21 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v27,
    v22[1],
    (struct _KTHREAD **)Current,
    &v21,
    &v26);
  if ( !v21 )
  {
    v2 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 404;
LABEL_14:
    DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return v2;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v26);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v26, 2, v7, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v30, v8);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
  v9 = (v22[1] >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)Current + 74);
  v11 = v9;
  if ( v9 < v10 )
  {
    v13 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8);
    v12 = ((v22[1] >> 25) & 0x60) == (v13 & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0;
    v11 = v9;
  }
  else
  {
    v12 = 0;
  }
  if ( v12 && (v15 = *((_QWORD *)Current + 35), (*(_BYTE *)(v15 + 16 * v11 + 8) & 0x1F) == 0x13) )
    v14 = *(_QWORD *)(v15 + 16 * v11);
  else
    v14 = 0LL;
  v16 = 16 * v11;
  if ( v14 )
  {
    if ( v9 < v10 )
    {
      v18 = *((_QWORD *)Current + 35);
      v19 = *(_DWORD *)(v18 + v16 + 8);
      if ( ((v22[1] >> 25) & 0x60) == (v19 & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
        *(_DWORD *)(16LL * ((v22[1] >> 6) & 0xFFFFFF) + v18 + 8) |= 0x2000u;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29);
    if ( DXGTRACKEDWORKLOAD::Release(v21) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 436;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ref == 1", 436LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
    goto LABEL_14;
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 424;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
  return 0LL;
}
