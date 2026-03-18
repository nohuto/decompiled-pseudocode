/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1400D1DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x140017080 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1400D163C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D1B14 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D1B54 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1400D1B70 (FONTOBJ_cGetGlyphs.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x140337E20 (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, int *a4, ULONG64 a5)
{
  ULONG v6; // r15d
  int v8; // r12d
  struct _GRETHREAD *CurrentThread; // rax
  struct UMPDOBJ *v10; // rdi
  struct PFT *v11; // r14
  ULONG Glyphs; // ebx
  struct _GLYPHBITS **v13; // rsi
  struct _GLYPHBITS *v14; // rdx
  struct _GLYPHBITS *v15; // rax
  _QWORD *v16; // rdx
  PVOID ppvGlyph; // [rsp+38h] [rbp-C0h] BYREF
  int v19; // [rsp+40h] [rbp-B8h] BYREF
  int v20; // [rsp+48h] [rbp-B0h] BYREF
  UMPDOBJ *v21; // [rsp+50h] [rbp-A8h]
  _BYTE v22[32]; // [rsp+60h] [rbp-98h] BYREF
  UMPDOBJ *v23; // [rsp+80h] [rbp-78h]

  v6 = a2;
  v8 = a2;
  v20 = a2;
  ppvGlyph = 0LL;
  v19 = 0;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v22, CurrentThread);
  v10 = v23;
  v21 = v23;
  if ( v23 && (v11 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v23, a1)) != 0LL && (unsigned int)(v8 - 1) <= 1 )
  {
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (int *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v19, a4, 4uLL);
      a4 = &v19;
    }
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v20, v11);
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v20, v10, 0, 0, 0LL);
    Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v11, v6, 1u, (HGLYPH *)a4, &ppvGlyph);
    if ( Glyphs == 1 )
    {
      v13 = (struct _GLYPHBITS **)ppvGlyph;
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, &ppvGlyph, 0x40u) )
      {
        v14 = *v13;
        if ( *v13 )
        {
          if ( v8 == 1 )
            v15 = UMPDOBJ::CacheGlyphBits(v10, v14);
          else
            v15 = (struct _GLYPHBITS *)UMPDOBJ::CacheGlyphPath(v10, (struct _PATHOBJ *)v14);
          *(_QWORD *)ppvGlyph = v15;
          Glyphs = v15 != 0LL;
        }
      }
      else
      {
        Glyphs = 0;
      }
    }
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v20, v10, 0LL, 0LL, 0LL);
    if ( Glyphs )
    {
      v16 = (_QWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = ppvGlyph;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v20);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v22);
    return Glyphs;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v22);
    return 0LL;
  }
}
