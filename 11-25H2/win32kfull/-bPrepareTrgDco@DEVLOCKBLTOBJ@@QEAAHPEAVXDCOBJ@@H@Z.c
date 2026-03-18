/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x140089E58
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400782E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
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
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401502F4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140153094 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FD954 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rbx
  XDCOBJ *v10; // rsi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r15
  char *v15; // rbx
  __int64 v16; // r15
  _QWORD *v17; // rcx
  int v18; // r12d
  char *v19; // r14
  char *v20; // rsi
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  XDCOBJ *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  HSEMAPHORE v30; // [rsp+58h] [rbp+10h] BYREF

  v6 = 1;
  if ( !a2 )
    goto LABEL_2;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v8 + 48);
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v8);
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
  v12 = *(_QWORD *)(v9 + 1408);
  if ( !*(_QWORD *)v10 || !*((_BYTE *)v10 + 73) )
  {
LABEL_27:
    v6 = 0;
LABEL_2:
    *((_QWORD *)this + 15) = 0LL;
    return v6;
  }
  v13 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v13 & 1) != 0 && (v13 & 0x4000) == 0 && v12 && !*((_QWORD *)this + 36) )
  {
    *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v12 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  v14 = *((_QWORD *)this + 15);
  if ( !v14 )
    return v6;
  if ( !*((_BYTE *)this + 193) )
    return v6;
  v15 = (char *)this + 112;
  if ( !_bittest((const signed __int32 *)this + 28, 0xCu) )
    return v6;
  v16 = *(_QWORD *)(v14 + 496);
  if ( !v16 )
    return v6;
  v18 = SURFACE::Map(v16);
  if ( !v18 )
    goto LABEL_19;
  if ( v18 == 1 )
  {
    v15 = (char *)this + 112;
LABEL_19:
    v19 = v15;
    if ( (*(_DWORD *)(v16 + 112) & 0x800) != 0
      && *(_QWORD *)(v16 + 248)
      && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
    {
      *(_DWORD *)v15 |= 0x400u;
      v19 = (char *)this + 112;
    }
    v20 = v15;
    if ( (*(_DWORD *)(v16 + 112) & 0x10) != 0 )
    {
      v20 = v19;
      if ( (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
        *(_DWORD *)v15 |= 0x2000u;
    }
    if ( v18 == 1 )
      *(_DWORD *)v20 |= 0x40u;
    return v6;
  }
  if ( v18 != 2 )
    return v6;
  if ( !a3 )
  {
    if ( _bittest((const signed __int32 *)this + 28, 0xCu) && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 200)) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    v21 = *((_QWORD *)this + 15);
    if ( v21 )
    {
      if ( _bittest((const signed __int32 *)this + 28, 0xCu) )
      {
        if ( !*((_QWORD *)this + 25)
          || !*((_BYTE *)this + 273)
          || !*((_BYTE *)this + 193)
          || (v17 = (_QWORD *)*((_QWORD *)this + 25), *v17 != *(_QWORD *)v21) )
        {
          v22 = *(_DWORD *)(v21 + 36);
          if ( (v22 & 0x200) != 0 )
          {
            if ( (v22 & 0x4000) == 0 )
            {
              CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v17, v21);
              v24 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
              v25 = v24 + 8;
              v26 = -v24;
              if ( (v25 & -(__int64)(v26 != 0)) != 0 )
                *(_DWORD *)((v25 & -(__int64)(v26 != 0)) + 0x158) &= ~1u;
            }
            if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) && !*((_QWORD *)this + 36)
              || (v29 = (_QWORD *)*((_QWORD *)this + 25)) != 0LL
              && *((_BYTE *)this + 273)
              && **((_QWORD **)this + 15) == *v29
              && !*((_QWORD *)this + 39) )
            {
              SEMOBJSHARED<3>::SEMOBJSHARED<3>(&v30);
              DC::vClearRendering(*((DC **)this + 15));
              EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v30);
              GrepReleaseLockValidate<3>();
              GreReleaseSemaphoreSharedInternal(v30);
            }
          }
        }
      }
    }
    v27 = (DEVLOCKBLTOBJ *)((char *)this + 120);
    v28 = *((_QWORD *)this + 15);
    if ( v28 && *((_BYTE *)this + 192) )
    {
      *(_DWORD *)(v28 + 40) &= ~2u;
      *((_BYTE *)this + 192) = 0;
    }
    if ( *(_QWORD *)v27 )
      XDCOBJ::vUnlockFast(v27);
    goto LABEL_27;
  }
  *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
  return 0LL;
}
