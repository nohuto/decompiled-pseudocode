/*
 * XREFs of ??_GCCompiledEffectTemplateMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015ED80
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CCompiledEffectTemplateMarshaler *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
