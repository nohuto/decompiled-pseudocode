/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x140243780
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A50 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  bool result; // al

  result = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return result;
}
