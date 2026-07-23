/*
 * XREFs of PopAdaptiveClearInitialSystemPowerState @ 0x1407E206C
 * Callers:
 *     PoInitHiberServices @ 0x1407CB3D0 (PoInitHiberServices.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1409A1958 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140B56C7C (BcdFlushStore.c)
 */

void __fastcall PopAdaptiveClearInitialSystemPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  HANDLE BcdStoreHandle; // [rsp+30h] [rbp+8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdStoreHandle = (HANDLE)-1LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( BYTE1(ExpPlatformBinaryLock.Timer.Dpc) )
  {
    if ( (int)BiOpenStoreWithHash(a1, 2u, a3, (__int64)&BcdStoreHandle) >= 0 )
    {
      if ( BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle) >= 0 )
      {
        BiDeleteElement(BcdObjectHandle, 620757338LL);
        BcdFlushStore(BcdStoreHandle);
      }
      if ( BcdObjectHandle != (HANDLE)-1LL )
        BcdCloseObject(BcdObjectHandle);
    }
    if ( BcdStoreHandle != (HANDLE)-1LL )
      BcdCloseStore(BcdStoreHandle);
  }
}
