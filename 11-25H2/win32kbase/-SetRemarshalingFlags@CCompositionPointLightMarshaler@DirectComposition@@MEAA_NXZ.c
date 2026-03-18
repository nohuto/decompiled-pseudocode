/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023A350
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x140239870 (-SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  _DWORD *v1; // rdx
  _DWORD *v2; // rax
  int *v3; // rdx
  int *v4; // rax
  int *v5; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 24) != 1.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 25) != 0.0 )
    *v1 |= 0x200u;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 26) != 0.0 )
  {
    *v1 |= 0x400u;
    v2 = (_DWORD *)((char *)this + 16);
  }
  if ( *((float *)this + 27) != 1.0 || (v1 = v2, *((float *)this + 28) != 1.0) || *((float *)this + 29) != 1.0 )
  {
    *v1 |= 0x800u;
    v2 = v1;
  }
  if ( *((_QWORD *)this + 16) )
  {
    *v2 |= 0x1000u;
    v3 = (int *)((char *)this + 16);
  }
  else
  {
    v3 = v2;
  }
  if ( *((float *)this + 34) == 0.0 && *((float *)this + 35) == 0.0 && *((float *)this + 36) == 100.0 )
  {
    v4 = v3;
  }
  else
  {
    *v2 |= 0x2000u;
    v4 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 37) == 1.0 )
  {
    v5 = v4;
  }
  else
  {
    *v3 |= 0x4000u;
    v5 = (int *)((char *)this + 16);
  }
  if ( *((float *)this + 38) == 0.0 )
    v5 = v4;
  else
    *v4 |= 0x8000u;
  if ( *((float *)this + 39) != 0.0 )
    *v5 = *v4 | 0x10000;
  return DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(this);
}
