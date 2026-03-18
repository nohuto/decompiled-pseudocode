/*
 * XREFs of ?SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A510
 * Callers:
 *     ?SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A440 (-SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetRemarshalingFlags(
        DirectComposition::CScenePbrMaterialMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int *v4; // rdx
  int v5; // eax
  __int64 v6; // r8

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 14) != 0.5 )
    *v1 |= 0x40u;
  if ( *((_DWORD *)this + 15) )
    *v1 |= 0x80u;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x100u;
  else
    v2 = (int *)((char *)this + 16);
  if ( *((_BYTE *)this + 84) )
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x400;
  }
  else
  {
    v3 = v2;
  }
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x800u;
  else
    v3 = v2;
  if ( *((float *)this + 24) == 1.0 )
  {
    v4 = v3;
  }
  else
  {
    v5 = *v2;
    v4 = (int *)((char *)this + 16);
    *v3 = v5 | 0x1000;
  }
  if ( *((_QWORD *)this + 13) )
    *v3 |= 0x2000u;
  else
    v4 = v3;
  if ( *((float *)this + 28) != 1.0 )
    *v4 = *v3 | 0x4000;
  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
    v6 = *((unsigned int *)this + 20);
  if ( v6 )
    *v4 |= 0x200u;
  return (*v4 & 0x7FC0) != 0;
}
