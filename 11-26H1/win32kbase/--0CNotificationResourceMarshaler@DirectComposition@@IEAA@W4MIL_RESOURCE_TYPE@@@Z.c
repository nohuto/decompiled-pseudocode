/*
 * XREFs of ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC
 * Callers:
 *     ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1400558A8 (--0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompiledEffectTemplateMarshaler@DirectComposition@@QEAA@XZ @ 0x140055F54 (--0CCompiledEffectTemplateMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562C8 (--0CPropertyChangeResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CBaseExpressionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401BF4A4 (--0CBaseExpressionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0CInteractionTrackerBaseMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C5864 (--0CInteractionTrackerBaseMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CNotificationResourceMarshaler::`vftable';
  return result;
}
