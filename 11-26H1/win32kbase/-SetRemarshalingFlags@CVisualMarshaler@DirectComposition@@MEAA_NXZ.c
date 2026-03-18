/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171570
 * Callers:
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140171510 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239070 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A600 (-SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AD30 (-SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AF10 (-SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023DF10 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E250 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140244D10 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rax
  int *v4; // rcx
  int *v5; // rdx
  _DWORD *v6; // rax
  char *v7; // rcx
  int *v8; // rcx
  char v9; // r8
  char *v10; // rax
  char v11; // dl
  int *v12; // rax
  int *v13; // rcx
  int *v14; // rdx
  int *v15; // rax
  int *v16; // rdx
  int *v17; // rcx
  int *v18; // r8
  char *v19; // rax
  int *v20; // rsi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 22) )
    *v2 |= 0x8000u;
  if ( *((float *)this + 18) == 0.0 && *((float *)this + 19) == 0.0 && *((float *)this + 20) == 0.0 )
  {
    v4 = (int *)((char *)this + 16);
  }
  else
  {
    *v2 |= 0x100u;
    v4 = (int *)((char *)this + 16);
  }
  if ( *((_QWORD *)this + 17) )
  {
    *v2 |= 0x200u;
    v5 = (int *)((char *)this + 16);
  }
  else
  {
    v5 = v4;
  }
  if ( *((_QWORD *)this + 18) )
    *v4 |= 0x400u;
  else
    v5 = v4;
  if ( *((_QWORD *)this + 19) )
    *v5 = *v4 | 0x800;
  if ( *((_QWORD *)this + 28) )
    *v5 |= 0x8000000u;
  v6 = (_DWORD *)((char *)this + 328);
  if ( *((_QWORD *)this + 29) )
    *v6 |= 1u;
  if ( *((_DWORD *)this + 60)
    || *((_DWORD *)this + 62)
    || *((_DWORD *)this + 61)
    || (v7 = (char *)this + 328, *((_DWORD *)this + 63)) )
  {
    *v6 |= 2u;
    v7 = (char *)this + 328;
  }
  if ( *((_DWORD *)this + 64) || (v6 = v7, *((_DWORD *)this + 66)) || *((_DWORD *)this + 65) || *((_DWORD *)this + 67) )
    *v6 |= 4u;
  v8 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 21) )
    *v8 |= 0x1000u;
  if ( *((_QWORD *)this + 20) )
    *v8 |= 0x2000u;
  v9 = *((_BYTE *)this + 324);
  v10 = (char *)this + 16;
  if ( (v9 & 0x40) == 0 )
  {
    *v8 |= 0x1000000u;
    v10 = (char *)this + 16;
  }
  if ( *((_DWORD *)this + 68) == -1
    && (v8 = (int *)v10, *((_DWORD *)this + 69) == -1)
    && *((_DWORD *)this + 70) == -1
    && *((_DWORD *)this + 71) == -1
    && *((_DWORD *)this + 72) == -1
    && (v11 = v9, *((_DWORD *)this + 73) == -1) )
  {
    v8 = (int *)((char *)this + 16);
  }
  else
  {
    *v8 |= 0x10000u;
    v11 = v9;
  }
  if ( (v9 & 0x10) != 0 || (v11 & 8) != 0 || (*((_BYTE *)this + 325) & 3) != 0 )
  {
    *v8 |= 0x20000u;
    v12 = (int *)((char *)this + 16);
  }
  else
  {
    v12 = v8;
  }
  if ( (v11 & 0x20) != 0 )
  {
    *v8 |= 0x40000u;
    v13 = (int *)((char *)this + 16);
  }
  else
  {
    v13 = v12;
  }
  if ( *((_DWORD *)this + 79) )
    *v12 |= 0x80000u;
  else
    v13 = v12;
  if ( (v11 & 2) != 0 )
  {
    v14 = (int *)((char *)this + 16);
    *v13 = *v12 | 0x100000;
  }
  else
  {
    v14 = v13;
  }
  v15 = v13;
  if ( *((_QWORD *)this + 27) )
  {
    *v13 |= 0x200000u;
    v15 = v14;
  }
  if ( *((float *)this + 21) != 0.0 || (v13 = v15, *((float *)this + 22) != 0.0) )
  {
    *v13 |= 0x400000u;
    v15 = v13;
  }
  if ( *((float *)this + 28) == 1.0 )
  {
    v16 = v15;
  }
  else
  {
    *v15 |= 0x800000u;
    v16 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 23) == 0.0 && *((float *)this + 24) == 0.0 && *((float *)this + 25) == 0.0 )
  {
    v17 = v16;
  }
  else
  {
    *v15 |= 0x2000000u;
    v17 = (int *)((char *)this + 16);
  }
  v18 = v16;
  if ( *((float *)this + 26) != 0.0 || (v18 = v17, *((float *)this + 27) != 0.0) )
  {
    v17 = v18;
    *v18 = *v16 | 0x4000000;
  }
  if ( (*((_BYTE *)this + 324) & 1) != 0 )
  {
    *v17 |= 0x10000000u;
    v19 = (char *)this + 16;
  }
  else
  {
    v19 = (char *)v17;
  }
  v20 = v17;
  if ( *((_DWORD *)this + 74) )
  {
    *v17 |= 0x20000000u;
    v20 = (int *)v19;
  }
  if ( *((float *)this + 29) != 0.0
    || (v17 = v20, *((float *)this + 30) != 0.0)
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0 )
  {
    *v17 |= 0x40000000u;
    v20 = v17;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*v20 & 0x7EFFBF00) != 0
    || (*((_DWORD *)this + 82) & 7) != 0 )
  {
    return 1;
  }
  return v1;
}
