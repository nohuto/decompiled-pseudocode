/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1401F62C8 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403FF37C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(unsigned int *Src)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned int ULongFromUser; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  struct DXGPROCESS *Process; // r14
  int v11; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  char v13; // [rsp+30h] [rbp-98h]
  int Srca; // [rsp+38h] [rbp-90h] BYREF
  void *v15[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16; // [rsp+50h] [rbp-78h]
  _BYTE v17[80]; // [rsp+60h] [rbp-68h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2143);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent();
    v3 = -1073741790;
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5403;
    goto LABEL_7;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 420) )
  {
    v3 = -1073741823;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5409;
    goto LABEL_7;
  }
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  ULongFromUser = RtlReadULongFromUser(Src);
  if ( ULongFromUser >= 0x18 )
  {
    if ( ULongFromUser > 0x18 )
      ULongFromUser = 24;
    RtlCopyFromUser(v15, Src, ULongFromUser);
    if ( !HIDWORD(v15[0]) )
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v17, v15[1], 0x2000u);
      v9 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v17, 0);
      v3 = v9;
      if ( v9 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v17);
        Srca = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
        if ( Srca == 3 )
        {
          v3 = -1073741595;
          WdLogSingleEntry2(3LL, Process, -1073741595LL);
          WdLogGlobalForLineNumber = 5480;
        }
        else
        {
          RtlCopyToUser(Src + 4, &Srca, 4uLL);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v15[1], v9);
        WdLogGlobalForLineNumber = 5468;
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v17);
LABEL_7:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
      if ( v13 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
      }
      return v3;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5456;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5434;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
    if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
