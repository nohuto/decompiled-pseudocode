/*
 * XREFs of BiSetBootEntryOrder @ 0x1409D1A04
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140893778 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408940FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1407266D0 (ZwSetBootEntryOrder.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootEntryOrder(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(22LL, &v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(a1, a2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
