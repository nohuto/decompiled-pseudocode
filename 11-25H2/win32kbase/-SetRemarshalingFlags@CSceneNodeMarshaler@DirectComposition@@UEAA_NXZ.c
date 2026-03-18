/*
 * XREFs of ?SetRemarshalingFlags@CSceneNodeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022FE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSceneNodeMarshaler *this)
{
  int *v1; // rdx
  int v2; // eax

  v1 = (int *)((char *)this + 16);
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x20u;
  *((_QWORD *)this + 10) = 0LL;
  v2 = *v1;
  if ( *((_QWORD *)this + 12) )
  {
    v2 |= 0x40u;
    *v1 = v2;
  }
  if ( *((_QWORD *)this + 13) )
  {
    *v1 |= 0x80u;
    v2 = *v1;
  }
  return (v2 & 0xE0) != 0;
}
