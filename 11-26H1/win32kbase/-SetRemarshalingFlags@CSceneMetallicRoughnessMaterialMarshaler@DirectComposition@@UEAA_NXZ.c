/*
 * XREFs of ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A440
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A510 (-SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 15) )
    v1 |= 0x8000u;
  if ( *((float *)this + 36) != 1.0 )
    v1 |= 0x20000u;
  if ( *((_QWORD *)this + 19) )
    v1 |= 0x40000u;
  if ( *((float *)this + 40) != 1.0 )
    v1 |= 0x80000u;
  *((_DWORD *)this + 4) = v1 | 0x10000;
  DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(this);
  return 1;
}
