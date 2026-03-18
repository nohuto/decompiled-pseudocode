/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x14021B380 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     CreateFontFromUserProfile @ 0x1400C04C8 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1401491DC (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1401492C8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x14026EABC (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  struct HLFONT__ *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // r9
  __int64 SessionDpiMetrics; // rbp
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct HLFONT__ *v32; // rcx
  __int64 v33; // rsi
  struct HLFONT__ *v34; // rcx
  struct HLFONT__ *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  struct HLFONT__ *v39; // [rsp+20h] [rbp-A8h] BYREF
  tagLOGFONTW v40; // [rsp+30h] [rbp-98h] BYREF

  v39 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem();
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
  if ( DpiForSystem != *(unsigned __int16 *)(v12 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    a2->lfWidth = EngMulDiv(
                    a2->lfWidth,
                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL),
                    DpiForSystem);
    v16 = W32GetUserSessionState(v15, v14);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(*(_QWORD *)(v16 + 19872) + 6998LL), DpiForSystem);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, (__int128 *)&a2->lfHeight, 0x9Au);
  v20 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromUserProfile, (__int64 *)&v39, v18, v19) )
    {
      GreMarkDeletableFont(v20, v21, v23, v24);
      GreDeleteObject(v20);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset_0(&v40, 0, sizeof(v40));
        if ( (unsigned int)GreExtGetObjectW(v20, 92LL, &v40, v26) )
          v7 = SetWindowMetricFont(a1, 0x9Au, &v40);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics(v22);
      v28 = Get96DpiMetrics();
      v32 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v33 = v28;
      if ( v32 )
      {
        GreMarkDeletableFont(v32, v29, v30, v31);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v34 = *(struct HLFONT__ **)(v33 + 64);
      if ( v34 )
      {
        GreMarkDeletableFont(v34, v29, v30, v31);
        GreDeleteObject(*(_QWORD *)(v33 + 64));
      }
      v35 = v39;
      *(_QWORD *)(SessionDpiMetrics + 64) = v20;
      *(_QWORD *)(v33 + 64) = v35;
      InvalidateKMDpiMetricsCacheDPIMETRICS((__int64)v34, v29);
    }
    else
    {
      GreMarkDeletableFont(v20, v21, v23, v24);
      GreDeleteObject(v20);
      GreMarkDeletableFont(v39, v36, v37, v38);
      GreDeleteObject(v39);
    }
  }
  return v7;
}
