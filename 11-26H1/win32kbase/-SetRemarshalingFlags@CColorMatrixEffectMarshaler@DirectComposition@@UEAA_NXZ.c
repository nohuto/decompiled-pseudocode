/*
 * XREFs of ?SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int *v4; // r9
  int *v5; // rdx
  int *v6; // r9
  int v7; // eax
  int *v8; // r8
  int *v9; // rdx
  int *v10; // r8
  int v11; // eax
  int *v12; // rdx
  int v13; // eax
  unsigned int *v14; // rdi
  char v15; // bl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 64) != 1.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 65) != 0.0 )
    *v1 |= 0x800u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 66) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x1000u;
  if ( *((float *)this + 67) == 0.0 )
  {
    v3 = v2;
  }
  else
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x2000;
  }
  if ( *((float *)this + 68) == 0.0 )
    v3 = v2;
  else
    *v2 |= 0x4000u;
  if ( *((float *)this + 69) == 1.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v2 | 0x8000;
  }
  if ( *((float *)this + 70) == 0.0 )
    v4 = v3;
  else
    *v3 |= 0x10000u;
  if ( *((float *)this + 71) == 0.0 )
  {
    v5 = v4;
  }
  else
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v3 | 0x20000;
  }
  if ( *((float *)this + 72) == 0.0 )
    v5 = v4;
  else
    *v4 |= 0x40000u;
  if ( *((float *)this + 73) == 0.0 )
  {
    v6 = v5;
  }
  else
  {
    v7 = *v4;
    v6 = (int *)((char *)this + 16);
    *v5 = v7 | 0x80000;
  }
  if ( *((float *)this + 74) == 1.0 )
    v6 = v5;
  else
    *v5 |= 0x100000u;
  if ( *((float *)this + 75) == 0.0 )
  {
    v8 = v6;
  }
  else
  {
    v8 = (int *)((char *)this + 16);
    *v6 = *v5 | 0x200000;
  }
  if ( *((float *)this + 76) == 0.0 )
    v8 = v6;
  else
    *v6 |= 0x400000u;
  if ( *((float *)this + 77) == 0.0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = (int *)((char *)this + 16);
    *v8 = *v6 | 0x800000;
  }
  if ( *((float *)this + 78) == 0.0 )
    v9 = v8;
  else
    *v8 |= 0x1000000u;
  if ( *((float *)this + 79) == 1.0 )
  {
    v10 = v9;
  }
  else
  {
    v11 = *v8;
    v10 = (int *)((char *)this + 16);
    *v9 = v11 | 0x2000000;
  }
  if ( *((float *)this + 80) == 0.0 )
    v10 = v9;
  else
    *v9 |= 0x4000000u;
  if ( *((float *)this + 81) == 0.0 )
  {
    v12 = v10;
  }
  else
  {
    v13 = *v9;
    v12 = (int *)((char *)this + 16);
    *v10 = v13 | 0x8000000;
  }
  if ( *((float *)this + 82) == 0.0 )
    v12 = v10;
  else
    *v10 |= 0x10000000u;
  if ( *((float *)this + 83) == 0.0 )
  {
    v14 = (unsigned int *)v12;
  }
  else
  {
    v14 = (unsigned int *)((char *)this + 16);
    *v12 = *v10 | 0x20000000;
  }
  if ( *((_DWORD *)this + 84) == 1 )
    v14 = (unsigned int *)v12;
  else
    *v12 |= 0x40000000u;
  v15 = 0;
  if ( *((_DWORD *)this + 85) )
    *v14 = *v12 | 0x80000000;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v14 & 0xFFFFFC00) != 0 )
    return 1;
  return v15;
}
