/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140327DC8
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1401D3E88 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1401D3F50 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x140267ADC (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1403130D0 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct XDCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        _DWORD *a5,
        unsigned int a6,
        void *a7)
{
  _DWORD *v10; // r11
  void *v11; // r8
  int v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rbx
  Gre::Base *XlateObject; // rax
  Gre::Base *v19; // rbx
  __int64 v20; // rcx
  _DWORD *v21; // r14
  __int64 v23; // [rsp+30h] [rbp-178h]
  __int64 v24; // [rsp+38h] [rbp-170h]
  __int64 v25; // [rsp+40h] [rbp-168h]
  __int64 v27; // [rsp+68h] [rbp-140h]
  Gre::Base *v28; // [rsp+70h] [rbp-138h] BYREF
  __int64 v29; // [rsp+78h] [rbp-130h] BYREF
  int v30; // [rsp+80h] [rbp-128h]
  int v31; // [rsp+88h] [rbp-120h]
  _BYTE v32[32]; // [rsp+90h] [rbp-118h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-F8h]
  _BYTE v34[96]; // [rsp+100h] [rbp-A8h] BYREF

  v10 = a5;
  v11 = a7;
  v12 = 0;
  v13 = 0;
  if ( a3 == 8 )
  {
    v31 = *a5;
    if ( v31 == 4119 )
      v14 = XDCOBJ::bSupportsJPEG(this);
    else
      v14 = XDCOBJ::bSupportsPNG(this);
    if ( v14 && *(_QWORD *)(*(_QWORD *)a2 + 3288LL) )
      return 1;
    return v13;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3288LL) )
    return v13;
  v15 = a6;
  if ( a6 < 4 || !a7 )
    return (unsigned int)-1;
  v16 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  if ( v16 )
    v27 = *(_QWORD *)(v16 + 128);
  else
    v27 = 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  v30 = 0;
  v29 = 0LL;
  v28 = 0LL;
  if ( (a3 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (a3 != 4120 || !(unsigned int)XDCOBJ::bSupportsPNG(this)) )
  {
    goto LABEL_23;
  }
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v29, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    v11 = a7;
    v15 = a6;
    v10 = a5;
    goto LABEL_23;
  }
  LODWORD(v25) = 0xFFFFFF;
  LODWORD(v24) = 0;
  LODWORD(v23) = 0;
  XlateObject = (Gre::Base *)CreateXlateObject(
                               *(void **)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 248LL),
                               *(_DWORD *)(*(_QWORD *)this + 120LL),
                               v29,
                               v27,
                               v17,
                               v17,
                               v23,
                               v24,
                               v25,
                               0);
  v28 = XlateObject;
  v11 = a7;
  v15 = a6;
  v10 = a5;
  if ( !XlateObject )
  {
    v13 = -1;
LABEL_23:
    v19 = 0LL;
    goto LABEL_24;
  }
  v19 = XlateObject;
LABEL_24:
  if ( v19 )
  {
    v20 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
    if ( v20 )
    {
      v13 = 1;
      LOBYTE(v12) = (*(unsigned int (__fastcall **)(__int64, Gre::Base *, _QWORD, bool, int, _DWORD *, unsigned int, void *))(*(_QWORD *)a2 + 3288LL))(
                      v20,
                      v19,
                      0LL,
                      a3 != 4119,
                      a4,
                      v10,
                      v15,
                      v11) != 0;
      v21 = a7;
    }
    else
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
      SURFFAKEOBJ::SURFFAKEOBJ(
        (SURFFAKEOBJ *)v32,
        *(HDEV *)(*(_QWORD *)this + 48LL),
        *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
      v21 = a7;
      if ( v33 )
      {
        v13 = 1;
        LOBYTE(v12) = (*(unsigned int (__fastcall **)(__int64, Gre::Base *, _QWORD, bool, int, _DWORD *, unsigned int, void *))(*(_QWORD *)a2 + 3288LL))(
                        (v33 + 24) & -(__int64)(v33 != 0),
                        v19,
                        0LL,
                        a3 != 4119,
                        a4,
                        a5,
                        a6,
                        a7) != 0;
      }
      else
      {
        v13 = -1;
      }
      SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v32);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
    }
    *v21 = v12;
  }
  EXLATEOBJ::vAltUnlock(&v28, (__int64)a2, (__int64)v11);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v29);
  return v13;
}
