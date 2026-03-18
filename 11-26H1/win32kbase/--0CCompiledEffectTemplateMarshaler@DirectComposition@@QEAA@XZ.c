/*
 * XREFs of ??0CCompiledEffectTemplateMarshaler@DirectComposition@@QEAA@XZ @ 0x140055F54
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::CCompiledEffectTemplateMarshaler(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 23LL);
  result = v1;
  *v1 = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  return result;
}
