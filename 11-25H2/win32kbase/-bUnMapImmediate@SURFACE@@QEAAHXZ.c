/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x140082A0C
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1400829E0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140046704 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x140082B14 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x140083A3C (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x140083AD0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140083AF8 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x140083B68 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140085008 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this)
{
  __int64 v2; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  void *v7; // rdi
  unsigned int v8; // eax
  struct _ERESOURCE *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && _bittest16((const signed __int16 *)(v2 + 102), 0xBu) )
  {
    v9 = (struct _ERESOURCE *)(**(_QWORD **)(W32GetSessionState(v2) + 88) + 936LL);
    GreAcquireSemaphoreInternal(v9);
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
        v8 = GrepW32PidFromW32Process(*((struct _W32PROCESS **)this + 33));
        Gre::MapViewOfSectionObj::Unmap(v8, v7);
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
    SEMOBJ<36>::vUnlock(&v9);
  }
  return 1LL;
}
