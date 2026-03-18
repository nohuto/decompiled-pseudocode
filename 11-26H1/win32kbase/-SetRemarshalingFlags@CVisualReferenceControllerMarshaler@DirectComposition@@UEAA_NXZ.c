/*
 * XREFs of ?SetRemarshalingFlags@CVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualReferenceControllerMarshaler *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 7);
  if ( v1 && *(_QWORD *)(v1 + 16) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
