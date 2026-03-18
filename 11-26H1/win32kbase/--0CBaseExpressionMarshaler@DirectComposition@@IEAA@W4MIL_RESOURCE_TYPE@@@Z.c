/*
 * XREFs of ??0CBaseExpressionMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401BF4A4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0CConditionalExpressionMarshaler@DirectComposition@@QEAA@XZ @ 0x14022A6C0 (--0CConditionalExpressionMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CBaseExpressionMarshaler::CBaseExpressionMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(a1, a2);
  *v2 = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v2[13] = 0LL;
  v2[14] = 0LL;
  v2[15] = 0LL;
  return v2;
}
