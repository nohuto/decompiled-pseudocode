/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v1 |= 0x2000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 71) )
  {
    v1 |= 0x4000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 72) )
  {
    v1 |= 0x8000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 73) )
  {
    v1 |= 0x10000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 33) != 0x3C23D70A3C23D70ALL )
    v1 |= 0x800u;
  *((_DWORD *)this + 4) = v1 | 0x1400;
  DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this);
  return 1;
}
