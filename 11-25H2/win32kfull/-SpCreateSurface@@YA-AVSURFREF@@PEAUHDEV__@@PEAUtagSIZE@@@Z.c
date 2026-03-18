/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C4020
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x14007DE28 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x14007E3D0 (GreDwmUseDeviceBitmaps.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x14007E6B0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vSetPID@SURFREF@@QEAAXK@Z @ 0x1401A8CFC (-vSetPID@SURFREF@@QEAAXK@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1401C4248 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x14026108C (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall SpCreateSurface(SURFREF *a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int64 v10; // r8
  struct SURFACE *v11; // [rsp+80h] [rbp-80h] BYREF
  char v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+8Ch] [rbp-74h]
  _DWORD v14[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  _BYTE v17[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-30h]
  _BYTE v19[144]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v20; // [rsp+1A8h] [rbp+A8h] BYREF

  v20 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 96LL)
    && (unsigned int)GreDwmUseDeviceBitmaps(v6)
    || (unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v20) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v20);
    CreateCompatibleSurface((SURFREF *)v17, a2, 6, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
    if ( v18 )
    {
      SURFREF::vSetPID((SURFREF *)v17, 0LL, v10);
      GreMarkUndeletableBitmap(*(_QWORD *)(v18 + 32));
      SURFREF::SURFREF(a1, v17);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v17);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
      return a1;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v17);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v14[1] = *a3;
  v8 = a3[1];
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  v14[3] = 0;
  v16 = 2049LL;
  v14[0] = 6;
  v14[2] = v8;
  v15 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v14, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0, 0) )
  {
    *((_QWORD *)v11 + 6) = a2;
    v12 |= 1u;
    *((_DWORD *)v11 + 28) |= 0x800u;
    EtwPhysicalSurfCreateEvent(*((_QWORD *)v11 + 4), 0LL, 0LL, v7);
    SURFREF::SURFREF(a1, v11);
  }
  else
  {
    SURFREF::SURFREF(a1);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v11);
  return a1;
}
