/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402ACD48
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140249884 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GreMarkDeletableFont @ 0x14010FAD4 (GreMarkDeletableFont.c)
 *     CreateFontFromUserProfile @ 0x140123A40 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x14012478C (UserSetAltScaleFont.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x140201670 (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140248CB8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Get96DpiMetrics @ 0x140302300 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x140302624 (GetSessionDpiMetrics.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // esi
  unsigned int v7; // edi
  INT DpiForSystem; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  Gre::Base *FontFromUserProfile; // rax
  struct HLFONT__ *v18; // rbx
  __int64 v19; // rcx
  __int64 SessionDpiMetrics; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  struct HLFONT__ *v24; // rcx
  __int64 v25; // rsi
  struct HLFONT__ *v26; // rcx
  struct HLFONT__ *v27; // rax
  struct HLFONT__ *v28; // [rsp+20h] [rbp-A8h] BYREF
  tagLOGFONTW v29; // [rsp+30h] [rbp-98h] BYREF

  v28 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem();
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904);
  if ( DpiForSystem != *(unsigned __int16 *)(v12 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    a2->lfWidth = EngMulDiv(
                    a2->lfWidth,
                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6998LL),
                    DpiForSystem);
    v16 = W32GetUserSessionState(v15, v14);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(*(_QWORD *)(v16 + 19904) + 6998LL), DpiForSystem);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, a2, 0x9Au);
  v18 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromUserProfile, (__int64 *)&v28) )
    {
      GreMarkDeletableFont(v18);
      GreDeleteObject(v18);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset_0(&v29, 0, sizeof(v29));
        if ( (unsigned int)GreExtGetObjectW(v18, 92, &v29) )
          v7 = SetWindowMetricFont(a1, 0x9Au, &v29);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics(v19);
      v22 = Get96DpiMetrics();
      v24 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v25 = v22;
      if ( v24 )
      {
        GreMarkDeletableFont(v24);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v26 = *(struct HLFONT__ **)(v25 + 64);
      if ( v26 )
      {
        GreMarkDeletableFont(v26);
        GreDeleteObject(*(_QWORD *)(v25 + 64));
      }
      v27 = v28;
      *(_QWORD *)(SessionDpiMetrics + 64) = v18;
      *(_QWORD *)(v25 + 64) = v27;
      InvalidateKMDpiMetricsCacheDPIMETRICS((__int64)v26, v23);
    }
    else
    {
      GreMarkDeletableFont(v18);
      GreDeleteObject(v18);
      GreMarkDeletableFont(v28);
      GreDeleteObject(v28);
    }
  }
  return v7;
}
