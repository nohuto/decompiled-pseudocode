/*
 * XREFs of ?SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023D0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGenericInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 4) & 0xFFFFFF3F;
  *((_DWORD *)this + 4) = v1;
  if ( *((_BYTE *)this + 180) )
  {
    v1 &= ~0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 152) = 1;
  if ( *((_QWORD *)this + 20) )
  {
    v1 &= ~0x100u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 4) = v1 & 0xFFFFFBFF;
  return 1;
}
