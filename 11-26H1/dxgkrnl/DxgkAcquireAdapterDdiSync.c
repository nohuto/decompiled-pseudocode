/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x140319DFC
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x140051678 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140091690 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140091A00 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140091B50 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiGetWholeMonitorDescriptor @ 0x140094D34 (DpiGetWholeMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x140256F14 (DpiQueryDisplayIDDescriptor.c)
 *     DpiPdoIsChildConnected @ 0x140319F04 (DpiPdoIsChildConnected.c)
 *     DpiPdoSetDevicePower @ 0x1403B9898 (DpiPdoSetDevicePower.c)
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x14040E548 (DpiGetMonitorDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    if ( a2 == 1 || a2 == 2 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    else
    {
      v3 = a2;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 368;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DDI synchronization level 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 355;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
