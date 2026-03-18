/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1400AA054 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x1400AA714 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x1400AA7C4 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  Gre::Base *v13; // rcx
  _QWORD *v14; // rax
  HSEMAPHORE v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 && *((_BYTE *)this + 177) )
  {
    v5 = *(_QWORD *)(v4 + 48);
    if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
    {
      *(_DWORD *)(v4 + 36) &= ~0x4000u;
      DC::pSurface(*((DC **)this + 10), *(struct SURFACE **)(v5 + 2544), a3);
    }
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
    {
      if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
      {
        v7 = (_QWORD *)*((_QWORD *)this + 23);
        if ( !v7 || !*((_BYTE *)this + 281) || !*((_BYTE *)this + 177) || *v7 != *(_QWORD *)v6 )
        {
          v8 = *(_DWORD *)(v6 + 36);
          if ( (v8 & 0x200) != 0 )
          {
            if ( (v8 & 0x4000) == 0 )
            {
              CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v6);
              v10 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
              v11 = v10 + 8;
              v12 = -v10;
              if ( (v11 & -(__int64)(v12 != 0)) != 0 )
                *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x150) &= ~1u;
            }
            v13 = (Gre::Base *)*((_QWORD *)this + 10);
            if ( v13 && *((_BYTE *)this + 177) && !*((_QWORD *)this + 37)
              || (v14 = (_QWORD *)*((_QWORD *)this + 23)) != 0LL
              && *((_BYTE *)this + 281)
              && *(_QWORD *)v13 == *v14
              && !*((_QWORD *)this + 40) )
            {
              v15 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v13) + 728LL);
              GreAcquireSemaphoreSharedInternal(v15);
              GrepAcquireLockValidate<3>();
              DC::vClearRendering(*((DC **)this + 10));
              EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v15);
              GrepReleaseLockValidate<3>(v17, v16);
              GreReleaseSemaphoreSharedInternal(v15);
            }
          }
        }
      }
    }
    DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 80));
    *((_QWORD *)this + 10) = 0LL;
  }
  return 1LL;
}
