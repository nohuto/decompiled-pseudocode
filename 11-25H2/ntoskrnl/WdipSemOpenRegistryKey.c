/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140793C20
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x140791B58 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextContextProvider @ 0x140791C78 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140791F28 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140792238 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadScenarioTable @ 0x140792730 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadGroupPolicy @ 0x14079357C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140793624 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
