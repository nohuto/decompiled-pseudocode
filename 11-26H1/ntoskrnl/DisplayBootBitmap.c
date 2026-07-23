/*
 * XREFs of DisplayBootBitmap @ 0x1405786DC
 * Callers:
 *     DisplayFilter @ 0x1405788B0 (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x140532350 (InbvIsBootDriverInstalled.c)
 *     InbvAcquireLock @ 0x1405C730C (InbvAcquireLock.c)
 *     InbvBitBlt @ 0x1405C733C (InbvBitBlt.c)
 *     InbvGetResourceAddress @ 0x1405C7520 (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x1405C759C (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x1405C75CC (InbvReleaseResources.c)
 *     InbvSetScrollRegion @ 0x1405C7630 (InbvSetScrollRegion.c)
 *     InbvSetTextColor @ 0x1405C7660 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x1405C76D0 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x1405C7850 (RotBarInit.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall DisplayBootBitmap(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char v3; // di
  __int64 ResourceAddress; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a1;
  if ( byte_140E0F5D8 )
  {
    InbvAcquireLock();
    RotBarSelection = 0;
    InbvReleaseLock();
  }
  ShowProgressBar = 0;
  if ( v3 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    ResourceAddress = InbvGetResourceAddress(6LL);
    v2 = 0;
    v5 = InbvGetResourceAddress(7LL);
    result = InbvSetScrollRegion(32LL, 80LL, 631LL, 400LL);
    if ( v5 )
      result = InbvBitBlt(v5, v7, 419LL);
    if ( ResourceAddress )
      result = InbvBitBlt(ResourceAddress, v7, 0LL);
    goto LABEL_17;
  }
  if ( !InbvIsBootDriverInstalled(a1, a2) )
    return InbvReleaseResources();
  qword_140E65EF0 = (__int64)DisplayFilter;
  v8 = InbvGetResourceAddress(1LL);
  v10 = InbvGetResourceAddress(4LL);
  if ( v8 )
  {
    v2 = 1;
    InbvBitBlt(v8, v9, 0LL);
  }
  if ( v10 )
    InbvBitBlt(v10, v9, 0LL);
  if ( !byte_140E0F5D8 )
  {
    ThreadHandle = 0LL;
    result = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( result >= 0 )
    {
      result = ZwClose(ThreadHandle);
      byte_140E0F5D8 = 1;
    }
LABEL_17:
    if ( !byte_140E0F5D8 )
      return result;
  }
  InbvAcquireLock();
  RotBarSelection = v2;
  if ( v2 == 1 )
    RotBarInit();
  return InbvReleaseLock();
}
