/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$02@@YAXXZ @ 0x1400AA714 (--$GrepReleaseLockValidate@$02@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x1400AA7C4 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140159BC0 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14017515C (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14018CF90 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // r13
  struct _DC_ATTR *UserAttr; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // r14d
  unsigned int v19; // eax
  DC *v20; // rsi
  unsigned int v21; // r14d
  __int64 v22; // rbp
  struct _DC_ATTR *v23; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  int v27; // eax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  Gre::Base *v32; // rcx
  HSEMAPHORE v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  DC **v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // [rsp+80h] [rbp+18h]

  v39 = a3;
  v5 = 1;
  if ( !a2 )
    goto LABEL_38;
  v6 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_38;
  v7 = *(_QWORD *)(v6 + 48);
  v8 = (__int64 *)((char *)this + 80);
  LOBYTE(a3) = 1;
  v9 = HmgLock(*((_QWORD *)this + 12), *(_QWORD *)v6, a3, 0LL);
  *v8 = v9;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v9 + 12));
      *v8 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *v8 )
  {
    if ( (*(_DWORD *)(*v8 + 44) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v11 = *v8;
      v12 = CurrentProcessId & 0xFFFFFFFC;
      if ( *(_QWORD *)*v8 )
      {
        v13 = HmgPentryFromPobj(v8[2], *v8);
      }
      else
      {
        v13 = v11 + 2152;
        *(_OWORD *)(v11 + 2152) = 0LL;
        *(_QWORD *)(v11 + 2168) = 0LL;
        *(_DWORD *)(v11 + 2160) = -2147483630;
        *(_QWORD *)(v11 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v12 == (*(_DWORD *)(v13 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr((DCOBJ *)v8);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes((DC *)*v8, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(*v8 + 12));
            *v8 = 0LL;
            goto LABEL_16;
          }
        }
      }
      *(_DWORD *)(*v8 + 44) |= 2u;
      *((_DWORD *)v8 + 2) = 1;
    }
    if ( (*(_DWORD *)(*v8 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)*v8);
  }
LABEL_16:
  v15 = *v8;
  v16 = *(_QWORD *)(v7 + 1408);
  if ( !*v8 || !*((_BYTE *)v8 + 97) )
  {
LABEL_37:
    v5 = 0;
LABEL_38:
    *((_QWORD *)this + 10) = 0LL;
    return v5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4001) == 1 && v16 && !*((_QWORD *)this + 37) )
  {
    *(_DWORD *)(v15 + 36) |= 0x4000u;
    DC::pSurface((DC *)*v8, (struct SURFACE *)(v16 - 24), v16);
    *((_DWORD *)this + 18) |= 0x10u;
  }
  if ( !*v8 )
    return v5;
  if ( !*((_BYTE *)v8 + 97) )
    return v5;
  if ( !_bittest((const signed __int32 *)this + 18, 0xCu) )
    return v5;
  v17 = *(_QWORD *)(*v8 + 496);
  if ( !v17 )
    return v5;
  v18 = SURFACE::Map(*(_QWORD *)(*v8 + 496), v15, v16);
  if ( v18 <= 1 )
  {
    if ( (*(_DWORD *)(v17 + 112) & 0x800) != 0
      && *(_QWORD *)(v17 + 248)
      && (unsigned int)bHookRedir((struct XDCOBJ *)v8) )
    {
      *((_DWORD *)this + 18) |= 0x400u;
    }
    if ( (*(_DWORD *)(v17 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((struct XDCOBJ *)v8) )
      *((_DWORD *)this + 18) |= 0x2000u;
    if ( v18 == 1 )
      *((_DWORD *)this + 18) |= 0x40u;
    return v5;
  }
  if ( v18 != 2 )
    return v5;
  if ( !v39 )
  {
    if ( _bittest((const signed __int32 *)this + 18, 0xCu) && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 184)) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    v25 = *v8;
    if ( *v8 )
    {
      if ( _bittest((const signed __int32 *)this + 18, 0xCu) )
      {
        v26 = (_QWORD *)*((_QWORD *)this + 23);
        if ( !v26 || !*((_BYTE *)this + 281) || !*((_BYTE *)this + 177) || *v26 != *(_QWORD *)v25 )
        {
          v27 = *(_DWORD *)(v25 + 36);
          if ( (v27 & 0x200) != 0 )
          {
            if ( (v27 & 0x4000) == 0 )
            {
              CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v25);
              v29 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
              v30 = v29 + 8;
              v31 = -v29;
              if ( (v30 & -(__int64)(v31 != 0)) != 0 )
                *(_DWORD *)((v30 & -(__int64)(v31 != 0)) + 0x150) &= ~1u;
            }
            v32 = (Gre::Base *)*v8;
            if ( *v8 && *((_BYTE *)v8 + 97) && !*((_QWORD *)this + 37)
              || (v38 = (_QWORD *)*((_QWORD *)this + 23)) != 0LL
              && *((_BYTE *)this + 281)
              && *(_QWORD *)v32 == *v38
              && !*((_QWORD *)this + 40) )
            {
              v33 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v32) + 728LL);
              GreAcquireSemaphoreSharedInternal(v33);
              GrepAcquireLockValidate<3>();
              DC::vClearRendering((DC *)*v8);
              EtwTraceGreLockReleaseSemaphore(L"DCVisRgn", v33);
              GrepReleaseLockValidate<3>(v35, v34);
              GreReleaseSemaphoreSharedInternal(v33);
            }
          }
        }
      }
    }
    v36 = (DC **)((char *)this + 80);
    v37 = *((_QWORD *)this + 10);
    if ( v37 && *((_BYTE *)this + 176) )
    {
      *(_DWORD *)(v37 + 40) &= ~2u;
      *((_BYTE *)this + 176) = 0;
    }
    if ( *v36 )
    {
      if ( *((_DWORD *)this + 22) && (*((_DWORD *)*v36 + 11) & 2) != 0 )
      {
        v19 = (unsigned int)PsGetCurrentProcessId();
        v20 = *v36;
        v21 = v19 & 0xFFFFFFFC;
        if ( *(_QWORD *)*v36 )
        {
          v22 = HmgPentryFromPobj(*((_QWORD *)this + 12), *v36);
        }
        else
        {
          v22 = (__int64)v20 + 2152;
          *(_OWORD *)((char *)v20 + 2152) = 0LL;
          *((_QWORD *)v20 + 271) = 0LL;
          *((_DWORD *)v20 + 540) = -2147483630;
          *((_QWORD *)v20 + 271) = GreEncodeUserModePointer(0LL);
        }
        if ( v21 == (*(_DWORD *)(v22 + 8) & 0xFFFFFFFE) )
        {
          v23 = DCOBJ::GetUserAttr((DEVLOCKBLTOBJ *)((char *)this + 80));
          if ( v23 )
            DC::RestoreAttributes(*v36, v23);
        }
        *((_DWORD *)*v36 + 11) &= ~2u;
        *((_DWORD *)this + 22) = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)*v36 + 6);
    }
    goto LABEL_37;
  }
  *(_DWORD *)(*v8 + 44) |= 1u;
  return 0LL;
}
