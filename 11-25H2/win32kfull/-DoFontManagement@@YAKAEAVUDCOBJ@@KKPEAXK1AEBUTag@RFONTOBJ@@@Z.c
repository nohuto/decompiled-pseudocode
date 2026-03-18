/*
 * XREFs of ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1403270C8
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400AFFB0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x140169FA8 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?bUMPD@UDCOBJ@@QEBA@XZ @ 0x140187BB0 (-bUMPD@UDCOBJ@@QEBA@XZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1401D3E88 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1401D3F50 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___ @ 0x1401F18A4 (wil--scope_exit__NtGdiSetPUMPDOBJ_--_2_--_lambda_1___.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall DoFontManagement(
        struct UDCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6)
{
  size_t v7; // rdi
  void *v10; // rbx
  __int64 v11; // r8
  const struct RFONTOBJ::Tag *v12; // r9
  __int64 (__fastcall *v13)(__int64, _QWORD *, __int64, _QWORD, unsigned __int16 *, unsigned int, void *); // r13
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *v16; // rcx
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // r9
  bool v20; // zf
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rbx
  void *v23; // rax
  __int64 v24; // rcx
  _QWORD *v26; // [rsp+40h] [rbp-178h] BYREF
  void **v27; // [rsp+48h] [rbp-170h] BYREF
  char v28; // [rsp+50h] [rbp-168h]
  _QWORD v29[2]; // [rsp+58h] [rbp-160h] BYREF
  void *v30; // [rsp+68h] [rbp-150h]
  _BYTE v31[32]; // [rsp+70h] [rbp-148h] BYREF
  int v32; // [rsp+90h] [rbp-128h]
  _BYTE v33[32]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-F8h]
  _BYTE v35[96]; // [rsp+110h] [rbp-A8h] BYREF

  v7 = a3;
  v10 = a6;
  v30 = a6;
  v29[0] = 0LL;
  v26 = v29;
  wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___((__int64)&v27, &v26);
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, _QWORD, unsigned __int16 *, unsigned int, void *))(v11 + 3056);
  if ( !v13 )
    goto LABEL_31;
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
      v14 = *(_QWORD *)(v11 + 1784);
    else
      v14 = 0LL;
    v15 = v13(v14, 0LL, 8LL, (unsigned int)v7, a4, 0, 0LL);
    if ( !v28 )
      return v15;
    v16 = *v27;
    goto LABEL_40;
  }
  v26 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v26, a1, 0, 2u, v12);
  v17 = v26;
  if ( v26 )
  {
    v32 = 0;
    if ( a2 == 514 )
    {
      v18 = (unsigned __int64)(int)v7 >> 1;
      if ( (unsigned int)UDCOBJ::bUMPD(a1) )
      {
        if ( (unsigned int)v7 > 0x2710000
          || (v21 = (unsigned __int16 *)PALLOCNOZ(v7, 1886221383LL), v22 = v21, (v29[1] = v21) == 0LL) )
        {
LABEL_12:
          CAutoTGO::vUnguard((CAutoTGO *)v31);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
          v20 = v28 == 0;
          goto LABEL_32;
        }
        memmove(v21, a4, v7);
      }
      else
      {
        v22 = a4;
      }
      LODWORD(v7) = 4 * v18;
      if ( (unsigned int)v18 > 0x9C4000 )
        v23 = 0LL;
      else
        v23 = (void *)PALLOCMEM(v7, 1835426887LL);
      v29[0] = v23;
      if ( !v23 )
      {
        if ( v22 != a4 )
          Win32FreePool(v22);
        goto LABEL_12;
      }
      CAutoTGO::vGuard((CAutoTGO *)v31, v23, Win32FreePool, v19);
      if ( (int)v18 > 1 )
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v26, v22 + 1, v18 - 1, (unsigned int *)(v29[0] + 4LL), 0, 0);
      *(_DWORD *)v29[0] = *v22;
      if ( v22 != a4 )
        Win32FreePool(v22);
      a4 = (unsigned __int16 *)v29[0];
      v17 = v26;
      v10 = v30;
    }
    v24 = (*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL);
    if ( v24 )
    {
      v15 = v13(v24, v17, a2, (unsigned int)v7, a4, a5, v10);
    }
    else
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v35);
      SURFFAKEOBJ::SURFFAKEOBJ(
        (SURFFAKEOBJ *)v33,
        *(HDEV *)(*(_QWORD *)a1 + 48LL),
        *(struct DHPDEV__ **)(*(_QWORD *)a1 + 24LL));
      if ( !v34 )
      {
        SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v33);
        ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v35);
        CAutoTGO::vUnguard((CAutoTGO *)v31);
        goto LABEL_30;
      }
      v15 = v13((v34 + 24) & -(__int64)(v34 != 0), v26, a2, (unsigned int)v7, a4, a5, v10);
      SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v33);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v35);
    }
    CAutoTGO::vUnguard((CAutoTGO *)v31);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    if ( !v28 )
      return v15;
    v16 = *v27;
LABEL_40:
    if ( v16 )
      Win32FreePool(v16);
    return v15;
  }
LABEL_30:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
LABEL_31:
  v20 = v28 == 0;
LABEL_32:
  if ( !v20 && *v27 )
    Win32FreePool(*v27);
  return 0LL;
}
