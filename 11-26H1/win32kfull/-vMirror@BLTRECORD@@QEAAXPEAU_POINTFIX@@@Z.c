/*
 * XREFs of ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1402909EC
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x14031E028 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x14031E140 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E398 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // rbx
  FIX *p_y; // rsi
  FIX *v5; // r10
  struct _POINTFIX *v6; // r11
  FIX *v7; // rdi
  struct _POINTFIX *v8; // r8
  FIX *v9; // r9
  FIX x; // ecx
  FIX v11; // eax
  FIX v12; // ecx
  FIX v13; // eax
  FIX v14; // ecx
  FIX v15; // eax
  FIX v16; // ecx
  FIX v17; // ecx
  FIX v18; // eax
  FIX v19; // ecx
  FIX v20; // eax
  FIX v21; // ecx
  FIX v22; // eax
  FIX v23; // ecx

  v2 = a2 + 1;
  p_y = &a2[1].y;
  v5 = &a2->y;
  v6 = a2 + 3;
  v7 = &a2[3].y;
  v8 = a2 + 2;
  v9 = &a2[2].y;
  if ( (*((_DWORD *)this + 49) & 8) != 0 )
  {
    x = v2->x;
    v2->x = a2->x;
    v11 = *v5;
    a2->x = x;
    v12 = *p_y;
    *p_y = v11;
    v13 = v8->x;
    *v5 = v12;
    v14 = v6->x;
    v6->x = v13;
    v15 = *v9;
    v8->x = v14;
    v16 = *v7;
    *v7 = v15;
    *v9 = v16;
  }
  if ( (*((_DWORD *)this + 49) & 0x10) != 0 )
  {
    v17 = v8->x;
    v8->x = a2->x;
    v18 = *v5;
    a2->x = v17;
    v19 = *v9;
    *v9 = v18;
    v20 = v2->x;
    *v5 = v19;
    v21 = v6->x;
    v6->x = v20;
    v22 = *p_y;
    v2->x = v21;
    v23 = *v7;
    *v7 = v22;
    *p_y = v23;
  }
}
