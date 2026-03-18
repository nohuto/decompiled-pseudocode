/*
 * XREFs of ?SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNineGridBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CNineGridBrushMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int *v4; // rdx
  int v5; // eax
  int *v6; // r8
  int v7; // eax

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 14) != 0.0 )
    *v1 |= 0x40u;
  if ( *((float *)this + 15) != 0.0 )
    *v1 |= 0x80u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 16) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x100u;
  if ( *((float *)this + 17) == 0.0 )
  {
    v3 = v2;
  }
  else
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x200;
  }
  if ( *((float *)this + 18) == 1.0 )
    v3 = v2;
  else
    *v2 |= 0x400u;
  if ( *((float *)this + 19) == 1.0 )
  {
    v4 = v3;
  }
  else
  {
    v5 = *v2;
    v4 = (int *)((char *)this + 16);
    *v3 = v5 | 0x800;
  }
  if ( *((float *)this + 20) == 1.0 )
    v4 = v3;
  else
    *v3 |= 0x1000u;
  if ( *((float *)this + 21) == 1.0 )
  {
    v6 = v4;
  }
  else
  {
    v7 = *v3;
    v6 = (int *)((char *)this + 16);
    *v4 = v7 | 0x2000;
  }
  if ( *((_BYTE *)this + 88) )
    *v4 |= 0x4000u;
  else
    v6 = v4;
  if ( *((_QWORD *)this + 12) )
    *v6 = *v4 | 0x8000;
  return (*v6 & 0xFFC0) != 0;
}
