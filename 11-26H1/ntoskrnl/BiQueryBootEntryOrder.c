/*
 * XREFs of BiQueryBootEntryOrder @ 0x1409D2430
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140893778 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408940FC (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x140725D50 (ZwQueryBootEntryOrder.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(_QWORD *a1, _DWORD *a2)
{
  void *v2; // rdi
  int BootEntryOrder; // ebx
  __int64 Pool2; // rax
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  v8 = 0;
  BootEntryOrder = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( BootEntryOrder >= 0 )
  {
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v8);
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_3;
    Pool2 = ExAllocatePool2(0x102uLL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
    {
      BootEntryOrder = -1073741670;
      goto LABEL_5;
    }
    BootEntryOrder = ZwQueryBootEntryOrder(Pool2, (__int64)&v8);
    if ( BootEntryOrder < 0 )
    {
LABEL_3:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)BootEntryOrder);
      if ( BootEntryOrder < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_5;
      }
    }
    *a2 = v8;
    *a1 = v2;
LABEL_5:
    BiReleasePrivilege((unsigned int *)&v9);
  }
  return (unsigned int)BootEntryOrder;
}
