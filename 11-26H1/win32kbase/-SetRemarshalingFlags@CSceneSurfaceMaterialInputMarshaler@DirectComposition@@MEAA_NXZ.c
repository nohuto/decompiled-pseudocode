/*
 * XREFs of ?SetRemarshalingFlags@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NXZ @ 0x140247890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 20) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x80u;
  v2 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 21) == 2 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x100u;
  if ( *((_DWORD *)this + 22) != 2 )
    *v2 = *v1 | 0x200;
  return (*v2 & 0x3C0) != 0;
}
