/*
 * XREFs of ?SetRemarshalingFlags@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022F740
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022F844 (-SetRemarshalingFlags@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CImageLegacyMilBrushMarshaler *this)
{
  char v2; // di
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = 0;
  v3 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 22) )
    v3 |= 0x200u;
  v4 = v3;
  if ( *((_DWORD *)this + 23) )
    v4 = v3 | 0x400;
  v5 = v4 | 0x800;
  if ( *((_QWORD *)this + 14) )
    v5 |= 0x1000u;
  v6 = v5 | 0x2000;
  *((_DWORD *)this + 4) = v6;
  if ( *((_QWORD *)this + 17) )
  {
    v6 |= 0x4000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_DWORD *)this + 36) )
  {
    v6 |= 0x8000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_DWORD *)this + 37) )
  {
    v6 |= 0x10000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_DWORD *)this + 38) )
  {
    v6 |= 0x20000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_DWORD *)this + 39) )
  {
    v6 |= 0x40000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_DWORD *)this + 40) )
  {
    v6 |= 0x80000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((float *)this + 41) != 0.0 )
  {
    v6 |= 0x100000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((float *)this + 42) != 0.0 )
  {
    v6 |= 0x200000u;
    *((_DWORD *)this + 4) = v6;
  }
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) = v6 | 0x400000;
  if ( DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x7FFE00) != 0 )
  {
    return 1;
  }
  return v2;
}
