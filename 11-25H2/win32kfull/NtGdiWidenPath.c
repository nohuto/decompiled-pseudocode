/*
 * XREFs of NtGdiWidenPath @ 0x1400E53B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A2A74 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     pathwide::EPATHOBJ_vBecome @ 0x1400A437C (pathwide--EPATHOBJ_vBecome.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ??1WIDENER@pathwide@@QEAA@XZ @ 0x1400A4F64 (--1WIDENER@pathwide@@QEAA@XZ.c)
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x1400E4FA8 (-vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6028 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E6190 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  const struct _LINEATTRS *v3; // rdi
  char v4; // di
  struct EPATHOBJ *v5; // rdx
  ULONG v6; // ecx
  struct _RECTFX v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-BCh]
  struct _RECTFX *v10; // [rsp+48h] [rbp-B8h]
  _BYTE v11[48]; // [rsp+90h] [rbp-70h] BYREF
  DC *v12[14]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v13[816]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v14[160]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v15[152]; // [rsp+500h] [rbp+400h] BYREF
  _BYTE v16[168]; // [rsp+598h] [rbp+498h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    v6 = 87;
LABEL_17:
    EngSetLastError(v6);
    goto LABEL_18;
  }
  if ( !(unsigned int)DC::bInactive(v12[0]) )
  {
    v6 = 1003;
    goto LABEL_17;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, (struct XDCOBJ *)v12);
  if ( !v10 )
    goto LABEL_4;
  DC::QuickInitXform(v12[0], v7, 516LL);
  v1 = 1;
  v3 = (const struct _LINEATTRS *)((char *)v12[0] + 208);
  if ( (*((_DWORD *)v12[0] + 52) & 1) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v12[0] + 18) + 40LL) & 0x800) == 0 )
    {
      EngSetLastError(0x3EBu);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
      goto LABEL_18;
    }
    v3 = (const struct _LINEATTRS *)&unk_1403514E0;
  }
  *(_OWORD *)&v7[0].xRight = 0LL;
  if ( pathwide::bComputeWidenedBounds((pathwide *)&v7[0].xRight, v10 + 3, v7, (const struct EXFORMOBJ *)v3) )
  {
    v10[3] = *(struct _RECTFX *)&v7[0].xRight;
    pathwide::WIDENER::WIDENER((pathwide::WIDENER *)v13, (struct EPATHOBJ *)v8, (const struct MATRIX **)v7, v3);
    if ( (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v16)
      && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v15)
      && (unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)v14) )
    {
      v4 = 1;
      pathwide::EPATHOBJ_vBecome((__int64)v8, (__int64)v16);
      v9 = EPATHOBJ::cTotalCurves((EPATHOBJ *)v8);
    }
    else
    {
      v4 = 0;
    }
    pathwide::WIDENER::~WIDENER((pathwide::WIDENER *)v13);
    if ( v4 )
    {
      pathwide::vReComputeBounds((pathwide *)v8, v5);
      goto LABEL_5;
    }
LABEL_4:
    EngSetLastError(8u);
    v1 = 0;
LABEL_5:
    EPATHOBJ::vUnlock((EPATHOBJ *)v8);
    CAutoTGO::vUnguard((CAutoTGO *)v11);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
    return v1;
  }
  EngSetLastError(0x216u);
  EPATHOBJ::vUnlock((EPATHOBJ *)v8);
  CAutoTGO::vUnguard((CAutoTGO *)v11);
LABEL_18:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return 0LL;
}
