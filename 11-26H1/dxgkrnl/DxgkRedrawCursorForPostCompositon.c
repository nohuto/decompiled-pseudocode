/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1401F344C
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1401E6D20 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140046034 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  struct _LUID v5; // rbx
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rdi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // eax
  struct _LUID *v12; // rdx
  int v13; // esi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  unsigned int v15; // eax
  __int64 HighPart; // rdi
  unsigned int v17; // eax
  __int64 v18; // r8
  _BYTE v19[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v20; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v21[2]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v22; // [rsp+80h] [rbp+17h] BYREF

  v2 = a2;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1602;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 395) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1603;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1603LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1604;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->IsCoreResourceSharedOwner()",
      1604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 395);
  v5 = *(struct _LUID *)((char *)this + 412);
  v20 = v5;
  v6 = *(_QWORD *)(v4 + 128) + 4024 * v2;
  if ( !v6 )
    return -1073741811LL;
  if ( *(_BYTE *)(v6 + 766) )
  {
    v22.Flags.Value = 0;
    v22.VidPnSourceId = *(_DWORD *)(v6 + 16);
    v22.X = *(_DWORD *)(v6 + 716);
    v22.Y = *(_DWORD *)(v6 + 720);
    v22.Flags.Value = 1;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 1633;
      v11 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v11,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_18:
      v20 = 0LL;
      memset(v21, 0, sizeof(v21));
      v21[0].VidPnSourceId = 13;
      DXGADAPTER::IsAdapterSessionized(this, v12, 0LL, (unsigned __int64 *)&v20);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
               v21,
               v20,
               v18,
               0LL,
               0LL,
               0LL);
    }
    v19[0] = 0;
    v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v19, 0);
    if ( v13 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v20, *(_DWORD *)(v6 + 16));
      if ( SessionViewFromSource )
      {
        v13 = SetPointerShapeForDisplaySource(
                (struct DISPLAY_SOURCE *)v6,
                &v22,
                0LL,
                SessionViewFromSource,
                0LL,
                0,
                0,
                1,
                0,
                0);
      }
      else
      {
        v15 = PsGetCurrentProcessSessionId();
        HighPart = v20.HighPart;
        v13 = -1073741811;
        WdLogSingleEntry5(2LL, *(unsigned int *)(v6 + 16), v20.HighPart, v5.LowPart, v15, -1073741811LL);
        WdLogGlobalForLineNumber = 1658;
        v17 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, r"
                    "eturning 0x%I64x.",
          *(unsigned int *)(v6 + 16),
          HighPart,
          v5.LowPart,
          v17,
          -1073741811LL);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1645;
    }
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v19);
    if ( v13 < 0 )
      goto LABEL_18;
  }
  return 0LL;
}
