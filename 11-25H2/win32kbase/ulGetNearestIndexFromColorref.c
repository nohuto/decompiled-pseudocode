/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x140090720
 * Callers:
 *     GreGetNearestColor @ 0x14008EEF0 (GreGetNearestColor.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1400912D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x140090B94 (-ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x140090C20 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x140090F38 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1400927D0 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D7EE0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     EngBugCheckEx @ 0x1401C7590 (EngBugCheckEx.c)
 */

__int64 __fastcall ulGetNearestIndexFromColorref(ULONG_PTR a1, __int64 a2, tagPALETTEENTRY a3, unsigned int a4)
{
  __int64 SessionState; // rax
  __int64 v7; // rsi
  unsigned int v8; // eax
  ULONG_PTR v9; // r9
  unsigned int v10; // r8d
  int v11; // eax
  _DWORD *v14; // r9
  tagPALETTEENTRY NearestFromPalentry; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR P2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF
  tagPALETTEENTRY v21; // [rsp+70h] [rbp+30h]

  v20 = a2;
  P2 = a1;
  SessionState = W32GetSessionState(a1);
  v21 = a3;
  v7 = *(_QWORD *)(SessionState + 88);
  if ( !P2 || (*(_DWORD *)(P2 + 24) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
    {
      if ( !v20 )
        return 0LL;
      v21.peFlags = 0;
      if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
      {
        NearestFromPalentry = v21;
        if ( *(unsigned int *)&v21 >= *(_DWORD *)(v20 + 28) )
          NearestFromPalentry = 0;
      }
      else
      {
        NearestFromPalentry = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v20, v21, a4);
      }
      if ( (unsigned int)XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v20) )
        goto LABEL_54;
      if ( !P2 )
        goto LABEL_59;
      v16 = *(_QWORD *)(v20 + 80);
      if ( v16 )
        return *(unsigned __int8 *)(*(unsigned int *)&NearestFromPalentry + v16 + 4);
      if ( !P2 )
      {
LABEL_59:
        v17 = *(_QWORD *)(v20 + 72);
        if ( v17 )
          return *(unsigned __int8 *)(*(unsigned int *)&NearestFromPalentry + v17 + 4);
      }
      a3 = *(tagPALETTEENTRY *)(*(_QWORD *)(v20 + 112) + 4LL * *(unsigned int *)&NearestFromPalentry);
      v21 = a3;
      if ( a3.peFlags == 2 )
        return a3.peRed;
    }
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed;
    v21.peFlags = 0;
    NearestFromPalentry = v21;
    if ( v21 == 0xFFFFFF )
    {
      NearestFromPalentry = (tagPALETTEENTRY)19;
      goto LABEL_55;
    }
    if ( v21 )
    {
      v18 = *(_QWORD *)(v7 + 3768);
      NearestFromPalentry = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v18, v21, a4);
    }
LABEL_54:
    if ( *(unsigned int *)&NearestFromPalentry < 0xA )
      return *(unsigned int *)&NearestFromPalentry;
LABEL_55:
    *(_DWORD *)&NearestFromPalentry += 236;
    return *(unsigned int *)&NearestFromPalentry;
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
  {
    if ( v20 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v20 + 112)
                     + 4LL
                     * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(v20 + 28))));
LABEL_6:
      if ( !a4 )
        return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&P2, (struct tagPALETTEENTRY)v8);
      v9 = *(int *)(P2 + 96);
      if ( (int)v9 <= 5 )
      {
        if ( (_DWORD)v9 == 5 )
        {
          v14 = *(_DWORD **)(P2 + 112);
          v10 = v14[1] & (v8 >> v14[4] << v14[7]) | v14[2] & (v8 >> v14[5] << v14[8]);
          v11 = *v14 & (v8 >> v14[3] << v14[6]);
          return v11 | v10;
        }
        if ( (_DWORD)v9 )
        {
          switch ( (_DWORD)v9 )
          {
            case 1:
              return ulIndexedGetMatchFromPalentry((struct PALETTE *)P2, v8);
            case 2:
              return ulIndexedGetNearestFromPalentry((struct PALETTE *)P2, v8);
            case 3:
              v10 = (v8 & 0xFC00 | (v8 >> 14) & 0x3E0) >> 5;
              v11 = (v8 & 0xF8) << 8;
              return v11 | v10;
            case 4:
              v10 = (v8 & 0xF800 | (v8 >> 13) & 0x7C0) >> 6;
              v11 = (v8 & 0xF8) << 7;
              return v11 | v10;
          }
        }
LABEL_35:
        EngBugCheckEx(0x164u, 0xCuLL, P2, v9, 9uLL);
      }
      if ( (_DWORD)v9 == 6 )
      {
        v10 = ((unsigned __int8)v8 << 16) | BYTE2(v8);
        v11 = v8 & 0xFF00;
        return v11 | v10;
      }
      if ( (_DWORD)v9 != 7 )
      {
        if ( (_DWORD)v9 == 8 )
          return v8 & 0xFFFFFF;
        goto LABEL_35;
      }
      return v8;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)&a3 & 0x10FF0000) != 0x10FF0000 )
  {
    v21.peFlags = 0;
    v8 = (unsigned int)v21;
    goto LABEL_6;
  }
  return a3.peRed & (unsigned int)-((unsigned int)a3.peRed < *(_DWORD *)(P2 + 28));
}
