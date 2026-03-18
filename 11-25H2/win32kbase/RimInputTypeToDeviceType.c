/*
 * XREFs of RimInputTypeToDeviceType @ 0x1400357C0
 * Callers:
 *     rimIssueReads @ 0x14003564C (rimIssueReads.c)
 *     rimCompleteReads @ 0x1400357E4 (rimCompleteReads.c)
 *     RIMDiscoverSpecificDevice @ 0x1401F0D54 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
    return (a1 & 0x3C) != 0 ? 2 : 0;
  return result;
}
