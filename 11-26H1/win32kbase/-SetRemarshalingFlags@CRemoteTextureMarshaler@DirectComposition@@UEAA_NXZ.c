/*
 * XREFs of ?SetRemarshalingFlags@CRemoteTextureMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRemoteTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemoteTextureMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
    v1 |= 0x40u;
  if ( *((_QWORD *)this + 10) )
    v1 |= 0x100u;
  *((_DWORD *)this + 4) = v1 | 0x80;
  return 1;
}
