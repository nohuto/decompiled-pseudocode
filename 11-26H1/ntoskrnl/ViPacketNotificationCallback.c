/*
 * XREFs of ViPacketNotificationCallback @ 0x140C3F410
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x1405DA090 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140C3FEB8 (VfIrpDatabaseUninitialize.c)
 */

void __fastcall ViPacketNotificationCallback(_QWORD *Entry, __int64 a2, int a3)
{
  int v4; // r8d
  void *v5; // rcx

  v4 = a3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = (void *)Entry[28];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x6D646C56u);
      ExFreeToNPagedLookasideList(&ViPacketLookaside, Entry);
      if ( !_InterlockedDecrement(&ViPacketCount) && IovIsDisabledWithoutReboot() )
        VfIrpDatabaseUninitialize();
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a2 + 16) &= 0x3FFFFFFFu;
  }
}
