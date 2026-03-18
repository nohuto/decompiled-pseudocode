/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTreeMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CDesktopTreeMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTreeMarshaler *this)
{
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x80u;
  *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
