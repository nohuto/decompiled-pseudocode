/*
 * XREFs of DxgkCheckOcclusion @ 0x140320AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x14004C1C8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400508D0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x140320E04 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(volatile void *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  int v11; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h]
  char v13; // [rsp+60h] [rbp-48h]
  __int64 ULong64FromUser; // [rsp+68h] [rbp-40h]
  _BYTE v15[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]
  char v17; // [rsp+80h] [rbp-28h]
  struct tagRECT v18; // [rsp+88h] [rbp-20h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2038);
  Current = DXGPROCESS::GetCurrent(v2);
  if ( Current )
  {
    ULong64FromUser = 0LL;
    ULong64FromUser = RtlReadULong64FromUser(a1);
    if ( ULong64FromUser )
    {
      v4 = *((_QWORD *)Current + 11);
      if ( (*(unsigned int (**)(void))(v4 + 224))() )
      {
        v7 = -1071775738;
        v18 = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v15, Current);
        if ( v17 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
          WdLogGlobalForLineNumber = 1919;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 88) + 32LL))(1LL);
        v17 = 1;
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v4 + 376))(ULong64FromUser, &v18) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal();
          v7 = DXGGLOBAL::IsWindowVisible(Global, &v18) == 0 ? 0xC01E0006 : 0;
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 371;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
            371LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v15);
      }
      else
      {
        v7 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = -1071775738LL;
        WdLogGlobalForLineNumber = 346;
      }
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 333;
    }
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 304;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
  return v7;
}
