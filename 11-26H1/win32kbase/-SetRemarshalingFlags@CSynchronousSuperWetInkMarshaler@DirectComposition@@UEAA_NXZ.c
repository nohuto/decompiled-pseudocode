/*
 * XREFs of ?SetRemarshalingFlags@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int *v4; // r9
  int *v5; // rdx
  int *v6; // r8

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x80u;
  v2 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 18) )
    *v1 |= 0x100u;
  else
    v2 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 19) )
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x200;
  }
  else
  {
    v3 = v2;
  }
  if ( *((_DWORD *)this + 20) )
    *v2 |= 0x400u;
  else
    v3 = v2;
  if ( *((_QWORD *)this + 11) )
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v2 | 0x800;
  }
  else
  {
    v4 = v3;
  }
  if ( *((_DWORD *)this + 24) )
    *v3 |= 0x1000u;
  else
    v4 = v3;
  if ( *((_DWORD *)this + 25) )
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v3 | 0x2000;
  }
  else
  {
    v5 = v4;
  }
  if ( *((_DWORD *)this + 26) )
    *v4 |= 0x4000u;
  else
    v5 = v4;
  if ( *((_BYTE *)this + 108) )
  {
    v6 = (int *)((char *)this + 16);
    *v5 = *v4 | 0x8000;
  }
  else
  {
    v6 = v5;
  }
  if ( *((_DWORD *)this + 28) )
    *v5 |= 0x10000u;
  else
    v6 = v5;
  if ( *((_DWORD *)this + 29) )
    *v6 = *v5 | 0x20000;
  return (*v6 & 0x3FFC0) != 0;
}
