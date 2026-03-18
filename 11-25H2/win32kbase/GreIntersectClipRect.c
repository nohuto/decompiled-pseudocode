/*
 * XREFs of GreIntersectClipRect @ 0x140043770
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     bCvtPts1 @ 0x140042D44 (bCvtPts1.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140075604 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140075BA8 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14008FFF0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14009058C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x1401075A0 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v8; // edi
  DC *v9; // rbx
  DC *v10; // rcx
  DC *v11; // r10
  const struct _POINTL *v12; // rdx
  __int64 v13; // r13
  LONG bottom; // edx
  DC *v15; // rbx
  int v16; // eax
  int v17; // eax
  ULONG v19; // ecx
  DC *v20; // rcx
  __int64 v21; // rax
  DC *v22; // rcx
  char *v23; // [rsp+28h] [rbp-99h] BYREF
  char *v24; // [rsp+30h] [rbp-91h] BYREF
  char *v25; // [rsp+38h] [rbp-89h] BYREF
  char v26; // [rsp+40h] [rbp-81h]
  DC *v27[14]; // [rsp+50h] [rbp-71h] BYREF
  struct _RECTL v28; // [rsp+C0h] [rbp-1h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, a1);
  v8 = 0;
  if ( !v27[0] )
  {
    v19 = 6;
LABEL_19:
    EngSetLastError(v19);
    goto LABEL_17;
  }
  v9 = v27[0];
  if ( (unsigned int)DC::bDpiScaleTransform(v27[0]) )
  {
    *((_DWORD *)v11 + 130) |= 2u;
    DC::vMarkTransformDirty(v10);
    DC::vUpdateCachedDPIScaleValue(v20);
    v11 = v27[0];
  }
  v12 = (const struct _POINTL *)*((_QWORD *)v9 + 122);
  if ( (v12[42].y & 0x1E000) != 0 )
  {
    if ( (v12[19].x & 0x100) != 0 )
    {
      v23 = (char *)v9 + 356;
      if ( v9 != (DC *)-356LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v23, v12 + 1, (struct _POINTL *)&v12[27], 1uLL);
      *(_DWORD *)(*((_QWORD *)v9 + 122) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(v9);
    *(_DWORD *)(*((_QWORD *)v9 + 122) + 152LL) |= 0x200u;
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 340LL) & 0x80u) != 0 )
    {
      v24 = (char *)v9 + 320;
      if ( v9 != (DC *)-320LL )
        DC::vRealizeLineAttrs(v9, (struct EXFORMOBJ *)&v24);
      v21 = *((_QWORD *)v9 + 122);
      *((_DWORD *)v9 + 63) |= 1u;
      *(_DWORD *)(v21 + 340) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)v9 + 122) + 340LL) |= 0x10u;
    v11 = v27[0];
  }
  v13 = (__int64)v9 + 320;
  if ( (*((_BYTE *)v9 + 520) & 3) == 3 )
  {
    *((_DWORD *)v9 + 130) &= ~2u;
    DC::vMarkTransformDirty(v9);
    DC::vUpdateCachedDPIScaleValue(v22);
    v11 = v27[0];
  }
  bottom = a5;
  v28.bottom = a5;
  v25 = (char *)v9 + 320;
  v26 = 1;
  v28.left = left;
  v28.top = top;
  v28.right = right;
  if ( (*((_BYTE *)v9 + 352) & 1) != 0 )
  {
    v15 = v11;
    if ( (*(_BYTE *)(v13 + 32) & 0x43) == 0x43
      || (v16 = bCvtPts1(v13, (__int64)&v28, 2LL),
          v11 = v27[0],
          bottom = v28.bottom,
          right = v28.right,
          top = v28.top,
          left = v28.left,
          v16) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v15 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v28.left = left;
        v28.right = right;
      }
    }
    if ( left > right )
    {
      v28.left = right;
      v28.right = left;
    }
    if ( top > bottom )
    {
      v28.top = bottom;
      v28.bottom = top;
    }
    v17 = DC::iCombine(v11, &v28, 1);
    goto LABEL_15;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v19 = 87;
    goto LABEL_19;
  }
  v17 = DC::iCombine(v11, (struct EXFORMOBJR *)&v25, &v28, 1);
LABEL_15:
  v8 = v17;
  if ( v17 > 1 )
    v8 = 3;
LABEL_17:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
  return v8;
}
