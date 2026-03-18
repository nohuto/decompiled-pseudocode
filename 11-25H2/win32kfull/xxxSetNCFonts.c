/*
 * XREFs of xxxSetNCFonts @ 0x140149590
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x14003FC08 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     UserSetFont @ 0x1400C044C (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1400C062C (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     UserSetAltScaleFont @ 0x1401491DC (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1401492C8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HDC v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 SessionDpiMetrics; // r14
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  Gre::Base **v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rbx
  int CharDimensions; // eax
  LONG lfWeight; // ecx
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  struct HLFONT__ *v35; // rcx
  int v36; // eax
  __int64 v37; // r9
  struct HLFONT__ *v38; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rcx
  HFONT *DPIMetrics; // rax
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  HFONT v57; // [rsp+20h] [rbp-E0h]
  __int64 v58; // [rsp+20h] [rbp-E0h]
  Gre::Base **v59; // [rsp+28h] [rbp-D8h]
  __int64 v60; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  __int128 v62; // [rsp+28h] [rbp-D8h]
  __int128 v63; // [rsp+28h] [rbp-D8h]
  __int64 SessionDpiServerInfo; // [rsp+38h] [rbp-C8h]
  __int128 v65; // [rsp+38h] [rbp-C8h]
  __int128 v66; // [rsp+38h] [rbp-C8h]
  __int128 v67; // [rsp+48h] [rbp-B8h]
  __int128 v68; // [rsp+48h] [rbp-B8h]
  __int128 v69; // [rsp+58h] [rbp-A8h]
  __int128 v70; // [rsp+58h] [rbp-A8h]
  __int128 v71; // [rsp+68h] [rbp-98h]
  __int128 v72; // [rsp+68h] [rbp-98h]
  struct tagLOGFONTW v73; // [rsp+78h] [rbp-88h] BYREF
  __int128 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  __int128 v77; // [rsp+110h] [rbp+10h]
  __int128 v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+30h]
  int v80; // [rsp+138h] [rbp+38h]
  __int16 v81; // [rsp+13Ch] [rbp+3Ch]
  __int128 v82; // [rsp+140h] [rbp+40h] BYREF
  __int128 v83; // [rsp+150h] [rbp+50h]
  __int128 v84; // [rsp+160h] [rbp+60h]
  __int128 v85; // [rsp+170h] [rbp+70h]
  __int128 v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+90h]
  int v88; // [rsp+198h] [rbp+98h]

  memset(&v73, 0, 60);
  memset_0(&v82, 0, 0x5CuLL);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  v7 = *(HDC *)(v6 + 72);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v6);
  v8 = Get96DpiServerInfo();
  SessionDpiMetrics = GetSessionDpiMetrics(v9);
  v11 = Get96DpiMetrics();
  v59 = (Gre::Base **)(SessionDpiServerInfo + 8);
  if ( !(unsigned int)UserSetFont(
                        a1,
                        (a2 + 24) & ((unsigned __int128)-(__int128)a2 >> 64),
                        139LL,
                        (struct HLFONT__ **)(SessionDpiServerInfo + 8))
    || !(unsigned int)UserSetAltScaleFont(*v59, (__int64 *)(v8 + 8), v12, v13) )
  {
    return 0LL;
  }
  v57 = GreSelectFont(v7, (HFONT)*v59);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v7, 0LL, (_DWORD *)(SessionDpiServerInfo + 20));
  GreSelectFont(v7, *(HFONT *)(v8 + 8));
  *(_DWORD *)(v8 + 16) = GetCharDimensions(v7, 0LL, (_DWORD *)(v8 + 20));
  v14 = a2 + 124;
  if ( !a2 )
    v14 = ((unsigned __int128)-(__int128)0LL >> 64) & 0x18;
  v15 = (Gre::Base **)(SessionDpiMetrics + 32);
  v60 = v14;
  if ( !(unsigned int)UserSetFont(a1, v14, 142LL, (struct HLFONT__ **)(SessionDpiMetrics + 32))
    || !(unsigned int)UserSetAltScaleFont(*v15, (__int64 *)(v11 + 32), v16, v17) )
  {
    return 0LL;
  }
  GreSelectFont(v7, (HFONT)*v15);
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensions(v7, 0LL, (_DWORD *)(SessionDpiMetrics + 44));
  GreSelectFont(v7, *(HFONT *)(v11 + 32));
  *(_DWORD *)(v11 + 40) = GetCharDimensions(v7, 0LL, (_DWORD *)(v11 + 44));
  v18 = a2 + 224;
  if ( !a2 )
    v18 = v60;
  v61 = v18;
  if ( !(unsigned int)UserSetFont(a1, v18, 145LL, (struct HLFONT__ **)SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(Gre::Base **)SessionDpiMetrics, (__int64 *)v11, v19, v20) )
  {
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v22, v21);
  if ( *(_QWORD *)(UserSessionState + 66024) )
  {
    DPIMetrics = (HFONT *)GetDPIMetrics();
    GreSelectFont(*(HDC *)(UserSessionState + 66024), *DPIMetrics);
  }
  GreSelectFont(v7, *(HFONT *)SessionDpiMetrics);
  CharDimensions = GetCharDimensions(v7, (__int64)&v73, (_DWORD *)(SessionDpiMetrics + 12));
  lfWeight = v73.lfWeight;
  v26 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = CharDimensions;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v73.lfFaceName[2];
  *(_DWORD *)(SessionDpiMetrics + 20) = lfWeight;
  v27 = ((_WORD)v26 + (_WORD)lfWeight + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v26 + lfWeight + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v73.lfWidth;
  SetDpiDepSysMet(27LL, (unsigned int)(v27 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v27 - 1));
  GreSelectFont(v7, *(HFONT *)v11);
  v28 = GetCharDimensions(v7, (__int64)&v73, (_DWORD *)(v11 + 12));
  v29 = (unsigned int)v73.lfWeight;
  v30 = *(unsigned int *)(v11 + 12);
  *(_DWORD *)(v11 + 8) = v28;
  *(_DWORD *)(v11 + 16) = *(_DWORD *)&v73.lfFaceName[2];
  *(_DWORD *)(v11 + 20) = v29;
  v31 = (((_WORD)v30 + (_WORD)v29 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v11 + 28) = v30 + v29 + 2;
  *(_DWORD *)(v11 + 24) = v73.lfWidth;
  v32 = *(_QWORD *)(W32GetUserSessionState(v29, v30) + 19872);
  *(_DWORD *)(v32 + 2512) = v31;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872) + 2516LL) = v31;
  GreSelectFont(v7, v57);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v11 + 24);
  v35 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v35 && v35 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v35);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)SessionDpiMetrics, 92LL, &v82, v34) )
    return 0LL;
  v36 = v83;
  v74 = v82;
  if ( (int)v83 <= 700 )
    v36 = 700;
  v76 = v84;
  LODWORD(v83) = v36;
  v75 = v83;
  v77 = v85;
  v79 = v87;
  v78 = v86;
  v80 = v88;
  v81 = 257;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW(&v74);
  v38 = *(struct HLFONT__ **)(v11 + 48);
  if ( v38 && v38 != *(struct HLFONT__ **)(v8 + 24) )
  {
    GreMarkDeletableFont(v38);
    GreDeleteObject(*(_QWORD *)(v11 + 48));
    *(_QWORD *)(v11 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)v11, 96LL, &v74, v37) )
    return 0LL;
  v40 = v75;
  if ( (int)v75 <= 700 )
    v40 = 700;
  LODWORD(v75) = v40;
  *(_QWORD *)(v11 + 48) = GreCreateFontIndirectW(&v74);
  v41 = a2 + 316;
  if ( !a2 )
    v41 = v61;
  if ( !(unsigned int)UserSetFont(a1, v41, 156LL, (struct HLFONT__ **)(SessionDpiMetrics + 56))
    || !(unsigned int)UserSetAltScaleFont(*(Gre::Base **)(SessionDpiMetrics + 56), (__int64 *)(v11 + 56), v42, v43) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    v46 = *(_DWORD *)(a2 + 496);
    v62 = *(_OWORD *)(a2 + 408);
    v65 = *(_OWORD *)(a2 + 424);
    v67 = *(_OWORD *)(a2 + 440);
    v69 = *(_OWORD *)(a2 + 456);
    v71 = *(_OWORD *)(a2 + 472);
    v58 = *(_QWORD *)(a2 + 488);
    v48 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19872);
    *(_OWORD *)(v48 + 5004) = v62;
    *(_OWORD *)(v48 + 5020) = v65;
    v49 = v69;
    *(_OWORD *)(v48 + 5036) = v67;
    v50 = v71;
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v73, a1, 0x9Du);
    v46 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v72 = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v70 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v68 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v63 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v66 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v58 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    v48 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19872);
    *(_OWORD *)(v48 + 5004) = v72;
    *(_OWORD *)(v48 + 5020) = v70;
    v49 = v63;
    *(_OWORD *)(v48 + 5036) = v68;
    v50 = v66;
  }
  *(_OWORD *)(v48 + 5052) = v49;
  *(_OWORD *)(v48 + 5068) = v50;
  *(_QWORD *)(v48 + 5084) = v58;
  *(_DWORD *)(v48 + 5092) = v46;
  InvalidateKMDpiMetricsCacheDPIMETRICS(v48, v47);
  UpdateDpiMetricsCacheDPISERVERINFO(v52, v51);
  return 1LL;
}
