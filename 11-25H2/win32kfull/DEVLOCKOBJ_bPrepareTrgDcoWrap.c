/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14008A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A700 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14008A810 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x14008B05C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401502F4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FD954 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *this, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned int v14; // edi
  DC *v15; // rcx
  __int64 v16; // rax
  XDCOBJ *v17; // rcx

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)v6);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 44) & 2) == 0 )
    {
      if ( (*((_DWORD *)this + 16) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((DEVLOCKOBJ *)((char *)this + 32));
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*((DC **)this + 4), UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 4));
            *((_QWORD *)this + 4) = 0LL;
            goto LABEL_11;
          }
        }
      }
      *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) |= 2u;
      *((_DWORD *)this + 10) = 1;
    }
    v15 = (DC *)*((_QWORD *)this + 4);
    if ( (*((_DWORD *)v15 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v15);
  }
LABEL_11:
  v10 = *(_QWORD *)(v7 + 1408);
  if ( !*((_QWORD *)this + 4) || !*((_BYTE *)this + 105) )
  {
LABEL_31:
    v4 = 0;
LABEL_2:
    *((_QWORD *)this + 4) = 0LL;
    return v4;
  }
  v11 = *(_DWORD *)(*a2 + 36);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 14) )
  {
    *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 4), (struct SURFACE *)(v10 - 24));
    *((_DWORD *)this + 6) |= 0x10u;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    v12 = *((_QWORD *)this + 4);
    if ( v12 )
    {
      if ( *((_BYTE *)this + 105) )
      {
        v13 = *(_QWORD *)(v12 + 496);
        if ( v13 )
        {
          v14 = SURFACE::Map(v13);
          if ( v14 <= 1 )
          {
            if ( (*(_DWORD *)(v13 + 112) & 0x800) != 0
              && *(_QWORD *)(v13 + 248)
              && (unsigned int)bHookRedir((DEVLOCKOBJ *)((char *)this + 32)) )
            {
              *((_DWORD *)this + 6) |= 0x400u;
            }
            if ( (*(_DWORD *)(v13 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32)) )
              *((_DWORD *)this + 6) |= 0x2000u;
            if ( v14 == 1 )
              *((_DWORD *)this + 6) |= 0x40u;
            return v4;
          }
          if ( v14 != 2 )
            return v4;
          DEVLOCKOBJ::vClearRenderState(this);
          v16 = *((_QWORD *)this + 4);
          v17 = (DEVLOCKOBJ *)((char *)this + 32);
          if ( v16 && *((_BYTE *)this + 104) )
          {
            *(_DWORD *)(v16 + 40) &= ~2u;
            *((_BYTE *)this + 104) = 0;
          }
          if ( *(_QWORD *)v17 )
            XDCOBJ::vUnlockFast(v17);
          goto LABEL_31;
        }
      }
    }
  }
  return v4;
}
