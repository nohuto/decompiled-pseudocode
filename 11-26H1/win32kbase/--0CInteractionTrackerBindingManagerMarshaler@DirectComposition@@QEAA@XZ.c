/*
 * XREFs of ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1400558A8
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(this, 69LL);
  result = v1;
  *(_QWORD *)v1 = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
  *(_BYTE *)(v1 + 80) = 1;
  *(_QWORD *)(v1 + 104) = 24LL;
  return result;
}
