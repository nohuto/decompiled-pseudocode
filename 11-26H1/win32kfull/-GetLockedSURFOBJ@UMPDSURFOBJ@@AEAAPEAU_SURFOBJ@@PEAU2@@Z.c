/*
 * XREFs of ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1400F66A8
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockedSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v3; // rbx
  HSURF v4; // rdx
  LONG *p_lDelta; // rdi
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  UMPDSURFOBJ *v9; // [rsp+70h] [rbp+8h] BYREF
  HSURF hsurf; // [rsp+78h] [rbp+10h] BYREF

  v9 = this;
  v3 = 0LL;
  v4 = 0LL;
  hsurf = 0LL;
  if ( a2 )
  {
    p_lDelta = &a2[-1].lDelta;
    GreProbeForReadFromUntrustedVa(&a2[-1].lDelta, 0x60uLL, 1uLL);
    LODWORD(v9) = 0;
    GreProbeAndReadFromUntrustedVa(&v9, 4uLL, p_lDelta, 4uLL, 1uLL);
    if ( (_DWORD)v9 == 1431130959 )
      GreProbeAndReadFromUntrustedVa(&hsurf, 8uLL, p_lDelta + 2, 8uLL, 1uLL);
    v4 = hsurf;
  }
  SURFREF::SURFREF((SURFREF *)v7, v4);
  if ( v8 && (*(_DWORD *)(v8 + 112) & 0x240000) == 0x240000 )
  {
    if ( *(_QWORD *)(v8 + 560) )
      v3 = EngLockSurface(hsurf);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
    return v3;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
    return 0LL;
  }
}
