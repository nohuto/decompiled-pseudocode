/*
 * XREFs of ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z @ 0x14016DE10 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1@Z.c)
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z @ 0x14016DD1C (-fBlockExtEscape@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x14016DD70 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x14016DF04 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x14022DF70 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?bPrinter@XDCOBJ@@QEBAHXZ @ 0x140230C94 (-bPrinter@XDCOBJ@@QEBAHXZ.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140311298 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311C88 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepExtEscape(
        struct XDCOBJ *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6)
{
  char *v6; // r14
  __int64 v10; // rcx
  HDEV v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, char *, unsigned int, char *); // r10
  unsigned int v19; // ebx
  struct _SURFOBJ *v21; // rdx
  unsigned int v22; // eax
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  HDEV DeviceHdev; // rdx
  int v32; // [rsp+48h] [rbp-210h]
  HDEV v33; // [rsp+50h] [rbp-208h] BYREF
  __int64 v34; // [rsp+58h] [rbp-200h] BYREF
  int v35; // [rsp+60h] [rbp-1F8h]
  int v36; // [rsp+64h] [rbp-1F4h]
  struct _RECTL v37; // [rsp+70h] [rbp-1E8h] BYREF
  _BYTE v38[32]; // [rsp+80h] [rbp-1D8h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-1B8h]
  _BYTE v40[160]; // [rsp+F0h] [rbp-168h] BYREF
  __int128 v41; // [rsp+190h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+1A0h] [rbp-B8h]
  _BYTE v43[96]; // [rsp+1B0h] [rbp-A8h] BYREF

  v6 = a4;
  v10 = *(_QWORD *)this;
  v11 = *(HDEV *)(v10 + 48);
  v33 = v11;
  v12 = 0;
  if ( !*((_DWORD *)v11 + 3) && a2 != 4354 )
    return 0LL;
  v13 = *((unsigned int *)v11 + 650);
  v14 = 0;
  v32 = 0;
  if ( a2 == 8 )
  {
    if ( a3 >= 4 )
    {
      v32 = *(_DWORD *)a4;
      v35 = *(_DWORD *)a4;
      v14 = v35;
      if ( (unsigned int)(v35 - 4352) > 1 || (v13 & 8) == 0 )
        goto LABEL_5;
    }
    return 0LL;
  }
  if ( a2 - 4352 <= 1 )
  {
    if ( (v13 & 8) == 0 && !*(_DWORD *)(v10 + 32) )
      return iOpenGLExtEscape(this, a2, a3, a4, a5, a6);
    return 0LL;
  }
  if ( a2 == 4354 )
  {
    if ( !*(_DWORD *)(v10 + 32) )
      return iWndObjSetupExtEscape(this, 0x1102u, a3, a4, a5, a6);
    return 0LL;
  }
  if ( a2 == 3075 || a2 == 4124 && !(unsigned int)UserUnsafeIsCurrentProcessDwm(v10, 4354LL, v13) )
    return 0LL;
LABEL_5:
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v40, this);
  if ( (unsigned int)fBlockExtEscape(this) )
  {
LABEL_22:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
    return v12;
  }
  v15 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 32LL) )
    goto LABEL_7;
  if ( !(unsigned int)XDCOBJ::bPrinter(this) )
  {
    if ( !v26 )
      goto LABEL_22;
    v27 = *(_WORD *)(v26 + 100) == 3;
    goto LABEL_55;
  }
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 40) == *((_QWORD *)v11 + 223);
LABEL_55:
    if ( !v27 )
      goto LABEL_22;
  }
LABEL_7:
  v41 = 0LL;
  v42 = 0LL;
  v34 = 0LL;
  if ( a2 == 25 )
  {
    if ( *((int *)v11 + 452) < 0 )
    {
      DC::QuickInitXform(v15, &v37, 516LL);
      v34 = *(_QWORD *)&v37.left;
      if ( a3 != 20 )
        goto LABEL_22;
      v41 = *(_OWORD *)v6;
      LODWORD(v42) = *((_DWORD *)v6 + 4);
      *((_QWORD *)&v42 + 1) = &v34;
      v6 = (char *)&v41;
      a3 = 32;
    }
    v28 = *(_QWORD *)this;
    v29 = *(_QWORD *)(*(_QWORD *)this + 496LL);
    if ( v29 && (*(_DWORD *)(v29 + 112) & 0x2000000) != 0 && (a3 == 20 || *((int *)v11 + 452) < 0) )
    {
      v30 = *(_DWORD *)(v28 + 2132);
      *(_DWORD *)v6 -= *(_DWORD *)(v28 + 2128);
      *((_DWORD *)v6 + 1) -= v30;
    }
  }
  if ( a2 - 256 <= 0x2FE || a2 == 8 && (unsigned int)(v14 - 256) <= 0x2FE )
  {
    v22 = DoFontManagement(this, a2, a3, v6, a5, a6);
LABEL_34:
    v12 = v22;
    goto LABEL_22;
  }
  if ( a2 - 4119 <= 1 || a2 == 8 && (unsigned int)(v14 - 4119) <= 1 )
  {
    v22 = iCheckPassthroughImage(this, (struct PDEVOBJ *)&v33, a2, a3, v6, a5, a6);
    goto LABEL_34;
  }
  if ( (unsigned int)XDCOBJ::bValidSurf(this) && !a6 )
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 496LL) + 92LL);
  v16 = *(_QWORD *)this;
  v17 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
  if ( ((_DWORD)v11[10] & 0x20000) != 0 && a2 == 8 && (unsigned int)(v32 - 4352) <= 1 )
  {
    v37 = *(struct _RECTL *)(v16 + 1032);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v16 + 48), &v37, 0LL);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 496LL) == *((_QWORD *)v11 + 318) )
        v17 = (*((_QWORD *)DeviceHdev + 318) + 24LL) & -(__int64)(*((_QWORD *)DeviceHdev + 318) != 0LL);
      v11 = DeviceHdev;
      v33 = DeviceHdev;
    }
  }
  v18 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, unsigned int, char *))*((_QWORD *)v11 + 359);
  if ( !v18 )
    goto LABEL_22;
  if ( v17 )
  {
    v19 = v18(v17, a2, a3, v6, a5, a6);
LABEL_19:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
    return v19;
  }
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v43);
  SURFFAKEOBJ::SURFFAKEOBJ(
    (SURFFAKEOBJ *)v38,
    *(HDEV *)(*(_QWORD *)this + 48LL),
    *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
  if ( !v39 )
  {
    SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v38);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v43);
    goto LABEL_22;
  }
  v21 = (struct _SURFOBJ *)((v39 + 24) & ((unsigned __int128)-(__int128)v39 >> 64));
  if ( a2 != 17 || a3 < 2 )
  {
    if ( a2 == 33 && a3 >= 2 )
    {
      v23 = *(unsigned __int16 *)v6;
      v36 = v23;
      v24 = *(_DWORD *)(*(_QWORD *)this + 36LL);
      if ( v23 )
        v25 = v24 | 0x400;
      else
        v25 = v24 & 0xFFFFFBFF;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = v25;
      v19 = 1;
    }
    else
    {
      v19 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD, char *, unsigned int, char *))v11 + 359))(
              v39 + 24,
              a2,
              a3,
              v6,
              a5,
              a6);
    }
    SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v38);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v43);
    goto LABEL_19;
  }
  *(_DWORD *)(*(_QWORD *)this + 2112LL) = *(unsigned __int16 *)v6;
  PDEVOBJ::Escape((PDEVOBJ *)&v33, v21, 0x11u, a3, v6, a5, a6);
  SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v38);
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v43);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
  return 1LL;
}
