/*
 * XREFs of ZwQuerySystemTime @ 0x18015FA80
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x18010B530 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
