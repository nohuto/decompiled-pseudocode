/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1400AA054 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x1400AA714 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140159BC0 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1401AAE74 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v9; // rdx
  DCOBJ *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  DC *v14; // rcx
  DC *v15; // rdx
  DC *v16; // rbp
  _DWORD *v17; // r14
  int *v18; // rsi
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  HSEMAPHORE v31; // [rsp+68h] [rbp+10h] BYREF

  v7 = 1;
  if ( !a2 )
    goto LABEL_2;
  v9 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v9 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 184);
  LOBYTE(a3) = 1;
  v11 = HmgLock(*((_QWORD *)this + 25), *(_QWORD *)v9, a3, 0LL);
  *(_QWORD *)v10 = v11;
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v11 + 12));
      *(_QWORD *)v10 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *(_QWORD *)v10 )
  {
    v13 = DCOBJ::SaveAttributes(v10);
    v14 = *(DC **)v10;
    if ( v13 )
    {
      if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v14);
    }
    else
    {
      _InterlockedDecrement16((volatile signed __int16 *)v14 + 6);
      *(_QWORD *)v10 = 0LL;
    }
  }
  v15 = *(DC **)v10;
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 97) )
  {
LABEL_30:
    v7 = 0;
LABEL_2:
    *((_QWORD *)this + 23) = 0LL;
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4001) == 1 && *((_QWORD *)this + 36) && !*((_QWORD *)this + 40) )
  {
    *((_DWORD *)v15 + 9) |= 0x4000u;
    DC::pSurface(*(DC **)v10, *((struct SURFACE **)this + 36), v12);
    *((_DWORD *)this + 18) |= 0x20u;
  }
  v16 = *(DC **)v10;
  if ( !*(_QWORD *)v10 )
    return v7;
  if ( !*((_BYTE *)v10 + 97) )
    return v7;
  v17 = (_DWORD *)((char *)this + 72);
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    return v7;
  v18 = (int *)((char *)this + 72);
  v19 = *((_QWORD *)v16 + 62);
  if ( *((_QWORD *)this + 43) )
  {
    GrepCaptureLiveMemoryDump(400LL, 57LL, 1LL);
    v18 = (int *)((char *)this + 72);
  }
  *((_QWORD *)this + 43) = v19;
  if ( !v19 )
    return v7;
  v20 = SURFACE::Map(v19, v15, v12);
  if ( v20 != 2 )
  {
    if ( v20 == 1 )
      *v17 |= 0x80u;
    *v18 = *v17 | 0x1000000;
    return v7;
  }
  if ( !a4 )
  {
    if ( (*v18 & 0x1000) != 0 && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 80)) )
    {
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      v18 = (int *)((char *)this + 72);
    }
    v23 = *((_QWORD *)this + 23);
    if ( v23 )
    {
      if ( (*v18 & 0x1000) != 0
        && (!*((_BYTE *)this + 281)
         || (v30 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL
         || !*((_BYTE *)this + 177)
         || *(_QWORD *)v23 != *v30) )
      {
        v24 = *(_DWORD *)(v23 + 36);
        if ( (v24 & 0x200) != 0 )
        {
          if ( (v24 & 0x4000) == 0 )
          {
            CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v23);
            v26 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
            v27 = v26 + 8;
            v28 = -v26;
            if ( (v27 & -(__int64)(v28 != 0)) != 0 )
              *(_DWORD *)((v27 & -(__int64)(v28 != 0)) + 0x150) &= ~1u;
          }
          v29 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v29 && *((_BYTE *)this + 177) && **((_QWORD **)this + 23) == *v29 && !*((_QWORD *)this + 37)
            || *((_QWORD *)this + 23) && *((_BYTE *)this + 281) && !*((_QWORD *)this + 40) )
          {
            SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v31);
            DC::vClearRendering(*((DC **)this + 23));
            EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v31);
            GrepReleaseLockValidate<3>(v22, v21);
            GreReleaseSemaphoreSharedInternal(v31);
          }
        }
      }
    }
    DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 184));
    goto LABEL_30;
  }
  *(_DWORD *)(*((_QWORD *)this + 23) + 44LL) |= 1u;
  return 0LL;
}
