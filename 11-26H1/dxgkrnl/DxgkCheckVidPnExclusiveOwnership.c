/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1403F8A00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(volatile void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGSESSIONDATA *SessionData; // r15
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int VidPnSourceOwnerType; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v34[2]; // [rsp+50h] [rbp-58h] BYREF
  int v35; // [rsp+60h] [rbp-48h] BYREF
  __int64 v36; // [rsp+68h] [rbp-40h]
  char v37; // [rsp+70h] [rbp-38h]
  _BYTE v38[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v39; // [rsp+80h] [rbp-28h]
  char v40; // [rsp+88h] [rbp-20h]
  __int64 ULong64FromUser; // [rsp+B8h] [rbp+10h]
  struct DXGADAPTER *v42; // [rsp+C0h] [rbp+18h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2058);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    v16 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6716;
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
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    }
    return v16;
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 6726;
    v33 = (unsigned int)PsGetCurrentProcessSessionId(v29, v28, v30, v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckVidPnExclusiveOwnership is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v33,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  ULong64FromUser = RtlReadULong64FromUser(a1);
  v42 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v34,
    ULong64FromUser,
    (struct _KTHREAD **)Current,
    &v42,
    1);
  v13 = v42;
  if ( !v42 )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)ULong64FromUser, -1073741811LL);
    WdLogGlobalForLineNumber = 6754;
LABEL_37:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v34, v32);
    goto LABEL_13;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 224LL))() )
  {
    v16 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = -1071775738LL;
    WdLogGlobalForLineNumber = 6767;
    goto LABEL_37;
  }
  if ( !*((_QWORD *)v13 + 395) )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 6776;
    goto LABEL_11;
  }
  v39 = v13;
  v40 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
  if ( *((_DWORD *)v13 + 50) == 1 )
  {
    if ( HIDWORD(ULong64FromUser) < *(_DWORD *)(*((_QWORD *)v13 + 395) + 96LL) )
    {
      if ( *((int *)SessionData + 4632) <= 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v16 = -1071775738;
        v25[3] = -1071775738LL;
        v25[4] = v13;
        v25[5] = HIDWORD(ULong64FromUser);
        WdLogGlobalForLineNumber = 6806;
      }
      else if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v13 + 395), HIDWORD(ULong64FromUser)) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                 *((ADAPTER_DISPLAY **)v13 + 395),
                                 HIDWORD(ULong64FromUser));
        if ( (unsigned int)(VidPnSourceOwnerType - 2) > 1 )
          v16 = VidPnSourceOwnerType == 0 ? 0xC01E000C : 0;
        else
          v16 = -1071775738;
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
        v16 = -1071775739;
        v26[3] = -1071775739LL;
        v26[4] = v13;
        v26[5] = HIDWORD(ULong64FromUser);
        WdLogGlobalForLineNumber = 6818;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
LABEL_11:
      if ( v34[0] )
        DXGADAPTER::ReleaseReference(v34[0]);
      goto LABEL_13;
    }
    v16 = -1073741811;
    WdLogSingleEntry2(3LL, HIDWORD(ULong64FromUser), -1073741811LL);
    WdLogGlobalForLineNumber = 6798;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
    goto LABEL_37;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
  if ( v34[0] )
    DXGADAPTER::ReleaseReference(v34[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return 3221226166LL;
}
