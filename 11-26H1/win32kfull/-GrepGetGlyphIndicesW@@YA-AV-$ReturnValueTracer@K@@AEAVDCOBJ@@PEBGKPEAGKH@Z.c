/*
 * XREFs of ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x14020CC00 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z @ 0x1403339C4 (-GrepGetCharacterPlacementW@@YAKAEAVDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@K@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

_DWORD *__fastcall GrepGetGlyphIndicesW(
        _DWORD *a1,
        struct XDCOBJ *a2,
        WCHAR *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  _WORD *v7; // rbx
  int v10; // edi
  _WORD *v11; // rbp
  __int64 v12; // rax
  __int16 v13; // r15
  unsigned int *v14; // rax
  unsigned int *v15; // rsi
  unsigned int *v16; // r13
  int v17; // eax
  __int16 v18; // ax
  unsigned int v20; // ecx
  __int16 v21; // ax

  v7 = (_WORD *)a5;
  a5 = 0LL;
  v10 = -1;
  v11 = &v7[a4];
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&a5, a2, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(a5);
  if ( a5 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a5 + 120) + 32LL);
    v13 = *(unsigned __int8 *)(v12 + 108);
    if ( a4 )
    {
      v14 = (unsigned int *)PALLOCMEM(4 * a4, 2037147463LL);
      v15 = v14;
      v16 = v14;
      if ( v14 )
      {
        RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&a5, a3, a4, v14, a6, a7);
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 120) + 16LL) + 4LL);
        if ( (v17 & 6) != 0 )
        {
          if ( (v17 & 2) != 0 && v13 )
          {
            if ( v7 < v11 )
            {
              v20 = a6;
              do
              {
                v21 = *(_WORD *)v15;
                if ( *(_WORD *)v15 != 0xFFFF || v20 != 1 )
                  v21 += v13;
                *v7 = v21;
                ++v15;
                ++v7;
              }
              while ( v7 < v11 );
            }
          }
          else
          {
            while ( v7 < v11 )
            {
              v18 = *(_WORD *)v15++;
              *v7++ = v18;
            }
          }
          v10 = a4;
        }
        Win32FreePool(v16);
      }
    }
    else if ( *(_DWORD *)(v12 + 4) <= 8u )
    {
      v10 = 0;
    }
    else
    {
      v10 = *(_DWORD *)(v12 + 200);
    }
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v10);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
  return a1;
}
