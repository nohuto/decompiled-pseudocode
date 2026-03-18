/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x140327194 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140102470 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1401F8F14 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x14020A220 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x140246794 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x140260378 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, HDEV a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // r13d
  __int64 result; // rax
  unsigned int i; // r14d
  struct _IFIMETRICS *v9; // r15
  struct _FD_GLYPHSET *v10; // rdi
  struct _FD_GLYPHSET *v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  struct _FD_GLYPHSET *v13[2]; // [rsp+50h] [rbp-10h] BYREF
  HDEV v14; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp+58h] BYREF

  v14 = a2;
  v5 = 0;
  v6 = (_DWORD)a2[10] & 0x8000;
  v12 = 0LL;
  v15 = 0LL;
  if ( !a3 || (result = PFFMEMOBJ::bAllocPFEData(this, a3), (_DWORD)result) )
  {
    for ( i = 1; i <= a3; ++i )
    {
      v9 = (struct _IFIMETRICS *)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *))v14 + 361))(
                                   *(_QWORD *)(*(_QWORD *)this + 104LL),
                                   0LL,
                                   i,
                                   &v12);
      if ( !v9 )
      {
        EngSetLastError(0x3EBu);
        return v5;
      }
      if ( v6 )
      {
        v10 = 0LL;
        v15 = 0LL;
      }
      else
      {
        v11 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                       this,
                                       *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                                       0LL,
                                       i,
                                       3u,
                                       &v15);
        v10 = v11;
        if ( !v11 )
        {
          EngSetLastError(0x3EBu);
LABEL_18:
          if ( v9->jWinCharSet == 2 )
          {
            if ( !v10 )
              goto LABEL_25;
            if ( (v10->flAccel & 0x10) != 0 )
            {
              Win32FreePool(v10);
LABEL_25:
              if ( *((_QWORD *)v14 + 377) )
                PDEVOBJ::Free((PDEVOBJ *)&v14, v9, v12);
              return v5;
            }
          }
          if ( v10 && *((_QWORD *)v14 + 377) )
            PDEVOBJ::Free((PDEVOBJ *)&v14, v10, v15);
          goto LABEL_25;
        }
        if ( v9->jWinCharSet == 2 )
        {
          v13[0] = 0LL;
          if ( bExtendGlyphSet(&v11, v13) )
          {
            if ( *((_QWORD *)v14 + 377) )
              PDEVOBJ::Free((PDEVOBJ *)&v14, v11, v15);
            v10 = v13[0];
          }
          else
          {
            v10 = v11;
          }
        }
      }
      if ( !(unsigned int)PFFMEMOBJ::bAddEntry((struct PFF **)this, i, v10, v15, v9, v12, 0LL, 0LL) )
        goto LABEL_18;
    }
    if ( a3 )
    {
      FHMEMOBJ::FHMEMOBJ(v13, *(_QWORD *)this + 112LL, 0LL, a3);
      FHMEMOBJ::FHMEMOBJ(v13, *(_QWORD *)this + 120LL, 1LL, a3);
      FHMEMOBJ::FHMEMOBJ(v13, *(_QWORD *)this + 128LL, 2LL, a3);
    }
    return 1;
  }
  return result;
}
