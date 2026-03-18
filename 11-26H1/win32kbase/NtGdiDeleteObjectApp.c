/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1400C57B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     GreGetObjectOwner @ 0x1400C5980 (GreGetObjectOwner.c)
 *     bDeleteFont @ 0x1400C5ABC (bDeleteFont.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  int v12; // r8d
  __int64 SessionState; // rax
  unsigned int v14; // edi
  int v15; // r8d
  struct _ERESOURCE *v16; // rbx
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  int v19; // r8d
  struct _ERESOURCE *v20; // rbx
  struct _GRETHREAD *v21; // rax
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v23; // [rsp+38h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = ((unsigned int)a1 >> 16) & 0x1F;
  v5 = 0;
  if ( (unsigned int)GreGetObjectOwner(a1, v3) )
  {
    v6 = v3 - 1;
    if ( !v6 )
      return GrepDeleteDC((HDC)a1, 0);
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( !v10 )
            return bDeleteFont(a1, 0LL);
          if ( v10 != 6 )
            return 0LL;
          return bDeleteBrush(a1, 0, 0);
        }
        else
        {
          SessionState = W32GetSessionState(v4);
          SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v23, *(struct _ERESOURCE ***)(SessionState + 88));
          EPALOBJ::EPALOBJ((EPALOBJ *)&v22, (HPALETTE)a1);
          if ( !v22 || (*(_DWORD *)(v22 + 24) & 0x1000000) != 0 )
          {
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v22);
            v20 = (struct _ERESOURCE *)v23;
            if ( v23 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v23, v19);
              v21 = GreGetCurrentThreadCrossSessionCheck();
              if ( v21 )
              {
                v18 = (*((_BYTE *)v21 + 21))-- == 1;
                if ( v18 )
                  *(_QWORD *)v21 &= ~0x2000uLL;
              }
              GreReleaseSemaphoreSharedInternal(v20);
            }
            return 0LL;
          }
          v14 = XEPALOBJ::bDeletePalette((XEPALOBJ *)&v22, 0);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v22);
          v16 = (struct _ERESOURCE *)v23;
          if ( v23 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v23, v15);
            v17 = GreGetCurrentThreadCrossSessionCheck();
            if ( v17 )
            {
              v18 = (*((_BYTE *)v17 + 21))-- == 1;
              if ( v18 )
                *(_QWORD *)v17 &= ~0x2000uLL;
            }
            GreReleaseSemaphoreSharedInternal(v16);
          }
          return v14;
        }
      }
      else
      {
        v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v4) + 88);
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v22, v11);
        LODWORD(v11) = bDeleteSurface(v11, (HSURF)a1);
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v22,
          v12);
        return (unsigned int)v11;
      }
    }
    else
    {
      return bDeleteRegion((HRGN)a1);
    }
  }
  else
  {
    LOBYTE(v5) = a1 != 0LL;
    return v5;
  }
}
