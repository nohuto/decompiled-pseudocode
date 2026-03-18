/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x14008BE80
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x140087C00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x140089BFC (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x14008B2C8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x14008BD68 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140145460 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140174CBC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  XDCOBJ *v10; // rdi
  struct _DC_ATTR *UserAttr; // rax
  int v12; // ecx
  __int64 v13; // rbp
  _DWORD *v14; // rdi
  _DWORD *v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  XDCOBJ *v27; // rcx
  __int64 v28; // rax
  HSEMAPHORE v29; // [rsp+68h] [rbp+10h] BYREF

  v7 = 1;
  if ( !a2 )
    goto LABEL_2;
  v9 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v9 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 200);
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 200), *(HDC *)v9, a3);
  if ( *(_QWORD *)v10 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)v10 + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(v10);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)v10, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v10);
            *(_QWORD *)v10 = 0LL;
            goto LABEL_11;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v10 + 44LL) |= 2u;
      *((_DWORD *)v10 + 2) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)v10 + 520LL) & 4) != 0 )
      DC::vMarkTransformDirty(*(DC **)v10);
  }
LABEL_11:
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 73) )
  {
LABEL_28:
    v7 = 0;
LABEL_2:
    *((_QWORD *)this + 25) = 0LL;
    return v7;
  }
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && *((_QWORD *)this + 35) && !*((_QWORD *)this + 39) )
  {
    *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 25), *((struct SURFACE **)this + 35));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  v13 = *((_QWORD *)this + 25);
  if ( !v13 )
    return v7;
  if ( !*((_BYTE *)this + 273) )
    return v7;
  v14 = (_DWORD *)((char *)this + 112);
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    return v7;
  v15 = (_DWORD *)((char *)this + 112);
  v16 = *(_QWORD *)(v13 + 496);
  if ( *((_QWORD *)this + 42) )
  {
    GrepCaptureLiveMemoryDump(400LL, 57LL, 1LL);
    v15 = (_DWORD *)((char *)this + 112);
  }
  *((_QWORD *)this + 42) = v16;
  if ( !v16 )
    return v7;
  v17 = SURFACE::Map(v16);
  if ( v17 != 2 )
  {
    if ( v17 == 1 )
    {
      *v14 |= 0x80u;
      v14 = v15;
    }
    *v14 |= 0x1000000u;
    return v7;
  }
  if ( !a4 )
  {
    if ( (*v15 & 0x1000) != 0 && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 120)) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    if ( !*((_QWORD *)this + 25) || (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_51;
    if ( *((_BYTE *)this + 273) && (v19 = (_QWORD *)*((_QWORD *)this + 15)) != 0LL && *((_BYTE *)this + 193) )
    {
      if ( **((_QWORD **)this + 25) == *v19 )
      {
LABEL_51:
        v27 = (DEVLOCKBLTOBJ *)((char *)this + 200);
        v28 = *((_QWORD *)this + 25);
        if ( v28 && *((_BYTE *)this + 272) )
        {
          *(_DWORD *)(v28 + 40) &= ~2u;
          *((_BYTE *)this + 272) = 0;
        }
        if ( *(_QWORD *)v27 )
          XDCOBJ::vUnlockFast(v27);
        goto LABEL_28;
      }
      v20 = *((_QWORD *)this + 25);
    }
    else
    {
      v20 = *((_QWORD *)this + 25);
    }
    v21 = *(unsigned int *)(v20 + 36);
    if ( (v21 & 0x200) != 0 )
    {
      if ( (v21 & 0x4000) == 0 )
      {
        CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v21, v18);
        v23 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
        v24 = v23 + 8;
        v25 = -v23;
        if ( (v24 & -(__int64)(v25 != 0)) != 0 )
          *(_DWORD *)((v24 & -(__int64)(v25 != 0)) + 0x158) &= ~1u;
      }
      v26 = (_QWORD *)*((_QWORD *)this + 15);
      if ( v26 && *((_BYTE *)this + 193) && **((_QWORD **)this + 25) == *v26 && !*((_QWORD *)this + 36)
        || *((_QWORD *)this + 25) && *((_BYTE *)this + 273) && !*((_QWORD *)this + 39) )
      {
        SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v29);
        DC::vClearRendering(*((DC **)this + 25));
        EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v29);
        GrepReleaseLockValidate<3>();
        GreReleaseSemaphoreSharedInternal(v29);
      }
    }
    goto LABEL_51;
  }
  *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) |= 1u;
  return 0LL;
}
