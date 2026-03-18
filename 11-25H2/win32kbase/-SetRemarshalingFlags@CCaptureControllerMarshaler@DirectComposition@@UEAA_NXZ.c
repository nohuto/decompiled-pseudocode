/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022F390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // edx
  int v4; // edx

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
    v1 |= 0x20u;
  if ( *((_BYTE *)this + 64) != 1 )
    v1 |= 0x40u;
  v2 = v1 | 0x80;
  v3 = v2;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 10) )
  {
    v2 |= 0x100u;
    *((_DWORD *)this + 4) = v2;
    v3 = v2;
  }
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 |= 0x200u;
    *((_DWORD *)this + 4) = v2;
    v3 = v2;
  }
  if ( *((float *)this + 23) != 2.0 )
  {
    v2 |= 0x400u;
    *((_DWORD *)this + 4) = v2;
    v3 = v2;
  }
  if ( *((_QWORD *)this + 12) )
  {
    v3 = v2 | 0x800;
    *((_DWORD *)this + 4) = v2 | 0x800;
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)this + 15) )
    v3 |= 0x1000u;
  v4 = v3 | 0x2000;
  *((_DWORD *)this + 4) = v4;
  if ( *((_BYTE *)this + 136) )
    *((_DWORD *)this + 4) = v4 | 0x4000;
  return 1;
}
