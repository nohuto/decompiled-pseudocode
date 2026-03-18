/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1400AA054 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x1400AA714 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD v17[4]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-18h]
  HSEMAPHORE v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 23);
  if ( v4 && *((_BYTE *)this + 281) )
  {
    v5 = *(_QWORD *)(v4 + 48);
    if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
    {
      *(_DWORD *)(v4 + 36) &= ~0x4000u;
      DC::pSurface(*((DC **)this + 23), *(struct SURFACE **)(v5 + 2544), a3);
    }
    v6 = *((_QWORD *)this + 36);
    if ( v6 )
    {
      v16 = *(_QWORD *)(v6 + 72);
      v17[1] = 0LL;
      v17[3] = 0LL;
      v17[0] = 0LL;
      v17[2] = v16;
      v18 = 1;
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v17);
    }
    v7 = *((_QWORD *)this + 23);
    if ( v7 )
    {
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0
        && (!*((_BYTE *)this + 281)
         || (v15 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL
         || !*((_BYTE *)this + 177)
         || *(_QWORD *)v7 != *v15) )
      {
        v8 = *(_DWORD *)(v7 + 36);
        if ( (v8 & 0x200) != 0 )
        {
          if ( (v8 & 0x4000) == 0 )
          {
            CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v7);
            v10 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
            v11 = v10 + 8;
            v12 = -v10;
            if ( (v11 & -(__int64)(v12 != 0)) != 0 )
              *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x150) &= ~1u;
          }
          v13 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v13 && *((_BYTE *)this + 177) && **((_QWORD **)this + 23) == *v13 && !*((_QWORD *)this + 37)
            || *((_QWORD *)this + 23) && *((_BYTE *)this + 281) && !*((_QWORD *)this + 40) )
          {
            SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v19);
            DC::vClearRendering(*((DC **)this + 23));
            EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v19);
            GrepReleaseLockValidate<3>();
            GreReleaseSemaphoreSharedInternal(v19);
          }
        }
      }
    }
    DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 184));
    *((_QWORD *)this + 23) = 0LL;
  }
  return 1LL;
}
