/*
 * XREFs of ?SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x40u;
  v2 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  if ( (v2 & 0x40) != 0 || *((_QWORD *)this + 8) || *((_QWORD *)this + 11) )
    return 1;
  return v1;
}
