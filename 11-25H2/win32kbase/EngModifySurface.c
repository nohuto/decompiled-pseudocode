/*
 * XREFs of EngModifySurface @ 0x14006EE50
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockIgnoreStockBit @ 0x14006F0F0 (HmgShareLockIgnoreStockBit.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14008D308 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // ecx
  HDEV v17; // rax
  FLONG v18; // esi
  FLONG v19; // r9d
  int v20; // ecx
  _BYTE v21[32]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v21);
  if ( !hdev )
    goto LABEL_2;
  v14 = HmgShareLockIgnoreStockBit(hsurf);
  v22 = v14;
  v15 = v14;
  if ( !v14 )
    goto LABEL_2;
  v12 = pvReserved == 0LL;
  if ( (flSurface & 0xFFFFFFF0) != 0 )
    goto LABEL_2;
  v16 = *(_DWORD *)(v14 + 112);
  if ( (v16 & 0x400000) == 0 && *(_WORD *)(v14 + 100) != 1 )
    LODWORD(v12) = 0;
  v17 = *(HDEV *)(v14 + 48);
  if ( v17 && v17 != hdev )
    LODWORD(v12) = 0;
  v18 = flHooks & 0xFFFFB7FF;
  if ( v16 < 0 && (((_DWORD)hdev[43] & 0x3B5EF) != v18 || ((_DWORD)hdev[10] & 0x400) == 0) )
    LODWORD(v12) = 0;
  if ( pvScan0 && lDelta )
  {
    v19 = flSurface & 1;
    if ( (flSurface & 1) == 0 || (v18 & 0x1000) != 0 )
    {
      if ( !(_DWORD)v12 )
        goto LABEL_3;
      *(_QWORD *)(v15 + 80) = pvScan0;
      *(_DWORD *)(v22 + 88) = lDelta;
      *(_WORD *)(v22 + 100) = 0;
      if ( lDelta <= 0 )
      {
        *(_QWORD *)(v22 + 72) = (char *)pvScan0 + lDelta * (*(_DWORD *)(v22 + 60) - 1);
        *(_WORD *)(v22 + 102) &= ~1u;
      }
      else
      {
        *(_QWORD *)(v22 + 72) = pvScan0;
        *(_WORD *)(v22 + 102) |= 1u;
      }
      goto LABEL_15;
    }
LABEL_2:
    LODWORD(v12) = 0;
    goto LABEL_3;
  }
  v19 = flSurface & 1;
  v20 = 0;
  if ( (v18 & 0x29) == 0x29 )
    v20 = v12;
  LODWORD(v12) = dhsurf != 0LL ? ((flSurface & 1) != 0 ? v20 : 0) : 0;
  if ( (_DWORD)v12 )
  {
    *(_QWORD *)(v15 + 80) = 0LL;
    *(_QWORD *)(v22 + 72) = 0LL;
    *(_DWORD *)(v22 + 88) = 0;
    if ( *(_WORD *)(v22 + 100) != 1 )
      *(_WORD *)(v22 + 100) = 3;
LABEL_15:
    if ( v19 )
      *(_WORD *)(v22 + 102) |= 0x20u;
    else
      *(_WORD *)(v22 + 102) &= ~0x20u;
    if ( (flSurface & 2) != 0 )
      *(_DWORD *)(v22 + 112) |= 0x200u;
    else
      *(_DWORD *)(v22 + 112) &= ~0x200u;
    if ( (flSurface & 4) != 0 )
      *(_DWORD *)(v22 + 116) |= 0x100u;
    else
      *(_DWORD *)(v22 + 116) &= ~0x100u;
    if ( (flSurface & 8) != 0 )
      *(_DWORD *)(v22 + 116) |= 0x2000u;
    else
      *(_DWORD *)(v22 + 116) &= ~0x2000u;
    *(_QWORD *)(v22 + 24) = dhsurf;
    *(_QWORD *)(v22 + 136) = 0LL;
    *(_QWORD *)(v22 + 48) = hdev;
    *(_QWORD *)(v22 + 40) = *((_QWORD *)hdev + 223);
    *(_DWORD *)(v22 + 112) = v18 | *(_DWORD *)(v22 + 112) & 0xFFFC4A10;
  }
LABEL_3:
  SURFREF::~SURFREF((SURFREF *)v21);
  return v12;
}
