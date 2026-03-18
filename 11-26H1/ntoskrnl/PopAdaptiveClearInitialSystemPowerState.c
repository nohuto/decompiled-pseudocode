/*
 * XREFs of PopAdaptiveClearInitialSystemPowerState @ 0x1407DDA3C
 * Callers:
 *     PoInitHiberServices @ 0x1407C8370 (PoInitHiberServices.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1409D0978 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140B543DC (BcdFlushStore.c)
 */

void __fastcall PopAdaptiveClearInitialSystemPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = -1LL;
  v4 = -1LL;
  if ( BYTE1(ExpPlatformBinaryLock.Timer.Dpc) )
  {
    if ( (int)BiOpenStoreWithHash(a1, 2u, a3, (__int64)&v3) >= 0 )
    {
      if ( (int)BcdOpenObject(v3, &GUID_CURRENT_BOOT_ENTRY, &v4) >= 0 )
      {
        BiDeleteElement(v4, 620757338LL);
        BcdFlushStore(v3);
      }
      if ( v4 != -1 )
        BcdCloseObject((HANDLE)v4);
    }
    if ( v3 != -1 )
      BcdCloseStore(v3);
  }
}
