/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x140289F18
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14009D340 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreHintSpriteShape @ 0x1400A5AB4 (GreHintSpriteShape.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x140336D94 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rbp
  struct SfmState *v7; // rax
  struct SfmState **v8; // rdx
  struct W32_PUSH_LOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = Gre::Base::Globals(this);
  INC_SHARE_REF_CNT(v6, this);
  v9 = (struct SfmState *)((char *)a3 + 40);
  if ( a3 != (struct SfmState *)-40LL )
    GreAcquirePushLockExclusive((struct SfmState *)((char *)a3 + 40));
  v7 = (SFMLOGICALSURFACE *)((char *)this + 32);
  if ( *(struct SfmState **)v7 == v7 )
  {
    v8 = (struct SfmState **)*((_QWORD *)a3 + 7);
    if ( *v8 != (struct SfmState *)((char *)a3 + 48) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)a3 + 48;
    *((_QWORD *)this + 5) = v8;
    *v8 = v7;
    *((_QWORD *)a3 + 7) = v7;
    ++*((_DWORD *)a3 + 16);
    Gre::PUSHLOCKEX::vUnlock(&v9, 0);
    *((_DWORD *)this + 61) |= 0x18u;
    if ( *((_QWORD *)this + 3) )
      *((_DWORD *)this + 61) = (((int)SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 1) >= 0) << 7) | *((_DWORD *)this + 61) & 0xFFFFFF7F;
    else
      *((_DWORD *)this + 61) &= ~0x80u;
  }
  else
  {
    DEC_SHARE_REF_CNT(v6, this);
    if ( a3 != (struct SfmState *)-40LL )
      GreReleasePushLockExclusive((struct SfmState *)((char *)a3 + 40));
  }
}
