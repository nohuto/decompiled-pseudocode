/*
 * XREFs of PipHardwareConfigOpenKey @ 0x140B6C880
 * Callers:
 *     PipCheckComputerSupported @ 0x14079E254 (PipCheckComputerSupported.c)
 *     PipHardwareConfigGetIndex @ 0x14079E55C (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140B4EBFC (PipHardwareConfigGetLastUseTime.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigOpenKey(__int64 a1, unsigned int a2, HANDLE *a3)
{
  int CachedContextBaseKey; // ebx
  HANDLE v6; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  if ( a3 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, (__int64)&v9);
    if ( CachedContextBaseKey < 0
      || (CachedContextBaseKey = PnpCtxRegOpenKey(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   v9,
                                   (__int64)L"Current",
                                   0,
                                   a2,
                                   (__int64)&Handle),
          CachedContextBaseKey < 0) )
    {
      v6 = Handle;
    }
    else
    {
      v6 = 0LL;
      *a3 = Handle;
      Handle = 0LL;
    }
    if ( v6 )
      ZwClose(v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CachedContextBaseKey;
}
