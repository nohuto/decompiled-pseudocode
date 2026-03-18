/*
 * XREFs of EngModifySurface @ 0x140027250
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
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
  unsigned int v8; // edi
  __int64 v12; // rcx
  BOOL v13; // ebx
  __int64 SessionState; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int *v18; // r10
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  HDEV v21; // rax
  FLONG v22; // r15d
  FLONG v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v27; // [rsp+40h] [rbp-10h]

  v8 = (unsigned int)hsurf;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v26, (__int64)hdev);
  v13 = 0;
  v27 = 0LL;
  if ( !hdev )
  {
    SURFREF::~SURFREF((SURFREF *)v26);
    return 0;
  }
  SessionState = W32GetSessionState(v12);
  v16 = HmgShareLock(*(_QWORD *)(SessionState + 88), v8, 5, 17);
  v27 = (unsigned int *)v16;
  v18 = (unsigned int *)v16;
  if ( !v16 )
  {
    PopThreadGuardedObject(v26);
    return 0;
  }
  v19 = pvReserved == 0LL;
  if ( (flSurface & 0xFFFFFFF0) == 0 )
  {
    v20 = *(unsigned int *)(v16 + 112);
    if ( (v20 & 0x400000) == 0 && *(_WORD *)(v16 + 100) != 1 )
      LODWORD(v19) = 0;
    v21 = *(HDEV *)(v16 + 48);
    if ( v21 && v21 != hdev )
      LODWORD(v19) = 0;
    v22 = flHooks & 0xFFFFB7FF;
    if ( (v20 & 0x80000000) != 0LL && (((_DWORD)hdev[43] & 0x3B5EF) != v22 || ((_DWORD)hdev[10] & 0x400) == 0) )
      LODWORD(v19) = 0;
    if ( pvScan0 && lDelta )
    {
      v23 = flSurface & 1;
      if ( (flSurface & 1) != 0 && (v22 & 0x1000) == 0 )
      {
        LODWORD(v19) = 0;
        goto LABEL_24;
      }
      if ( !(_DWORD)v19 )
      {
LABEL_24:
        if ( v18 )
        {
          v24 = W32GetSessionState(v20);
          HmgDecrementShareReferenceCount(*(_QWORD *)(v24 + 88), v27);
        }
        v13 = v19;
        goto LABEL_27;
      }
      *((_QWORD *)v18 + 10) = pvScan0;
      v27[22] = lDelta;
      *((_WORD *)v27 + 50) = 0;
      if ( lDelta > 0 )
      {
        *((_QWORD *)v27 + 9) = pvScan0;
        *((_WORD *)v27 + 51) |= 1u;
      }
      else
      {
        *((_QWORD *)v27 + 9) = (char *)pvScan0 + (int)(lDelta * (v27[15] - 1));
        *((_WORD *)v27 + 51) &= ~1u;
      }
    }
    else
    {
      v23 = flSurface & 1;
      v20 = 0LL;
      if ( (v22 & 0x29) == 0x29 )
        v20 = (unsigned int)v19;
      LODWORD(v19) = dhsurf != 0LL ? ((flSurface & 1) != 0 ? v20 : 0) : 0;
      if ( !(_DWORD)v19 )
        goto LABEL_24;
      *((_QWORD *)v18 + 10) = 0LL;
      *((_QWORD *)v27 + 9) = 0LL;
      v27[22] = 0;
      if ( *((_WORD *)v27 + 50) != 1 )
        *((_WORD *)v27 + 50) = 3;
    }
    if ( v23 )
      *((_WORD *)v27 + 51) |= 0x20u;
    else
      *((_WORD *)v27 + 51) &= ~0x20u;
    if ( (flSurface & 2) != 0 )
      v27[28] |= 0x200u;
    else
      v27[28] &= ~0x200u;
    if ( (flSurface & 4) != 0 )
      v27[29] |= 0x100u;
    else
      v27[29] &= ~0x100u;
    if ( (flSurface & 8) != 0 )
      v27[29] |= 0x2000u;
    else
      v27[29] &= ~0x2000u;
    *((_QWORD *)v27 + 3) = dhsurf;
    *((_QWORD *)v27 + 17) = 0LL;
    *((_QWORD *)v27 + 6) = hdev;
    *((_QWORD *)v27 + 5) = *((_QWORD *)hdev + 223);
    v20 = (unsigned __int64)v27;
    v27[28] = v22 | v27[28] & 0xFFFC4A10;
    v18 = v27;
    goto LABEL_24;
  }
  v25 = W32GetSessionState(v17);
  HmgDecrementShareReferenceCount(*(_QWORD *)(v25 + 88), v27);
LABEL_27:
  PopThreadGuardedObject(v26);
  return v13;
}
