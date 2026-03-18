/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1400FC3E0
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreGetNearestColor @ 0x14003AA70 (GreGetNearestColor.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1400FC3AC (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1400FC860 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall ulGetNearestIndexFromColorref(_DWORD *a1, __int64 a2, struct tagPALETTEENTRY a3, int a4)
{
  __int64 SessionState; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int NearestFromPalentry; // ebx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  struct tagPALETTEENTRY v15; // [rsp+60h] [rbp+30h]

  v14 = a2;
  v13 = a1;
  SessionState = W32GetSessionState(a1);
  v15 = a3;
  v7 = *(_QWORD *)(SessionState + 88);
  if ( !v13 || (v13[6] & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
    {
      if ( !v14 )
        return 0;
      v15.peFlags = 0;
      if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
      {
        NearestFromPalentry = (unsigned int)v15;
        if ( *(unsigned int *)&v15 >= *(_DWORD *)(v14 + 28) )
          NearestFromPalentry = 0;
      }
      else
      {
        NearestFromPalentry = XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v14, v15, a4);
      }
      if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v14) )
        goto LABEL_33;
      if ( v13 )
        v11 = *(_QWORD *)(v14 + 80);
      else
        v11 = *(_QWORD *)(v14 + 72);
      if ( v11 )
        return *(unsigned __int8 *)(NearestFromPalentry + v11 + 4);
      a3 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(v14 + 112) + 4LL * NearestFromPalentry);
      v15 = a3;
      if ( a3.peFlags == 2 )
        return a3.peRed;
    }
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed;
    v15.peFlags = 0;
    NearestFromPalentry = (unsigned int)v15;
    if ( v15 == 0xFFFFFF )
    {
      NearestFromPalentry = 19;
      goto LABEL_34;
    }
    if ( v15 )
    {
      v12 = *(_QWORD *)(v7 + 3872);
      NearestFromPalentry = XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v12, v15, a4);
    }
LABEL_33:
    if ( NearestFromPalentry < 0xA )
      return NearestFromPalentry;
LABEL_34:
    NearestFromPalentry += 236;
    return NearestFromPalentry;
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)a3.peRed < v13[7] ? a3.peRed : 0;
    v15.peFlags = 0;
    v8 = (unsigned int)v15;
    goto LABEL_6;
  }
  if ( !v14 )
    return 0;
  v8 = *(unsigned int *)(*(_QWORD *)(v14 + 112)
                       + 4LL
                       * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(v14 + 28))));
LABEL_6:
  if ( a4 )
    return XEPALOBJ::ulDispatchGFPEFunction(&v13, (unsigned int)v13[24], v8);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v13, (struct tagPALETTEENTRY)v8);
}
