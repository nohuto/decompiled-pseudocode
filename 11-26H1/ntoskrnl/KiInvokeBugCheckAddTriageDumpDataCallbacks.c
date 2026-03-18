/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405E85B4
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405E5D88 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E71B4 (KeValidateBugCheckCallbackRecord.c)
 *     KiGlobalDeduplicateTriageDumpData @ 0x1405E8520 (KiGlobalDeduplicateTriageDumpData.c)
 *     KiValidateComponentName @ 0x1405E8B1C (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405E8BC8 (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  char result; // al
  PVOID *v1; // rbx
  PVOID *v2; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v3; // [rsp+A0h] [rbp+18h]
  PVOID *v4; // [rsp+A8h] [rbp+20h]

  result = 0;
  v4 = &KeBugCheckReasonCallbackListHead;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F26D18 )
  {
    v2 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v3 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      result = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v2);
      if ( result )
      {
        result = guard_dispatch_icall_no_overrides(7LL, v1);
        *((_WORD *)v1 + 22) = 260;
      }
      else if ( !v2 )
      {
        return result;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return result;
}
