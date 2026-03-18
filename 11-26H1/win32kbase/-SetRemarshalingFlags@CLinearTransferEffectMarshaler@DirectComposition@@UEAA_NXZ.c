/*
 * XREFs of ?SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  char v3; // di
  int *v4; // r8
  int *v5; // r9
  int *v6; // rdx
  int *v7; // rbx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 64) != 0.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 65) != 0.0 )
    *v1 |= 0x800u;
  v2 = (int *)((char *)this + 16);
  v3 = 0;
  if ( *((_BYTE *)this + 264) )
    *v1 |= 0x1000u;
  else
    v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 67) == 0.0 )
  {
    v4 = v2;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x2000;
  }
  if ( *((float *)this + 68) == 0.0 )
    v4 = v2;
  else
    *v2 |= 0x4000u;
  if ( *((_BYTE *)this + 276) )
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v2 | 0x8000;
  }
  else
  {
    v5 = v4;
  }
  if ( *((float *)this + 70) == 0.0 )
    v5 = v4;
  else
    *v4 |= 0x10000u;
  if ( *((float *)this + 71) == 0.0 )
  {
    v6 = v5;
  }
  else
  {
    v6 = (int *)((char *)this + 16);
    *v5 = *v4 | 0x20000;
  }
  if ( *((_BYTE *)this + 288) )
    *v5 |= 0x40000u;
  else
    v6 = v5;
  if ( *((float *)this + 73) == 0.0 )
  {
    v7 = v6;
  }
  else
  {
    v7 = (int *)((char *)this + 16);
    *v6 = *v5 | 0x80000;
  }
  if ( *((float *)this + 74) == 0.0 )
    v7 = v6;
  else
    *v6 |= 0x100000u;
  if ( *((_BYTE *)this + 300) )
    *v7 = *v6 | 0x200000;
  if ( *((_BYTE *)this + 301) )
    *v7 |= 0x400000u;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v7 & 0x7FFC00) != 0 )
    return 1;
  return v3;
}
