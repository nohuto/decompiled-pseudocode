/*
 * XREFs of ?SetRemarshalingFlags@CWindowNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AF10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171570 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CWindowNodeMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax
  _DWORD *v3; // r8

  v1 = (int *)((char *)this + 336);
  if ( *((_QWORD *)this + 52) )
    *v1 |= 0x20u;
  v2 = *v1;
  if ( *((_QWORD *)this + 53) )
  {
    v2 |= 0x40u;
    v3 = (_DWORD *)((char *)this + 336);
    *v1 = v2;
  }
  else
  {
    v3 = (_DWORD *)((char *)this + 336);
  }
  if ( *((_BYTE *)this + 432) )
  {
    *v1 |= 0x80u;
    v2 = *v1;
  }
  if ( *((_BYTE *)this + 433) )
  {
    v2 |= 0x100u;
    *v1 = v2;
  }
  if ( *((_BYTE *)this + 434) )
  {
    v2 |= 0x200u;
    *v3 = v2;
  }
  if ( *((_BYTE *)this + 435) )
    v2 |= 0x400u;
  if ( *((_QWORD *)this + 61) )
    v2 |= 0x4000u;
  if ( *((_QWORD *)this + 62) )
    v2 |= 0x8000u;
  *((_DWORD *)this + 84) = v2 | 0x3381F;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}
