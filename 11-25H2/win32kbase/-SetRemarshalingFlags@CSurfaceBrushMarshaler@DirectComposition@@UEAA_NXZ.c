/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140153B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  int v1; // eax
  int v2; // edx

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 9) )
  {
    v1 |= 0x20u;
    *((_BYTE *)this + 139) = 0;
  }
  v2 = v1;
  if ( *((_QWORD *)this + 10) )
  {
    v2 = v1 | 0x40;
    v1 |= 0x40u;
  }
  if ( *((_BYTE *)this + 136) )
    v1 = v2 | 0x800;
  *((_DWORD *)this + 4) = v1 | 0x780;
  return 1;
}
