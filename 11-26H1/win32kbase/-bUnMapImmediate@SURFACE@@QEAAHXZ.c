/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x14002FF8C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x14002FF60 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400241E0 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024A94 (--$GreReleaseSemaphoreCommon@$0CE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x140024DE0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x140024E08 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400300B0 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this)
{
  __int64 v2; // rcx
  struct _ERESOURCE *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  void *v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v11; // eax

  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && _bittest16((const signed __int16 *)(v2 + 102), 0xBu) )
  {
    v3 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
    GreAcquireSemaphoreInternal(v3);
    GrepAcquireLockValidate<36>();
    if ( *((_QWORD *)this + 33) )
    {
      v4 = (_QWORD *)((char *)this + 528);
      v5 = *((_QWORD *)this + 66);
      if ( *(SURFACE **)(v5 + 8) != (SURFACE *)((char *)this + 528)
        || (v6 = (_QWORD *)*((_QWORD *)this + 67), (_QWORD *)*v6 != v4) )
      {
        __fastfail(3u);
      }
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)this + 67) = (char *)this + 528;
      *v4 = v4;
      v7 = (void *)*((_QWORD *)this + 9);
      if ( v7 )
      {
        v11 = (unsigned int)GrepW32PidFromW32Process(*((PEPROCESS **)this + 33));
        Gre::MapViewOfSectionObj::Unmap(v11, v7);
      }
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 272));
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    if ( v3 )
      GreReleaseSemaphoreCommon<36,void (*)(HSEMAPHORE__ *)>(v8, v3, v9);
  }
  return 1LL;
}
