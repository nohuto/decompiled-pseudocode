/*
 * XREFs of ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x140017A80 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x140018158 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1401C3510 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1401C3580 (GreDwmUseDeviceBitmaps.c)
 *     ?vSetPID@SURFREF@@QEAAXK@Z @ 0x1401DAC94 (-vSetPID@SURFREF@@QEAAXK@Z.c)
 */

__int64 __fastcall SpCreateSurface(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  struct SURFACE *v9; // [rsp+80h] [rbp-80h] BYREF
  char v10; // [rsp+88h] [rbp-78h]
  int v11; // [rsp+8Ch] [rbp-74h]
  _DWORD v12[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+A8h] [rbp-58h]
  _BYTE v15[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-30h]
  _BYTE v17[160]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp+B8h] BYREF

  v18 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 96LL) && (unsigned int)GreDwmUseDeviceBitmaps()
    || (unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v18) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v18);
    CreateCompatibleSurface((__int64)v15, a2, 6, 0LL, *a3, a3[1], 1u, 0, 1, 1, 0, 0, 0, 0, 0, 0LL);
    if ( v16 )
    {
      SURFREF::vSetPID((SURFREF *)v15, 0);
      GreMarkUndeletableBitmap(*(_QWORD *)(v16 + 32));
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((_OWORD *)a1);
      *(_QWORD *)(a1 + 32) = v16;
      v16 = 0LL;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
      return a1;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v12[1] = *a3;
  v7 = a3[1];
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12[3] = 0;
  v14 = 2049LL;
  v12[0] = 6;
  v12[2] = v7;
  v13 = 0LL;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v9, (struct _DEVBITMAPINFO *)v12, 0LL, 0LL, 0, 0LL, 0LL, 1, 1, 0) )
  {
    *((_QWORD *)v9 + 6) = a2;
    v10 |= 1u;
    *((_DWORD *)v9 + 28) |= 0x800u;
    EtwPhysicalSurfCreateEvent(*((_QWORD *)v9 + 4), 0LL, 0LL, v6);
    SURFREF::SURFREF((SURFREF *)a1, v9);
  }
  else
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((_OWORD *)a1);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v9);
  return a1;
}
