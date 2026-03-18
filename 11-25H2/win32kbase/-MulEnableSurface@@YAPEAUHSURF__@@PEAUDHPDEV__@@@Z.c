/*
 * XREFs of ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngUnlockSurface @ 0x14001CEB0 (EngUnlockSurface.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140040EC0 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     EngModifySurface @ 0x14006EE50 (EngModifySurface.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140086FC0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     EngLockSurface @ 0x14008D090 (EngLockSurface.c)
 *     EngCreateClip @ 0x1401298C0 (EngCreateClip.c)
 *     EngDeleteClip @ 0x140129970 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x1401299D0 (EngDeleteSurface.c)
 *     EngCreateDeviceSurface @ 0x140129A60 (EngCreateDeviceSurface.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

HSURF __fastcall MulEnableSurface(DHSURF dhsurf)
{
  ULONG v2; // r8d
  HSURF DeviceSurface; // rax
  HSURF v4; // rdi
  FLONG v5; // r8d
  HDEV v6; // rdx
  SURFOBJ *v7; // rax
  CLIPOBJ *Clip; // rax
  CLIPOBJ *v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  SIZEL sizl; // [rsp+40h] [rbp-88h]
  _BYTE v14[96]; // [rsp+50h] [rbp-78h] BYREF

  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
  v2 = *((_DWORD *)dhsurf + 16);
  sizl.cx = *((_DWORD *)dhsurf + 20) - *((_DWORD *)dhsurf + 18);
  sizl.cy = *((_DWORD *)dhsurf + 21) - *((_DWORD *)dhsurf + 19);
  *((_DWORD *)dhsurf + 17) = 230891;
  DeviceSurface = EngCreateDeviceSurface(dhsurf, sizl, v2);
  v4 = DeviceSurface;
  if ( DeviceSurface
    && (v5 = *((_DWORD *)dhsurf + 17),
        v6 = (HDEV)*((_QWORD *)dhsurf + 4),
        *((_QWORD *)dhsurf + 3) = DeviceSurface,
        EngModifySurface(DeviceSurface, v6, v5, 3u, dhsurf, 0LL, 0, 0LL))
    && (v7 = EngLockSurface(v4), (*((_QWORD *)dhsurf + 6) = v7) != 0LL)
    && (Clip = EngCreateClip(), (v9 = Clip) != 0LL) )
  {
    Clip->rclBounds = *(RECTL *)(dhsurf + 18);
    RGNOBJ::vSet((RGNOBJ *)&Clip[2].rclBounds.top, &Clip->rclBounds);
    v10 = *(_QWORD **)dhsurf;
    *((_QWORD *)dhsurf + 7) = v9;
    while ( v10 )
    {
      v11 = v10[6];
      if ( (*(_DWORD *)(v11 + 1808) & 0x8000000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v11 + 2544) + 144LL) = v4;
      v10 = (_QWORD *)*v10;
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return v4;
  }
  else
  {
    EngDeleteClip(*((CLIPOBJ **)dhsurf + 7));
    EngUnlockSurface(*((SURFOBJ **)dhsurf + 6));
    EngDeleteSurface(*((HSURF *)dhsurf + 3));
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v14);
    return 0LL;
  }
}
