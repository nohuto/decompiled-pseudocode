/*
 * XREFs of DxgkGetYieldPercentage @ 0x1401F86A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1400744BC (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403FF37C (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 */

__int64 __fastcall DxgkGetYieldPercentage(unsigned int *Src)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  unsigned int ULongFromUser; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h]
  char v14; // [rsp+30h] [rbp-48h]
  DXGADAPTERLISTLOCK *v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  _BYTE v17[16]; // [rsp+48h] [rbp-30h] BYREF
  __int128 Srca; // [rsp+58h] [rbp-20h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2142;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2142);
  if ( CheckTokenForResourceManagerAccess() )
  {
    Srca = 0LL;
    ULongFromUser = RtlReadULongFromUser(Src);
    if ( ULongFromUser >= 0x10 )
    {
      if ( ULongFromUser > 0x10 )
        ULongFromUser = 16;
      RtlCopyFromUser(&Srca, Src, ULongFromUser);
      if ( DWORD1(Srca) )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5335;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
        if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
        return 3221225485LL;
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
          (DXGAUTOADAPTERLISTLOCK *)&v15,
          (struct DXGGLOBAL *)((char *)Global + 680));
        v9 = DXGGLOBAL::GetGlobal();
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGGLOBAL *)((char *)v9 + 304824), 0);
        if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
        {
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
        }
        else
        {
          DXGADAPTERLISTLOCK::AcquireExclusive(v15);
          v16 = 2;
        }
        v10 = DXGGLOBAL::GetGlobal();
        DWORD2(Srca) = DWORD2(Srca) & 0xFFFFFFFE | *((_DWORD *)v10 + 76221) & 1;
        HIDWORD(Srca) = *((_DWORD *)v10 + 76218);
        if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
        else
          DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v15);
        RtlWriteULongToUser(Src + 3, SHIDWORD(Srca));
        RtlCopyToUser(Src + 2, (char *)&Srca + 8, 4uLL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
        DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)&v15);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
        if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5313;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
      if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    WdLogGlobalForLineNumber = 5289;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerExit);
    }
    return 3221225506LL;
  }
}
