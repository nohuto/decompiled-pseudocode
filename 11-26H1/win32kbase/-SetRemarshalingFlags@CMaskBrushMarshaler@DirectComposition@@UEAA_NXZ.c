/*
 * XREFs of ?SetRemarshalingFlags@CMaskBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CMaskBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CMaskBrushMarshaler *this)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *v1 |= 0x80u;
  return (*v1 & 0xC0) != 0;
}
