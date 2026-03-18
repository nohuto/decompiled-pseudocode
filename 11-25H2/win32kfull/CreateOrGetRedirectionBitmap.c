/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x14005D1D0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsWindowContentProtected @ 0x14001D640 (IsWindowContentProtected.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     GreReferenceObject @ 0x14005CDA4 (GreReferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x14005D9DC (GreSetBitmapContentOwner.c)
 *     GreSetRedirection @ 0x14005DB50 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x14007BF50 (GreDereferenceObject.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x14008E604 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140091F30 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400920B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     GreGetDxSharedSurface @ 0x14009D7B0 (GreGetDxSharedSurface.c)
 *     DesktopFromDesktopWindow @ 0x140110D8C (DesktopFromDesktopWindow.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x14021AD7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z @ 0x140287458 (-GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(struct tagWND *a1, int a2, int a3, HSURF *a4)
{
  int v4; // edi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r14d
  _DWORD *v9; // rdx
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  HSURF v16; // rbx
  __int64 v17; // r15
  struct tagWND *TopLevelWindow; // r14
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  HWND v30; // r13
  int v31; // r12d
  BOOL v32; // r15d
  int v33; // ebx
  Gre::Base *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 i; // rbx
  int v38; // eax
  __int64 v39; // rax
  struct _METASPRITE *MetaSprite; // rax
  struct Gre::Base::SESSION_GLOBALS *v41; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v43; // [rsp+48h] [rbp-C0h] BYREF
  char v44[8]; // [rsp+50h] [rbp-B8h] BYREF
  char v45; // [rsp+58h] [rbp-B0h] BYREF
  char v46[8]; // [rsp+60h] [rbp-A8h] BYREF
  char v47[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v49[32]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h]
  _BYTE v51[176]; // [rsp+A8h] [rbp-60h] BYREF
  int v52; // [rsp+168h] [rbp+60h] BYREF
  int v53; // [rsp+170h] [rbp+68h]
  HSURF *v54; // [rsp+180h] [rbp+78h]

  v54 = a4;
  v53 = a2;
  v4 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v52 = 0;
  v43 = 0LL;
  if ( (*(_BYTE *)(v6 + 26) & 0x20) == 0 )
  {
    v7 = *((_DWORD *)a1 + 95);
    v8 = 0x4000000;
    if ( (v7 & 0x20000) == 0 )
    {
      if ( !a3 )
        goto LABEL_4;
      *((_DWORD *)a1 + 95) = v7 | 0x20000;
    }
    v8 = 201326592;
LABEL_4:
    if ( (*(_BYTE *)(v6 + 26) & 8) == 0 )
      goto LABEL_5;
    LOBYTE(v27) = IsDesktopWindow((__int64)a1);
    if ( v27 )
      goto LABEL_5;
    v30 = *(HWND *)a1;
    LOBYTE(v31) = 0;
    v32 = 0;
    v33 = 1;
    v34 = *(Gre::Base **)(W32GetUserSessionState(v29, v28) + 56968);
    v42 = *((_QWORD *)v34 + 6);
    v41 = Gre::Base::Globals(v34);
    if ( (unsigned int)IsDwmActive(v35) )
    {
      ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(v46, v41, v42, 0LL);
      if ( (unsigned int)IsDwmActive(v36) )
      {
        v33 = 0;
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v49, v30, 0LL);
        if ( v50 )
        {
          v31 = *(_DWORD *)(v50 + 72);
          v32 = 1;
        }
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v49);
      }
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v48);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v47);
      if ( !v33 )
      {
LABEL_43:
        if ( !v32 || (v31 & 1) == 0 )
        {
LABEL_6:
          v9 = (_DWORD *)*((_QWORD *)a1 + 5);
          v10 = 1;
          v11 = 1;
          if ( v9[24] - v9[22] > 1 )
            v10 = v9[24] - v9[22];
          v12 = (unsigned int)(v9[25] - v9[23]);
          if ( (int)v12 > 1 )
            v11 = v9[25] - v9[23];
          if ( v53 || (LOBYTE(v38) = IsDesktopWindow((__int64)a1), !v38) )
          {
            LOWORD(v52) = 96;
            if ( PtiCurrent(v12, (__int64)v9) )
            {
              if ( *((_QWORD *)PtiCurrent(v14, v13) + 62) )
              {
                v14 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v14, v13) + 62) + 8LL);
                if ( (*(_DWORD *)(v14 + 64) & 1) != 0 )
                {
                  v14 = *((_QWORD *)a1 + 5);
                  if ( (*(_DWORD *)(v14 + 288) & 0x4000000F) == 0x40000000 )
                  {
                    v14 = *(unsigned __int16 *)(v14 + 284);
                    if ( (_WORD)v14 != 96 )
                      LOWORD(v52) = GreGetScaledLogPixels();
                  }
                }
              }
            }
            if ( (v8 & 0x1000000) == 0 )
            {
              LODWORD(v41) = 0;
              if ( (*((_DWORD *)a1 + 95) & 0x20000) == 0
                || (int)GreGetDxSharedSurface(
                          *(_QWORD *)a1,
                          (unsigned int)&v45,
                          (unsigned int)&v43,
                          (unsigned int)&v42,
                          (__int64)&v41,
                          (__int64)v44) < 0 )
              {
                GetDisplayAdapterLuidForMonitor(a1, &v43);
              }
            }
            UserSessionState = W32GetUserSessionState(v14, v13);
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v51, *(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
            v16 = (HSURF)GrepCreateCompatibleBitmap(
                           (struct OPTAPIDCOBJ *)v51,
                           v10,
                           v11,
                           v8,
                           &v43,
                           (unsigned __int16 *)&v52);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v51);
            v52 = 1;
          }
          else
          {
            v16 = *(HSURF *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 40LL) + 120LL);
          }
          if ( !v16 )
          {
            v4 = -2143354872;
            goto LABEL_26;
          }
          v17 = *((_QWORD *)a1 + 2);
          TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
          if ( !(unsigned int)IsWindowContentProtected((__int64)a1, v19) )
          {
            if ( TopLevelWindow )
            {
              if ( a1 != TopLevelWindow )
              {
                if ( (unsigned int)IsWindowContentProtected((__int64)TopLevelWindow, v20) )
                {
                  v20 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
                  if ( *(_QWORD *)(*((_QWORD *)TopLevelWindow + 2) + 464LL) != v20 )
                  {
                    GreDeleteObject(v16);
                    v16 = 0LL;
                    v4 = -1073741790;
LABEL_26:
                    *v54 = v16;
                    return (unsigned int)v4;
                  }
                }
              }
            }
          }
          if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29D )
          {
            v39 = DesktopFromDesktopWindow(a1);
            if ( v39 )
              v21 = **(_QWORD **)(v39 + 8);
          }
          else
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v17 + 496) + 8LL);
          }
          v22 = W32GetUserSessionState(v21, v20);
          GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v22 + 56968) + 48LL));
          if ( !v52 || (v4 = GreReferenceObject(v16), v4 >= 0) )
          {
            if ( (unsigned int)GreMarkUndeletableBitmap(v16) )
            {
              if ( !(unsigned int)GreSetRedirection(v16) || !(unsigned int)GreSetBitmapContentOwner(v16) )
              {
                GreMarkDeletableBitmap(v16);
                v4 = -2143354871;
              }
              if ( v4 >= 0 )
                goto LABEL_24;
            }
            else
            {
              v4 = -2143354871;
            }
            GreDereferenceObject(v16);
          }
LABEL_24:
          v25 = W32GetUserSessionState(v24, v23);
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v25 + 56968) + 48LL));
          if ( v4 < 0 )
          {
            GreDeleteObject(v16);
            v16 = 0LL;
          }
          goto LABEL_26;
        }
LABEL_5:
        v8 |= 0x1000000u;
        goto LABEL_6;
      }
    }
    i = 0LL;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v41, (struct PDEVOBJ *)&v42);
    if ( *(_DWORD *)(v42 + 140) )
    {
      MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)(v42 + 80), v30, 0LL, 0);
      if ( !MetaSprite )
      {
LABEL_42:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v41);
        v32 = i != 0;
        goto LABEL_43;
      }
      i = *((_QWORD *)MetaSprite + 3);
    }
    else if ( v30 )
    {
      for ( i = *(_QWORD *)(v42 + 88);
            i && (*(HWND *)(i + 72) != v30 || (*(_DWORD *)i & 0x400) != 0);
            i = *(_QWORD *)(i + 24) )
      {
        ;
      }
    }
    if ( i )
      v31 = *(_DWORD *)(i + 224);
    goto LABEL_42;
  }
  *a4 = 0LL;
  return 0LL;
}
