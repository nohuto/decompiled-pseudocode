/*
 * XREFs of ?vInitSimple@ESTROBJ@@QEAAXPEBGJAEAVDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1403356D8
 * Callers:
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x140335038 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vInitSimple(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct DCOBJ *a4,
        struct RFONTOBJ *a5)
{
  struct RFONTOBJ *v5; // rdi
  struct _GLYPHPOS *v9; // rax
  struct _GLYPHPOS *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // r11d
  __int64 v16; // r10
  int v17; // eax
  int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v5 = a5;
  *((_QWORD *)this + 7) = a5;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  v9 = (struct _GLYPHPOS *)AllocFreeTmpBuffer(32LL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)this + 58) |= 1u;
    *((_QWORD *)this + 8) = v9;
    v11 = *(_QWORD *)v5;
    v18 = 0;
    *((_DWORD *)this + 1) = *(_DWORD *)(v11 + 268) & 0x71 | 2;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v5, (struct RFONTOBJ *)1, v9, a2, &v18, a4, this) )
    {
      if ( v18 )
      {
        v12 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v12;
      }
      v10->ptl.x = 0;
      v10->ptl.y = *(_DWORD *)(*(_QWORD *)v5 + 344LL);
      v13 = (*((_DWORD *)this + 58) & 0x1400) == 0;
      v14 = *(_DWORD *)(*(_QWORD *)v5 + 304LL);
      *((_DWORD *)this + 2) = v14;
      if ( v13 && v14 )
      {
        *((_DWORD *)this + 3) = 0;
        if ( v14 > 0x7FFFFFFF )
          return;
        *((_DWORD *)this + 5) = v14;
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
        v10->ptl.y = *((_DWORD *)ESTROBJ::GetLinkedRfontOnIndex(this, 0, v5) + 86);
        v17 = *(_DWORD *)(v16 + 20) + 15;
        *((_DWORD *)this + 3) = v15 >> 4;
        *((_DWORD *)this + 5) = v17 >> 4;
      }
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 6) = *(_DWORD *)(*(_QWORD *)v5 + 348LL);
      if ( (*(_DWORD *)(*(_QWORD *)v5 + 12LL) & 0x10000000) != 0 )
      {
        --*((_DWORD *)this + 3);
        ++*((_DWORD *)this + 5);
      }
      *((_DWORD *)this + 58) |= 4u;
    }
  }
}
