/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x140097F10
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14009B990 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400979BC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x140097B54 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140098148 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 */

__int64 __fastcall GreAddBitmapD3DDirtyRgn(Gre::Base *a1, unsigned int a2, struct tagRECT *a3)
{
  unsigned int v3; // r15d
  int v5; // r13d
  __int64 result; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // r12
  Gre::Base *v9; // rcx
  Gre::Base *v10; // rcx
  __int64 v11; // rdi
  struct Gre::Base::SESSION_GLOBALS *v12; // rsi
  struct W32_PUSH_LOCK *v13; // rbx
  _QWORD *v14; // rax
  Gre::Base *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  struct DWMSPRITE *v18; // rdi
  struct W32_PUSH_LOCK *v19; // rsi
  __int64 v20; // r14
  struct DWMSPRITE *v21; // rbx
  UINT_PTR v22; // rax
  struct tagRECT *v23; // rdi
  __int64 v24; // r15
  _QWORD Buffer[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v28 = 0;
  v5 = 0;
  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    v8 = *(_QWORD *)Gre::Base::Globals(v7);
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(v8 + 520));
    GrepAcquireLockValidate<7>();
    if ( IsDwmActive(v9) )
    {
      Buffer[1] = 0LL;
      v11 = 0LL;
      Buffer[0] = a1;
      v12 = Gre::Base::Globals(v10);
      v13 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v12 + 17) + 72LL);
      if ( *((_QWORD *)v12 + 17) != -72LL )
        GreAcquirePushLockExclusive(v13);
      v14 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v12 + 17), Buffer);
      if ( v14 )
        v11 = v14[1];
      if ( v13 )
        GreReleasePushLockExclusive(v13);
      Gre::Base::Globals(v15);
      if ( v11 )
      {
        LOBYTE(v16) = 15;
        v17 = HmgShareLockCheck(v11, v16);
        v18 = (struct DWMSPRITE *)v17;
        if ( v17 )
        {
          v19 = (struct W32_PUSH_LOCK *)(v17 + 88);
          if ( v17 != -88 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v17 + 88));
          v20 = *((_QWORD *)v18 + 18);
          if ( v20 != -256 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 256));
          v21 = v18;
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v20) )
          {
            v5 = 1;
            if ( a2 )
            {
              v23 = a3;
              v24 = a2;
              do
              {
                vSpUpdateDirtyRgn(v21, (struct SFMLOGICALSURFACE *)v20, 0LL, v23++, &v28, 0);
                --v24;
              }
              while ( v24 );
              v3 = v28;
            }
          }
          if ( v20 != -256 )
            GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 256));
          if ( v5 )
          {
            v22 = SFMLOGICALSURFACE::uiCookie((SFMLOGICALSURFACE *)v20);
            bSpDwmNotifyDirty(*(HSPRITE *)v21, (struct SFMLOGICALSURFACE *)v20, v3, v22);
          }
          if ( v19 )
            GreReleasePushLockExclusive(v19);
          if ( v21 )
            DEC_SHARE_REF_CNT(v21);
        }
      }
    }
    return GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8 + 520);
  }
  return result;
}
