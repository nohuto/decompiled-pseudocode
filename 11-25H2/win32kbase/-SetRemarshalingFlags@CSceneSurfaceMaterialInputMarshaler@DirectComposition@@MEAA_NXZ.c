/*
 * XREFs of ?SetRemarshalingFlags@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023D0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  _DWORD *v1; // rdx
  int *v2; // r8

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 20) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  v2 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 21) == 2 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x80u;
  if ( *((_DWORD *)this + 22) != 2 )
    *v2 = *v1 | 0x100;
  return (*v2 & 0x1E0) != 0;
}
