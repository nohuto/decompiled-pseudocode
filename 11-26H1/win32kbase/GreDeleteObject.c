/*
 * XREFs of GreDeleteObject @ 0x140082330
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x140080BF8 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140080C68 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     DeleteMaybeSpecialRgn @ 0x140082160 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x140152810 (UserValidateCopyRgn.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  __int64 v5; // rcx
  __int64 SessionState; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int (*v10)(void); // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // r8d
  struct _ERESOURCE *v14; // rbx
  struct _GRETHREAD *v15; // rax
  bool v16; // zf
  int v17; // r8d
  struct _ERESOURCE *v18; // rbx
  struct _GRETHREAD *v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v21; // [rsp+38h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion((HRGN)a1);
  v5 = v3 - 1;
  if ( !(_DWORD)v5 )
  {
    SessionState = W32GetSessionState(v5);
    return bDeleteSurface(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), (HSURF)a1);
  }
  v7 = (unsigned int)(v5 - 3);
  if ( !(_DWORD)v7 )
  {
    v11 = W32GetSessionState(v7);
    SEMOBJ<13>::SEMOBJ<13>(&v21, *(_QWORD *)(v11 + 88));
    EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)a1);
    if ( v20 && (*(_DWORD *)(v20 + 24) & 0x1000000) == 0 )
    {
      v12 = XEPALOBJ::bDeletePalette(&v20, 0LL);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
      v14 = (struct _ERESOURCE *)v21;
      if ( v21 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v21, v13);
        v15 = GreGetCurrentThreadCrossSessionCheck();
        if ( v15 )
        {
          v16 = (*((_BYTE *)v15 + 21))-- == 1;
          if ( v16 )
            *(_QWORD *)v15 &= ~0x2000uLL;
        }
        GreReleaseSemaphoreSharedInternal(v14);
      }
      return v12;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v20);
    v18 = (struct _ERESOURCE *)v21;
    if ( v21 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v21, v17);
      v19 = GreGetCurrentThreadCrossSessionCheck();
      if ( v19 )
      {
        v16 = (*((_BYTE *)v19 + 21))-- == 1;
        if ( v16 )
          *(_QWORD *)v19 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v18);
    }
    return 0LL;
  }
  v8 = (unsigned int)(v7 - 2);
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 6 )
      return bDeleteBrush(a1, 0, 0);
    return 0LL;
  }
  v9 = 0;
  v10 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 24) + 584LL);
  if ( v10 )
  {
    if ( v10() >= 0 )
      return (unsigned int)bDeleteFont(a1, 0LL);
  }
  return v9;
}
