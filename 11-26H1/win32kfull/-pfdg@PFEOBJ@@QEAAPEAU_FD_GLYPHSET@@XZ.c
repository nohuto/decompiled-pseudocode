/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z @ 0x140206DE8 (-GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400C3D54 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BM@@@YAXXZ @ 0x140102008 (--$GrepAcquireLockValidate@$0BM@@@YAXXZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x14020A220 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x140260378 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140294034 (--$GreReleaseSemaphoreExclusive@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402955B8 (--$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this, __int64 a2, __int64 a3)
{
  int v3; // r15d
  struct _FD_GLYPHSET *v4; // rsi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 SessionState; // rax
  __int64 v9; // r12
  HSEMAPHORE v10; // rbx
  __int64 v11; // rdi
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  int v15; // r15d
  __int64 (__fastcall *v16)(__int64, struct _FD_GLYPHSET *, _QWORD, __int64, unsigned __int64 *); // rsi
  ULONG_PTR *v17; // r12
  __int64 v18; // r13
  bool v19; // al
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR *v24; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-18h]
  struct _FD_GLYPHSET *v26; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+D0h] [rbp+58h] BYREF
  struct _FD_GLYPHSET *v28; // [rsp+D8h] [rbp+60h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = **this;
  v23[0] = v6;
  v7 = *(_QWORD *)(v6 + 96);
  v22 = v7;
  v27 = 0LL;
  SessionState = W32GetSessionState(this, a2, a3);
  v9 = *(_QWORD *)(SessionState + 96) + 4864LL;
  v21 = v9;
  v10 = *(HSEMAPHORE *)(*(_QWORD *)(SessionState + 96) + 20368LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<28>();
  if ( !(*this)[2] )
  {
    v15 = *(_DWORD *)(v7 + 40) & 0x8000;
    if ( v15 )
      GreReleaseSemaphoreExclusive<28,>(v9);
    LODWORD(v26) = *((_DWORD *)*this + 2);
    v28 = *(struct _FD_GLYPHSET **)(v6 + 88);
    v20 = *(_QWORD *)(v6 + 104);
    if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)v23) )
    {
      v16 = *(__int64 (__fastcall **)(__int64, struct _FD_GLYPHSET *, _QWORD, __int64, unsigned __int64 *))(*(_QWORD *)(v6 + 96) + 2896LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v24, (struct PFFOBJ *)v23);
      v4 = (struct _FD_GLYPHSET *)v16(v20, v28, (unsigned int)v26, 3LL, &v27);
      if ( v25 )
      {
        v17 = v24;
        v18 = v25;
        do
        {
          EngUnmapFontFileFD(*v17++);
          --v18;
        }
        while ( v18 );
        v9 = v21;
      }
    }
    v26 = v4;
    if ( v15 )
      GreAcquireSemaphore<28,>(v9);
    if ( !v4 )
      goto LABEL_23;
    if ( (*this)[2] )
    {
      v3 = 1;
      goto LABEL_2;
    }
    (*this)[2] = (__int64)v4;
    (*this)[3] = v27;
    if ( !v15 || *(_BYTE *)((*this)[4] + 44) != 2 || (v28 = 0LL, v19 = bExtendGlyphSet(&v26, &v28), v4 = v26, !v19) )
    {
LABEL_23:
      v3 = 0;
      goto LABEL_2;
    }
    v3 = 1;
    (*this)[2] = (__int64)v28;
  }
LABEL_2:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 34);
  if ( v3 && *(_QWORD *)(v7 + 3016) )
    PDEVOBJ::Free((PDEVOBJ *)&v22, v4, v27);
  v11 = (*this)[2];
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GlyphSet", v10);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
    {
      v13 = (*(_QWORD *)v12 & 0xFFFFFFFFEFFFFFFFuLL) == 0;
      *(_QWORD *)v12 &= ~0x10000000uLL;
      if ( v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v10);
  }
  return (struct _FD_GLYPHSET *)v11;
}
