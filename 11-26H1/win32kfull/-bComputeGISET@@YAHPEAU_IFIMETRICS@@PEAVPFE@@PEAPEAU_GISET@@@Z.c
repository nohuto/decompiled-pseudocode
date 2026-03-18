/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x1401C877C (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50 (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, const struct PFF **a2, struct _GISET **a3)
{
  unsigned int v5; // ebx
  struct _FD_GLYPHSET *v6; // rdi
  bool IsUmfdTrueTypePff; // bp
  struct _FD_GLYPHSET *v8; // r15
  PTRDIFF dpwszFamilyName; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  _WORD *v13; // r9
  ULONG i; // edx
  unsigned int cGlyphsSupported; // r8d
  __int64 v16; // rdx
  unsigned int v17; // ebp
  char *v18; // r9
  struct _GISET *v19; // r8
  HGLYPH *phg; // rcx
  __int64 cGlyphs; // r8
  HGLYPH *v23; // r8
  __int64 v24; // rax
  struct _GISET *v25; // r8
  WCHAR wcLow; // ax
  unsigned __int16 v27; // cx
  WCHAR v28; // r8
  const struct PFF *v29; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-58h] BYREF
  int v31; // [rsp+40h] [rbp-48h]
  const struct PFF **v32; // [rsp+A0h] [rbp+18h] BYREF

  v32 = a2;
  *a3 = 0LL;
  v29 = *a2;
  v5 = 1;
  v6 = 0LL;
  IsUmfdTrueTypePff = UmfdIsUmfdTrueTypePff(v29);
  if ( !IsUmfdTrueTypePff )
  {
    v6 = PFEOBJ::pfdg((PFEOBJ *)&v32);
    if ( !v6 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)v30,
        (struct PFFOBJ *)&v29);
      if ( v31 == *(_DWORD *)(v30[0] + 36LL) )
        v6 = PFEOBJ::pfdg((PFEOBJ *)&v32);
      UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v30);
      if ( !v6 )
        return 0LL;
      v8 = v6;
      goto LABEL_42;
    }
  }
  v8 = v6;
  if ( !IsUmfdTrueTypePff )
  {
LABEL_42:
    if ( (v6->flAccel & 6) == 0 )
    {
LABEL_22:
      PFEOBJ::vFreepfdg((PFEOBJ *)&v32);
      return v5;
    }
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !IsUmfdTrueTypePff )
  {
    if ( !dpwszFamilyName )
    {
      v10 = 2LL * v6->cGlyphsSupported;
      if ( v10 <= 0xFFFFFFFF
        && (_DWORD)v10
        && (v11 = Win32AllocPoolZInit((unsigned int)v10, 1936484167LL), (v12 = (char *)v11) != 0LL) )
      {
        v13 = (_WORD *)v11;
        for ( i = 0; i < v6->cRuns; ++i )
        {
          phg = v8->awcrun[i].phg;
          cGlyphs = v8->awcrun[i].cGlyphs;
          if ( phg )
          {
            v23 = &phg[cGlyphs];
            while ( phg < v23 )
              *v13++ = *(_WORD *)phg++;
          }
          else
          {
            if ( !(_WORD)cGlyphs )
              goto LABEL_20;
            wcLow = v8->awcrun[i].wcLow;
            v27 = cGlyphs + wcLow - 1;
            if ( wcLow <= v27 )
            {
              do
                v28 = wcLow++;
              while ( wcLow <= v27 );
              *v13 = v28;
            }
          }
        }
        qsort(v12, v6->cGlyphsSupported, 2uLL, CompareRoutine);
        cGlyphsSupported = v6->cGlyphsSupported;
        LODWORD(v16) = 0;
        v17 = 0;
        if ( cGlyphsSupported )
        {
          do
          {
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 < cGlyphsSupported )
            {
              v18 = &v12[2 * v16];
              do
              {
                if ( *(unsigned __int16 *)v18 - *(unsigned __int16 *)&v12[2 * (unsigned int)(v16 - 1)] > 1 )
                  break;
                LODWORD(v16) = v16 + 1;
                v18 += 2;
              }
              while ( (unsigned int)v16 < cGlyphsSupported );
            }
            ++v17;
          }
          while ( (unsigned int)v16 < cGlyphsSupported );
        }
        if ( 4 * v17 == -8 || (v19 = (struct _GISET *)Win32AllocPoolZInit(4 * v17 + 8, 1936484167LL)) == 0LL )
        {
LABEL_20:
          v5 = 0;
          goto LABEL_21;
        }
        cComputeGISET((const unsigned __int16 *)v12, v6->cGlyphsSupported, v19, v17);
        *a3 = v25;
LABEL_21:
        Win32FreePool(v12);
      }
      else
      {
        v5 = 0;
      }
      goto LABEL_22;
    }
LABEL_31:
    v24 = Win32AllocPoolZInit(12LL, 1936484167LL);
    if ( v24 )
    {
      *(_DWORD *)v24 = dpwszFamilyName;
      *(_DWORD *)(v24 + 4) = 1;
      *(_WORD *)(v24 + 8) = 0;
      *(_WORD *)(v24 + 10) = dpwszFamilyName;
      *a3 = (struct _GISET *)v24;
    }
    else
    {
      v5 = 0;
    }
    if ( IsUmfdTrueTypePff )
      return v5;
    goto LABEL_22;
  }
  if ( dpwszFamilyName )
    goto LABEL_31;
  return 0LL;
}
