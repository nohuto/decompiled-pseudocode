/*
 * XREFs of ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140024FB0 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     EngModifySurface @ 0x140027250 (EngModifySurface.c)
 *     EngCreateClip @ 0x140121DA0 (EngCreateClip.c)
 *     EngDeleteClip @ 0x140121E60 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x140121E90 (EngDeleteSurface.c)
 *     EngUnlockSurface @ 0x140121ED0 (EngUnlockSurface.c)
 *     EngCreateDeviceSurface @ 0x140122040 (EngCreateDeviceSurface.c)
 *     EngLockSurface @ 0x140166920 (EngLockSurface.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

HSURF __fastcall MulEnableSurface(DHSURF dhsurf, __int64 a2)
{
  ULONG v3; // r8d
  HSURF DeviceSurface; // rax
  HSURF v5; // rdi
  FLONG v6; // r8d
  HDEV v7; // rdx
  SURFOBJ *v8; // rax
  CLIPOBJ *Clip; // rax
  CLIPOBJ *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  SIZEL sizl; // [rsp+40h] [rbp-88h]
  _BYTE v15[96]; // [rsp+50h] [rbp-78h] BYREF

  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v15, a2);
  v3 = *((_DWORD *)dhsurf + 16);
  sizl.cx = *((_DWORD *)dhsurf + 20) - *((_DWORD *)dhsurf + 18);
  sizl.cy = *((_DWORD *)dhsurf + 21) - *((_DWORD *)dhsurf + 19);
  *((_DWORD *)dhsurf + 17) = 230891;
  DeviceSurface = EngCreateDeviceSurface(dhsurf, sizl, v3);
  v5 = DeviceSurface;
  if ( DeviceSurface
    && (v6 = *((_DWORD *)dhsurf + 17),
        v7 = (HDEV)*((_QWORD *)dhsurf + 4),
        *((_QWORD *)dhsurf + 3) = DeviceSurface,
        EngModifySurface(DeviceSurface, v7, v6, 3u, dhsurf, 0LL, 0, 0LL))
    && (v8 = EngLockSurface(v5), (*((_QWORD *)dhsurf + 6) = v8) != 0LL)
    && (Clip = EngCreateClip(), (v10 = Clip) != 0LL) )
  {
    Clip->rclBounds = *(RECTL *)(dhsurf + 18);
    RGNOBJ::vSet((RGNOBJ *)&Clip[2].rclBounds.top, &Clip->rclBounds);
    v11 = *(_QWORD **)dhsurf;
    *((_QWORD *)dhsurf + 7) = v10;
    while ( v11 )
    {
      v12 = v11[6];
      if ( (*(_DWORD *)(v12 + 1808) & 0x8000000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v12 + 2544) + 144LL) = v5;
      v11 = (_QWORD *)*v11;
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v15);
    return v5;
  }
  else
  {
    EngDeleteClip(*((CLIPOBJ **)dhsurf + 7));
    EngUnlockSurface(*((SURFOBJ **)dhsurf + 6));
    EngDeleteSurface(*((HSURF *)dhsurf + 3));
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v15);
    return 0LL;
  }
}
