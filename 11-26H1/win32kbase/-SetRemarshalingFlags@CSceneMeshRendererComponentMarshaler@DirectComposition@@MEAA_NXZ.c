/*
 * XREFs of ?SetRemarshalingFlags@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1402475B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  int *v1; // rax
  int v3; // ecx

  v1 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  v3 = *v1;
  if ( *((_QWORD *)this + 8) )
  {
    v3 |= 0x80u;
    *v1 = v3;
  }
  if ( *((_DWORD *)this + 20) )
  {
    *v1 |= 0x100u;
    v3 = *v1;
    *((_DWORD *)this + 21) = 0;
  }
  return (v3 & 0x1C0) != 0;
}
