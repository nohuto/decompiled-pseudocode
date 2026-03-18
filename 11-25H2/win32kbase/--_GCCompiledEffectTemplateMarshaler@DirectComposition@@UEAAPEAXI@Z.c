/*
 * XREFs of ??_GCCompiledEffectTemplateMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140121690
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CCompiledEffectTemplateMarshaler *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
