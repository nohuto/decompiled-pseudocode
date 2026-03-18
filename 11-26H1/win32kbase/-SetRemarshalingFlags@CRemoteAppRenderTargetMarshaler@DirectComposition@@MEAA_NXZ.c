/*
 * XREFs of ?SetRemarshalingFlags@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140242920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this)
{
  char *v2; // rcx
  char v3; // dl
  char *v4; // r8
  char *v5; // r9
  char *v6; // r8
  int *v7; // r9
  int *v8; // r8

  v2 = (char *)this + 16;
  v3 = 0;
  if ( *((_QWORD *)this + 8) )
    *(_DWORD *)v2 |= 0x40u;
  if ( *((_QWORD *)this + 14) )
  {
    *(_DWORD *)v2 |= 0x80u;
    v4 = (char *)this + 16;
    v3 = 1;
  }
  else
  {
    v4 = v2;
  }
  v5 = v2;
  if ( *((_DWORD *)this + 18) || (v5 = v4, *((_DWORD *)this + 19)) )
  {
    *(_DWORD *)v2 |= 0x100u;
    v3 = 1;
    v2 = v5;
  }
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 21) )
  {
    *(_DWORD *)v2 |= 0x200u;
    v6 = (char *)this + 16;
    v3 = 1;
  }
  else
  {
    v6 = v2;
  }
  if ( *((_DWORD *)this + 14) != 3 )
  {
    *(_DWORD *)v2 |= 0x800u;
    v3 = 1;
    v2 = v6;
  }
  if ( *((_DWORD *)this + 22) )
  {
    *(_DWORD *)v2 |= 0x2000u;
    v7 = (int *)((char *)this + 16);
    v3 = 1;
  }
  else
  {
    v7 = (int *)v2;
  }
  v8 = (int *)v2;
  if ( *((float *)this + 26) != 1.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || (v8 = v7, *((float *)this + 25) != 0.0) )
  {
    *v8 = *(_DWORD *)v2 | 0x1000;
  }
  return v3;
}
