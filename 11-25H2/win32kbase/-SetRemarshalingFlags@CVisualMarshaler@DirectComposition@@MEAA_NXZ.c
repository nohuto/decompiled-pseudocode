/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140130F60
 * Callers:
 *     ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140130EB0 (-SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140130F00 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022F510 (-SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022FF20 (-SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140230150 (-SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x140230280 (-SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140234E00 (-SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023ADE0 (-SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401314D0 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  int *v3; // rax
  int *v4; // rcx
  int *v5; // rcx
  char v6; // r8
  char *v7; // rax
  char *v8; // rax
  int *v9; // rdx
  int *v10; // rax
  int *v11; // rcx
  int *v12; // rax
  int *v13; // rcx
  int *v14; // rdx
  char *v15; // rax
  int *v16; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 18) != 0.0 || *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  v3 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x100u;
  v4 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 18) )
    *v3 |= 0x200u;
  else
    v4 = v3;
  if ( *((_QWORD *)this + 19) )
    *v4 = *v3 | 0x400;
  if ( *((_QWORD *)this + 28) )
    *v4 |= 0x4000000u;
  if ( *((_QWORD *)this + 29) )
    *((_DWORD *)this + 90) |= 4u;
  if ( *((_DWORD *)this + 60) || *((_DWORD *)this + 62) || *((_DWORD *)this + 61) || *((_DWORD *)this + 63) )
    *((_DWORD *)this + 90) |= 8u;
  *((_QWORD *)this + 39) = 0LL;
  if ( *((_QWORD *)this + 41) )
    *((_DWORD *)this + 90) |= 1u;
  *((_QWORD *)this + 42) = 0LL;
  if ( *((_QWORD *)this + 44) )
    *((_DWORD *)this + 90) |= 2u;
  v5 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 21) )
    *v5 |= 0x800u;
  if ( *((_QWORD *)this + 20) )
    *v5 |= 0x1000u;
  v6 = *((_BYTE *)this + 308);
  v7 = (char *)this + 16;
  if ( (v6 & 0x40) == 0 )
  {
    *v5 |= 0x800000u;
    v7 = (char *)this + 16;
  }
  if ( *((_DWORD *)this + 64) == -1
    && (v5 = (int *)v7, *((_DWORD *)this + 65) == -1)
    && *((_DWORD *)this + 66) == -1
    && *((_DWORD *)this + 67) == -1
    && *((_DWORD *)this + 68) == -1
    && *((_DWORD *)this + 69) == -1 )
  {
    v5 = (int *)((char *)this + 16);
  }
  else
  {
    *v5 |= 0x8000u;
  }
  if ( (v6 & 0x18) != 0 || (*((_BYTE *)this + 309) & 3) != 0 )
  {
    *v5 |= 0x10000u;
    v8 = (char *)this + 16;
  }
  else
  {
    v8 = (char *)v5;
  }
  if ( (v6 & 0x20) != 0 )
  {
    *v5 |= 0x20000u;
    v5 = (int *)v8;
  }
  if ( *((_DWORD *)this + 75) )
  {
    *v5 |= 0x40000u;
    v9 = (int *)((char *)this + 16);
  }
  else
  {
    v9 = v5;
  }
  if ( (v6 & 2) != 0 )
    *v5 |= 0x80000u;
  else
    v9 = v5;
  if ( *((_QWORD *)this + 27) )
  {
    *v9 = *v5 | 0x100000;
    v10 = (int *)((char *)this + 16);
  }
  else
  {
    v10 = v9;
  }
  v11 = v9;
  if ( *((float *)this + 21) != 0.0 || (v11 = v10, *((float *)this + 22) != 0.0) )
  {
    *v9 |= 0x200000u;
    v9 = v11;
  }
  if ( *((float *)this + 28) == 1.0 )
  {
    v12 = v9;
  }
  else
  {
    *v9 |= 0x400000u;
    v12 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 23) == 0.0 && *((float *)this + 24) == 0.0 && *((float *)this + 25) == 0.0 )
  {
    v13 = v12;
  }
  else
  {
    *v9 |= 0x1000000u;
    v13 = (int *)((char *)this + 16);
  }
  v14 = v12;
  if ( *((float *)this + 26) != 0.0 || (v14 = v13, *((float *)this + 27) != 0.0) )
  {
    v13 = v14;
    *v14 = *v12 | 0x2000000;
  }
  if ( (*((_BYTE *)this + 308) & 1) != 0 )
  {
    *v13 |= 0x8000000u;
    v15 = (char *)this + 16;
  }
  else
  {
    v15 = (char *)v13;
  }
  v16 = v13;
  if ( *((_DWORD *)this + 70) )
  {
    *v13 |= 0x10000000u;
    v16 = (int *)v15;
  }
  if ( *((float *)this + 29) != 0.0
    || (v13 = v16, *((float *)this + 30) != 0.0)
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0 )
  {
    *v13 |= 0x20000000u;
    v16 = v13;
  }
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*v16 & 0x3F7FDF80) != 0
    || (*((_DWORD *)this + 90) & 0xF) != 0 )
  {
    return 1;
  }
  return v1;
}
