/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1403914A0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1401AA0C0 (DxgkCheckGpuVirtualizationCaps.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401E44F4 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1402424B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x140244E98 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140245984 (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x140390E8C (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x140391310 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     DpiQueryAdapterRegistryInfo @ 0x14039137C (DpiQueryAdapterRegistryInfo.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x140391650 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  unsigned int *Pool2; // rsi
  int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v12; // rbx
  size_t v13; // r8
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-20h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, a4 + 16, 1953656900LL);
  if ( Pool2 )
  {
    v9 = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( v9 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v9 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v12 = Pool2[2];
        v13 = a4;
        if ( a4 > (unsigned int)v12 )
          v13 = (unsigned int)v12;
        memmove(a3, Pool2 + 3, v13);
        if ( a4 > (unsigned int)v12 )
          memset(&a3[v12], 0, a4 - (unsigned int)v12);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry4(4LL, v10, (int)a5, 0LL, 0LL);
        WdLogGlobalForLineNumber = 3490;
      }
    }
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 3413;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
