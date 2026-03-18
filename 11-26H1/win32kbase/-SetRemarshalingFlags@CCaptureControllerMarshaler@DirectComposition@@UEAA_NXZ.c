/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax
  _DWORD *v3; // r8

  v1 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  v2 = *v1;
  if ( *((_BYTE *)this + 64) == 1 )
  {
    v3 = (_DWORD *)((char *)this + 16);
  }
  else
  {
    v2 |= 0x80u;
    v3 = (_DWORD *)((char *)this + 16);
    *v1 = v2;
  }
  if ( *((_QWORD *)this + 10) )
  {
    *v1 |= 0x200u;
    v2 = *v1;
  }
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 |= 0x400u;
    *v1 = v2;
  }
  if ( *((float *)this + 23) != 2.0 )
  {
    v2 |= 0x800u;
    *v3 = v2;
  }
  if ( *((_QWORD *)this + 12) )
    v2 |= 0x1000u;
  if ( *((_BYTE *)this + 136) )
    v2 |= 0x4000u;
  if ( *((_QWORD *)this + 18) )
    v2 |= 0x8000u;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 4) = v2 | 0x2100;
  return 1;
}
