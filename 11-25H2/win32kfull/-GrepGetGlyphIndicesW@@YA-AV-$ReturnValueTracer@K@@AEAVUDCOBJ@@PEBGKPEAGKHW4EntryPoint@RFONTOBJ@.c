/*
 * XREFs of ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x140194714
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401B6AB0 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x14031172C (-GrepGetCharacterPlacementW@@YAKAEAVUDCOBJ@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400AFFB0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 */

_DWORD *__fastcall GrepGetGlyphIndicesW(
        _DWORD *a1,
        struct UDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  _WORD *v8; // rbx
  int v11; // edi
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int16 v14; // r15
  unsigned int *v15; // rsi
  unsigned int v16; // r13d
  int v17; // ecx
  unsigned int *v18; // rcx
  __int16 v19; // ax
  unsigned int *v21; // rcx
  __int16 v22; // ax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+74h] [rbp+Ch]
  unsigned __int16 *v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v8 = (_WORD *)a5;
  v23 = a8;
  v11 = -1;
  v12 = a5 + 2LL * a4;
  v24 = *(unsigned __int16 *)(*(_QWORD *)a2 + 12LL);
  a5 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&a5, a2, 0, 2u, (const struct RFONTOBJ::Tag *)&v23);
  if ( a5 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a5 + 120) + 32LL);
    v14 = *(unsigned __int8 *)(v13 + 108);
    if ( a4 )
    {
      if ( 4 * a4 )
      {
        v15 = (unsigned int *)Win32AllocPoolZInit(4 * a4, 2037147463LL);
        if ( v15 )
        {
          v16 = a6;
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&a5, v25, a4, v15, a6, a7);
          v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 120) + 16LL) + 4LL);
          if ( (v17 & 6) != 0 )
          {
            if ( (v17 & 2) != 0 && v14 )
            {
              if ( (unsigned __int64)v8 < v12 )
              {
                v21 = v15;
                do
                {
                  v22 = *(_WORD *)v21;
                  if ( *(_WORD *)v21 != 0xFFFF || v16 != 1 )
                    v22 += v14;
                  *v8 = v22;
                  ++v21;
                  ++v8;
                }
                while ( (unsigned __int64)v8 < v12 );
              }
            }
            else if ( (unsigned __int64)v8 < v12 )
            {
              v18 = v15;
              do
              {
                v19 = *(_WORD *)v18++;
                *v8++ = v19;
              }
              while ( (unsigned __int64)v8 < v12 );
            }
            v11 = a4;
          }
          Win32FreePool(v15);
        }
      }
    }
    else if ( *(_DWORD *)(v13 + 4) <= 8u )
    {
      v11 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(v13 + 200);
    }
  }
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v11);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
  return a1;
}
