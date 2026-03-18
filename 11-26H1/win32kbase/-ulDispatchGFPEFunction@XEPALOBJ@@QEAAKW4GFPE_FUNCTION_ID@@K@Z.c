/*
 * XREFs of ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590
 * Callers:
 *     ulGetMatchingIndexFromColorref @ 0x140032970 (ulGetMatchingIndexFromColorref.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1400FC3AC (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1400FC3E0 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1400FC970 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

unsigned int __fastcall XEPALOBJ::ulDispatchGFPEFunction(struct PALETTE **a1, int a2, unsigned int a3)
{
  struct tagPALETTEENTRY v3; // ebx
  unsigned int result; // eax
  struct PALETTE *v5; // r9
  __int64 v6; // r10
  __int64 peRed; // rcx
  unsigned __int8 *v8; // rdi
  __int64 SessionState; // rax
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // r14
  unsigned int v12; // r9d
  unsigned __int8 *v13; // r11
  unsigned __int8 *v14; // r10
  unsigned int v15; // edx
  unsigned int v16; // r8d
  _DWORD *v17; // r8
  struct PALETTE *v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = (struct tagPALETTEENTRY)a3;
  if ( a2 == 6 )
    return a3 & 0xFF00 | ((unsigned __int8)a3 << 16) | BYTE2(a3);
  switch ( a2 )
  {
    case 1:
      return ulIndexedGetMatchFromPalentry(*a1, a3);
    case 2:
      v5 = *a1;
      if ( HIBYTE(a3) == 2 )
      {
        v16 = *((_DWORD *)v5 + 7);
        peRed = v3.peRed;
        if ( v3.peRed >= v16 )
          peRed = v3.peRed % v16;
      }
      else
      {
        v6 = *((_QWORD *)v5 + 14);
        for ( peRed = v6; ; peRed += 4LL )
        {
          if ( peRed == v6 + 4LL * *((unsigned int *)v5 + 7) )
            goto LABEL_11;
          if ( (*(_DWORD *)peRed & 0xFFFFFF) == (a3 & 0xFFFFFF) )
            break;
        }
        peRed = (peRed - v6) >> 2;
      }
      if ( (_DWORD)peRed != -1 )
        return peRed;
LABEL_11:
      v19 = v5;
      if ( *((_DWORD *)v5 + 7) )
      {
        v8 = 0LL;
        SessionState = W32GetSessionState(peRed);
        v10 = (unsigned __int8 *)&unk_1402660D0;
        if ( v19 != *(struct PALETTE **)(*(_QWORD *)(SessionState + 88) + 3872LL) )
          v10 = (unsigned __int8 *)*((_QWORD *)v19 + 14);
        v11 = v10;
        v12 = 196608;
        v13 = &v10[4 * *((unsigned int *)v19 + 7)];
        do
        {
          v14 = v8;
          v15 = (unsigned __int16)word_140265ECE[*v10 - (unsigned __int64)v3.peRed]
              + (unsigned __int16)word_140265ECE[v10[2] - (unsigned __int64)BYTE2(a3)]
              + (unsigned __int16)word_140265ECE[v10[1] - (unsigned __int64)BYTE1(a3)];
          if ( v15 < v12 )
          {
            v8 = v10;
            if ( !v15 )
              break;
          }
          v8 = v10;
          if ( v15 >= v12 )
            v8 = v14;
          v10 += 4;
          if ( v15 >= v12 )
            v15 = v12;
          v12 = v15;
        }
        while ( v10 < v13 );
        LODWORD(peRed) = (v8 - v11) >> 2;
        return peRed;
      }
      result = XEPALOBJ::ulGetMatchFromPalentry((ULONG_PTR *)&v19, v3);
      break;
    case 3:
      return ((a3 & 0xF8) << 8) | ((a3 & 0xFC00 | (a3 >> 14) & 0x3E0) >> 5);
    case 4:
      return ((a3 & 0xF8) << 7) | ((a3 & 0xF800 | (a3 >> 13) & 0x7C0) >> 6);
    case 5:
      v17 = (_DWORD *)*((_QWORD *)*a1 + 14);
      return *v17 & (*(unsigned int *)&v3 >> v17[3] << v17[6]) | v17[1] & (*(unsigned int *)&v3 >> v17[4] << v17[7]) | v17[2] & (*(unsigned int *)&v3 >> v17[5] << v17[8]);
    case 7:
      return (unsigned int)v3;
    case 8:
      return a3 & 0xFFFFFF;
    default:
      EngBugCheckEx(0x164u, 0xCuLL, (ULONG_PTR)*a1, a2, 9uLL);
      return result;
  }
  return result;
}
