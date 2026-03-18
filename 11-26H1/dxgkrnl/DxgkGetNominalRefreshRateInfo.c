/*
 * XREFs of DxgkGetNominalRefreshRateInfo @ 0x1401CFB9C
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403C420C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetNominalRefreshRateInfo(unsigned int a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // rax
  int v11; // eax
  struct DXGADAPTER *v12[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v13[32]; // [rsp+60h] [rbp-20h] BYREF
  char v14; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a2;
  v12[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v12, a1);
  v6 = v12[0];
  if ( !v12[0] )
  {
    v7 = a1;
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)v7, -1073741811LL);
    WdLogGlobalForLineNumber = 7771;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v12, 0LL);
    return (unsigned int)v8;
  }
  v10 = *((_QWORD *)v12[0] + 395);
  if ( !v10 )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry2(2LL, v12[0], -1073741811LL);
    WdLogGlobalForLineNumber = 7780;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
      (__int64)v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_3;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v10 + 96) )
  {
    LODWORD(v8) = -1073741811;
    WdLogSingleEntry3(2LL, v12[0], v3, -1073741811LL);
    WdLogGlobalForLineNumber = 7792;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo f"
                "unction, returning 0x%I64x.",
      (__int64)v6,
      v3,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_3;
  }
  v14 = 0;
  v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v14, 0);
  v8 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7805;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v14);
    goto LABEL_3;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13, v6, 1);
  if ( *((_DWORD *)v6 + 50) != 1 || *((_BYTE *)v6 + 3057) )
  {
    WdLogSingleEntry2(3LL, v6, -1073741130LL);
    WdLogGlobalForLineNumber = 7817;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v14);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v12, 0LL);
    return 3221226166LL;
  }
  else
  {
    if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v6 + 395), v3) )
    {
      WdLogSingleEntry2(3LL, v3, v6);
      WdLogGlobalForLineNumber = 7825;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v14);
      LODWORD(v8) = -1071774919;
      goto LABEL_3;
    }
    *a3 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v6 + 395), v3) + 2);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v14);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v12, 0LL);
    return 0LL;
  }
}
