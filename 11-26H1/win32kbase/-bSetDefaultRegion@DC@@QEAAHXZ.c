/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140038360 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ @ 0x140017EF0 (-AcquireLockExclusive@GreInnermostPushLock@@QEAAXXZ.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140038E94 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x14010F950 (-vStamp@REGION@@AEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140133E68 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rax
  LONG left; // eax
  char *v10; // rcx
  char *v11; // rax
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  int *v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+2Ch] [rbp-24h]
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v23; // [rsp+38h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  DC::vReleaseRao(this, (struct Gre::Base::SESSION_GLOBALS *)v2);
  v3 = DC::bDpiScaledSurface(this);
  if ( v3 )
    v4 = *(_QWORD *)((char *)this + 532);
  else
    v4 = *((_QWORD *)this + 64);
  v5 = (_DWORD *)*((_QWORD *)this + 6);
  v19 = v4;
  v6 = HIDWORD(*(_QWORD *)((char *)this + (v3 != 0 ? 0x14 : 0) + 512));
  v7 = *((_QWORD *)this + 62) == 0LL;
  *(_QWORD *)&v23.left = 0LL;
  v23.right = v4;
  v23.bottom = v6;
  if ( !v7 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v22);
    if ( (v5[10] & 0x8000) != 0 )
    {
      v15 = *((_QWORD *)this + 62);
      v16 = *(_DWORD *)(v15 + 56);
      v17 = (int *)(v15 + 60);
      if ( v16 < (int)v4 || *v17 < SHIDWORD(v19) )
      {
        v18 = *v17;
        v20 = v16;
        v19 = 0LL;
        v21 = v18;
        ERECTL::operator*=(&v23, &v19);
      }
    }
    if ( (v5[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v23.left += v5[644];
      v23.right += v5[644];
      v23.top += v5[645];
      v23.bottom += v5[645];
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v22);
  }
  GreInnermostPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  v8 = *((_QWORD *)this + 142);
  if ( !v8 || v8 == *(_QWORD *)(v2 + 4264) )
  {
    v19 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0x70u);
    v14 = v19;
    if ( !v19 )
    {
      *((_QWORD *)this + 142) = *(_QWORD *)(v2 + 4264);
      GreInnermostPushLock::ReleaseLock((DC *)((char *)this + 1112));
      return 0LL;
    }
    RGNOBJ::vSet((RGNOBJ *)&v19, &v23);
    *((_QWORD *)this + 142) = v14;
  }
  else
  {
    v22 = *((_QWORD *)this + 142);
    RGNOBJ::vSet((RGNOBJ *)&v22, &v23);
  }
  REGION::vStamp(*((REGION **)this + 142));
  GreInnermostPushLock::ReleaseLock((DC *)((char *)this + 1112));
  left = v23.left;
  v10 = (char *)this + 1016;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_DWORD *)this + 260) = v4;
  *((_DWORD *)this + 261) = v6;
  *((_DWORD *)this + 250) = left;
  *((_DWORD *)this + 251) = v23.top;
  *((_DWORD *)this + 252) = v23.right;
  *((_DWORD *)this + 253) = v23.bottom;
  v11 = (char *)this + 1024;
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
    v11 = (char *)this + 1016;
  v12 = *((_DWORD *)v11 + 1);
  if ( (*((_DWORD *)this + 10) & 1) != 0 )
    v10 = (char *)this + 1024;
  result = 1LL;
  *((_DWORD *)this + 298) = *(_DWORD *)v10;
  *((_DWORD *)this + 299) = v12;
  return result;
}
