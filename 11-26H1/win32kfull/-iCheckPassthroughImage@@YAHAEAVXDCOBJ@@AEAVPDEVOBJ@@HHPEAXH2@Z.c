/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140311298
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z @ 0x14016D63C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x14016DD70 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x14016DF04 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x14025B028 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x140264B58 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct XDCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        int *a5,
        unsigned int a6,
        void *a7)
{
  int v7; // r10d
  void *v10; // r8
  int v11; // edi
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rbx
  Gre::Base *v17; // r13
  Gre::Base *XlateObject; // rax
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  __int64 v22; // [rsp+30h] [rbp-178h]
  __int64 v23; // [rsp+38h] [rbp-170h]
  __int64 v24; // [rsp+40h] [rbp-168h]
  __int64 v27; // [rsp+68h] [rbp-140h]
  Gre::Base *v28; // [rsp+78h] [rbp-130h] BYREF
  __int64 v29; // [rsp+80h] [rbp-128h] BYREF
  int v30; // [rsp+88h] [rbp-120h]
  int v31; // [rsp+90h] [rbp-118h]
  _BYTE v32[32]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-E8h]
  _BYTE v34[96]; // [rsp+110h] [rbp-98h] BYREF

  v7 = a3;
  v10 = a7;
  v11 = 0;
  v12 = 0;
  if ( v7 == 8 )
  {
    v31 = *a5;
    if ( v31 == 4119 )
      v13 = XDCOBJ::bSupportsJPEG(this);
    else
      v13 = XDCOBJ::bSupportsPNG(this);
    if ( v13 && *(_QWORD *)(*(_QWORD *)a2 + 3288LL) )
      return 1;
  }
  else if ( *(_QWORD *)(*(_QWORD *)a2 + 3288LL) )
  {
    v14 = a6;
    if ( a6 >= 4 && a7 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)this + 496LL);
      if ( v15 )
        v27 = *(_QWORD *)(v15 + 128);
      else
        v27 = 0LL;
      v16 = *(_QWORD *)(*(_QWORD *)this + 88LL);
      v30 = 0;
      v29 = 0LL;
      v17 = 0LL;
      v28 = 0LL;
      if ( v7 == 4119 && (unsigned int)XDCOBJ::bSupportsJPEG(this)
        || v7 == 4120 && (unsigned int)XDCOBJ::bSupportsPNG(this) )
      {
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v29, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          LODWORD(v24) = 0xFFFFFF;
          LODWORD(v23) = 0;
          LODWORD(v22) = 0;
          XlateObject = (Gre::Base *)CreateXlateObject(
                                       *(void **)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 248LL),
                                       *(_DWORD *)(*(_QWORD *)this + 120LL),
                                       v29,
                                       v27,
                                       v16,
                                       v16,
                                       v22,
                                       v23,
                                       v24,
                                       0);
          v28 = XlateObject;
          v10 = a7;
          v7 = a3;
          v14 = a6;
          if ( XlateObject )
            v17 = XlateObject;
          else
            v12 = -1;
        }
        else
        {
          v10 = a7;
          v7 = a3;
          v14 = a6;
        }
      }
      if ( v17 )
      {
        v19 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
        if ( v19 )
        {
          v12 = 1;
          LOBYTE(v11) = (*(unsigned int (__fastcall **)(__int64, Gre::Base *, _QWORD, bool, int, int *, unsigned int, void *))(*(_QWORD *)a2 + 3288LL))(
                          v19,
                          v17,
                          0LL,
                          v7 != 4119,
                          a4,
                          a5,
                          v14,
                          v10) != 0;
          v20 = a7;
        }
        else
        {
          ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
          SURFFAKEOBJ::SURFFAKEOBJ(
            (SURFFAKEOBJ *)v32,
            *(HDEV *)(*(_QWORD *)this + 48LL),
            *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
          v20 = a7;
          if ( v33 )
          {
            v12 = 1;
            LOBYTE(v11) = (*(unsigned int (__fastcall **)(__int64, Gre::Base *, _QWORD, bool, int, int *, unsigned int, void *))(*(_QWORD *)a2 + 3288LL))(
                            (v33 + 24) & -(__int64)(v33 != 0),
                            v17,
                            0LL,
                            a3 != 4119,
                            a4,
                            a5,
                            a6,
                            a7) != 0;
          }
          else
          {
            v12 = -1;
          }
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v32);
          ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v34);
        }
        *v20 = v11;
      }
      EXLATEOBJ::vAltUnlock(&v28, (__int64)a2, (__int64)v10);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v29);
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v12;
}
