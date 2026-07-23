/*
 * XREFs of BiQueryBootEntryOrder @ 0x1409A3410
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140899B78 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14089A4FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x14072A920 (ZwQueryBootEntryOrder.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(ULONG **a1, ULONG *a2)
{
  ULONG *v2; // rdi
  NTSTATUS v5; // ebx
  ULONG *Pool2; // rax
  ULONG Count; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  Count = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootEntryOrder(0LL, &Count);
    if ( v5 != -1073741789 )
      goto LABEL_3;
    Pool2 = (ULONG *)ExAllocatePool2(0x102uLL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_5;
    }
    v5 = ZwQueryBootEntryOrder(Pool2, &Count);
    if ( v5 < 0 )
    {
LABEL_3:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_5;
      }
    }
    *a2 = Count;
    *a1 = v2;
LABEL_5:
    BiReleasePrivilege((unsigned int *)&v9);
  }
  return (unsigned int)v5;
}
