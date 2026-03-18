/*
 * XREFs of ?SetRemarshalingFlags@CSceneModelTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneModelTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneModelTransformMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
