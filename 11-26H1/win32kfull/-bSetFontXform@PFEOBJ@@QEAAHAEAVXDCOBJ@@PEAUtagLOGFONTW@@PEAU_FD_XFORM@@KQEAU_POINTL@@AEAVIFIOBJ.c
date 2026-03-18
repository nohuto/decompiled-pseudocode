/*
 * XREFs of ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1400C2DD8
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x14010DA74 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z @ 0x1400C19DC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400C2ED0 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z.c)
 */

__int64 __fastcall PFEOBJ::bSetFontXform(
        PFEOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGFONTW *a3,
        struct _FD_XFORM *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        struct IFIOBJ *a7,
        int a8)
{
  __int64 v11; // rax
  struct XDCOBJ *v12; // r9
  struct IFIOBJ *v13; // rdi
  int NtoD_Win31; // eax
  FLOATL eYX; // edx
  FLOATL eYY; // r8d
  PFEOBJ *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = this;
  DC::QuickInitXform(*(_QWORD *)a2, &v18, 516LL);
  v11 = *(_QWORD *)a2;
  v12 = a2;
  v13 = a7;
  if ( *(_DWORD *)(*(_QWORD *)(v11 + 976) + 208LL) == 1 )
    NtoD_Win31 = bGetNtoD_Win31(a4, a3, a7, v12, a5, a6, a8);
  else
    NtoD_Win31 = bGetNtoD(a4, a3, a7, v12, a6);
  if ( !NtoD_Win31 )
    return 0LL;
  eYX = a4->eYX;
  if ( eYX != 0.0 )
  {
    LODWORD(eYX) ^= 0x80000000;
    a4->eYX = eYX;
  }
  eYY = a4->eYY;
  if ( eYY != 0.0 )
  {
    LODWORD(eYY) ^= 0x80000000;
    a4->eYY = eYY;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 48LL) & 0x1000000) != 0 )
  {
    a4->eXX = eYY;
    a4->eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(a4->eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  return 1LL;
}
