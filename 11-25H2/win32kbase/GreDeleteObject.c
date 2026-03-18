/*
 * XREFs of GreDeleteObject @ 0x14008B860
 * Callers:
 *     UserValidateCopyRgn @ 0x14006EC40 (UserValidateCopyRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     DeleteMaybeSpecialRgn @ 0x14008A8D0 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1401370F4 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140137318 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteRegion @ 0x1400146C0 (bDeleteRegion.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14001C960 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     bDeleteFont @ 0x140089B5C (bDeleteFont.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EBB0C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v5; // ecx
  __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // edi
  int (*v9)(void); // rax
  __int64 SessionState; // rax
  unsigned int v11; // esi
  struct _ERESOURCE *v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  struct _ERESOURCE *v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _BASEOBJECT *v17; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v18; // [rsp+38h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion((HRGN)a1);
  v5 = v3 - 1;
  if ( !v5 )
    return bDeleteSurface(a1);
  v6 = v5 - 3;
  if ( (_DWORD)v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      v8 = 0;
      v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 584LL);
      if ( v9 )
      {
        if ( v9() >= 0 )
          return (unsigned int)bDeleteFont((__int64)a1, 0);
      }
      return v8;
    }
    if ( v7 == 6 )
      return bDeleteBrush(a1, 0, 0);
    return 0LL;
  }
  SessionState = W32GetSessionState(v6);
  SEMOBJ<13>::SEMOBJ<13>(&v18, *(_QWORD *)(SessionState + 88));
  EPALOBJ::EPALOBJ((EPALOBJ *)&v17, (HPALETTE)a1);
  if ( !v17 || (*((_DWORD *)v17 + 6) & 0x1000000) != 0 )
  {
    EPALOBJ::~EPALOBJ(&v17);
    v15 = (struct _ERESOURCE *)v18;
    if ( v18 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v18);
      v16 = GreGetCurrentThreadCrossSessionCheck();
      if ( v16 )
      {
        v14 = (*((_BYTE *)v16 + 21))-- == 1;
        if ( v14 )
          *(_QWORD *)v16 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v15);
    }
    return 0LL;
  }
  v11 = XEPALOBJ::bDeletePalette(&v17, 0LL);
  EPALOBJ::~EPALOBJ(&v17);
  v12 = (struct _ERESOURCE *)v18;
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v18);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 21))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  return v11;
}
