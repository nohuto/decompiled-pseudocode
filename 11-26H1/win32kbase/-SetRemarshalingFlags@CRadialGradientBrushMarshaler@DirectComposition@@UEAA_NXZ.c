/*
 * XREFs of ?SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402394C0 (-SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRadialGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CRadialGradientBrushMarshaler *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 13) != 0x3F0000003F000000LL )
  {
    v1 |= 0x400u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 14) != 0x3F0000003F000000LL )
    v1 |= 0x800u;
  *((_DWORD *)this + 4) = v1 | 0x1000;
  DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(this);
  return 1;
}
