/*
 * XREFs of ?SetRemarshalingFlags@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CGdiSpriteBitmapMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 20) )
    v1 |= 0x40u;
  if ( *((_BYTE *)this + 84) )
    v1 |= 0x80u;
  if ( *((_QWORD *)this + 11) )
    v1 |= 0x100u;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 4) = v1 | 0x200;
  return 1;
}
