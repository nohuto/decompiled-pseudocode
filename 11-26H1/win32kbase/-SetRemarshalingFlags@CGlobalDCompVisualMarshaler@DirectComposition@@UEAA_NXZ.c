/*
 * XREFs of ?SetRemarshalingFlags@CGlobalDCompVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CGlobalDCompVisualMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 7) )
    v1 |= 0x40u;
  if ( *((_BYTE *)this + 80) )
    v1 |= 0x100u;
  if ( *((_DWORD *)this + 21) )
    v1 |= 0x200u;
  *((_DWORD *)this + 4) = v1 | 0x80;
  return 1;
}
