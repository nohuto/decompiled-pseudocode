/*
 * XREFs of GreIntersectClipRect @ 0x14003F300
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1400384A8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1400384E0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 *     bCvtPts1 @ 0x140038594 (bCvtPts1.c)
 *     ?vDisableDpiScaleTransform@DC@@QEAAXXZ @ 0x140039194 (-vDisableDpiScaleTransform@DC@@QEAAXXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x140039A40 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003A42C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  DC *v19; // rbx
  const struct _POINTL *v20; // rdx
  __int64 v21; // r15
  LONG bottom; // edx
  DC *v23; // rbx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  DC *v29; // rcx
  __int64 v30; // rcx
  _QWORD **v31; // rax
  __int64 v33; // rax
  DC *v34; // rcx
  unsigned int v35; // esi
  unsigned int v36; // edi
  unsigned int v37; // r14d
  _QWORD v38[2]; // [rsp+20h] [rbp-81h] BYREF
  DC *v39; // [rsp+30h] [rbp-71h] BYREF
  int v40; // [rsp+38h] [rbp-69h]
  __int64 v41; // [rsp+40h] [rbp-61h]
  __int64 v42; // [rsp+48h] [rbp-59h]
  __int64 v43; // [rsp+50h] [rbp-51h] BYREF
  _QWORD **v44; // [rsp+58h] [rbp-49h]
  __int128 v45; // [rsp+70h] [rbp-31h] BYREF
  __int128 v46; // [rsp+80h] [rbp-21h]
  char v47; // [rsp+90h] [rbp-11h]
  char *v48; // [rsp+A0h] [rbp-1h] BYREF
  char v49; // [rsp+A8h] [rbp+7h]
  struct _RECTL v50; // [rsp+B0h] [rbp+Fh] BYREF

  v41 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v42 = 0LL;
  v39 = 0LL;
  v40 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v43);
  DCOBJ::vLock((DCOBJ *)&v39, a1);
  v45 = 0LL;
  v46 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v10, v9);
  if ( CurrentThreadWin32Thread )
    v13 = *CurrentThreadWin32Thread;
  else
    v13 = 0LL;
  v14 = v13 + 8;
  v15 = -v13;
  v16 = (__int128 *)(v14 & -(__int64)(v15 != 0));
  *(_QWORD *)&v46 = &v39;
  *((_QWORD *)&v46 + 1) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
  if ( v16 )
  {
    v17 = (_QWORD *)v16 + 11;
    v18 = *((_QWORD *)v16 + 11);
    if ( *(__int128 **)(v18 + 8) != (__int128 *)((char *)v16 + 88) )
      goto LABEL_5;
    *(_QWORD *)&v45 = *((_QWORD *)v16 + 11);
    v16 = &v45;
    *((_QWORD *)&v45 + 1) = v17;
    *(_QWORD *)(v18 + 8) = &v45;
    v15 = (__int64)&v45;
    *v17 = &v45;
  }
  else
  {
    *((_QWORD *)&v45 + 1) = &v45;
    *(_QWORD *)&v45 = &v45;
  }
  v47 = 1;
  if ( !v39 )
    goto LABEL_38;
  if ( *((_WORD *)v39 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16, v12);
  if ( *((_WORD *)v39 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v39);
  v19 = v39;
  if ( !v39 )
  {
LABEL_38:
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v39);
    return 0LL;
  }
  DC::vDisableDpiScaleTransform(v39);
  v20 = (const struct _POINTL *)*((_QWORD *)v19 + 122);
  if ( (v20[42].y & 0x1E000) != 0 )
  {
    if ( (v20[19].x & 0x100) != 0 )
    {
      v38[0] = (char *)v19 + 356;
      if ( v19 != (DC *)-356LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)v38, v20 + 1, (struct _POINTL *)&v20[27], 1LL);
      *(_DWORD *)(*((_QWORD *)v19 + 122) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(v19);
    *(_DWORD *)(*((_QWORD *)v19 + 122) + 152LL) |= 0x200u;
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 122) + 340LL) & 0x80u) != 0 )
    {
      v38[0] = (char *)v19 + 320;
      if ( v19 != (DC *)-320LL )
        DC::vRealizeLineAttrs(v19, (struct EXFORMOBJ *)v38);
      v33 = *((_QWORD *)v19 + 122);
      *((_DWORD *)v19 + 63) |= 1u;
      *(_DWORD *)(v33 + 340) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)v19 + 122) + 340LL) |= 0x10u;
  }
  v21 = (__int64)v19 + 320;
  if ( (*((_BYTE *)v19 + 520) & 3) == 3 )
  {
    *((_DWORD *)v19 + 130) &= ~2u;
    DC::vMarkTransformDirty(v19);
    DC::vUpdateCachedDPIScaleValue(v34);
  }
  bottom = a5;
  v50.bottom = a5;
  v48 = (char *)v19 + 320;
  v49 = 1;
  v50.left = left;
  v50.top = top;
  v50.right = right;
  if ( (*((_BYTE *)v19 + 352) & 1) != 0 )
  {
    v23 = v39;
    if ( (*(_BYTE *)(v21 + 32) & 0x43) == 0x43
      || (v24 = bCvtPts1(v21, (__int64)&v50, 2LL),
          bottom = v50.bottom,
          right = v50.right,
          top = v50.top,
          left = v50.left,
          v24) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v23 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v50.left = left;
        v50.right = right;
      }
    }
    if ( left > right )
    {
      v50.left = right;
      v50.right = left;
    }
    if ( top > bottom )
    {
      v50.top = bottom;
      v50.bottom = top;
    }
    v25 = DC::iCombine(v39, &v50, 1);
    goto LABEL_26;
  }
  v35 = left & 0xF8000000;
  if ( (!v35 || v35 == -134217728) && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000) )
  {
    v36 = right & 0xF8000000;
    if ( !v36 || v36 == -134217728 )
    {
      v37 = top & 0xF8000000;
      if ( !v37 || v37 == -134217728 )
      {
        v25 = DC::iCombine(v39, (struct EXFORMOBJR *)&v48, &v50, 1);
LABEL_26:
        v26 = v25;
        if ( v25 > 1 )
          v26 = 3;
        goto LABEL_28;
      }
    }
  }
  EngSetLastError(0x57u);
  v26 = 0;
LABEL_28:
  v27 = *((_QWORD *)&v45 + 1);
  v39 = (DC *)(-(__int64)(v47 != 0) & (unsigned __int64)v39);
  v28 = v45;
  if ( *(__int128 **)(v45 + 8) != &v45 || **((__int128 ***)&v45 + 1) != &v45 )
    goto LABEL_5;
  **((_QWORD **)&v45 + 1) = v45;
  *(_QWORD *)(v28 + 8) = v27;
  v29 = v39;
  *((_QWORD *)&v45 + 1) = &v45;
  *(_QWORD *)&v45 = &v45;
  if ( v39 )
  {
    if ( v40 && (*((_DWORD *)v39 + 11) & 2) != 0 )
    {
      DCOBJ::RestoreAttributesHelper((DCOBJ *)&v39);
      *((_DWORD *)v39 + 11) &= ~2u;
      v29 = v39;
      v40 = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)v29 + 6);
    v39 = 0LL;
  }
  v30 = v43;
  v31 = v44;
  if ( *(__int64 **)(v43 + 8) != &v43 || *v44 != &v43 )
LABEL_5:
    __fastfail(3u);
  *v44 = (_QWORD *)v43;
  *(_QWORD *)(v30 + 8) = v31;
  return v26;
}
