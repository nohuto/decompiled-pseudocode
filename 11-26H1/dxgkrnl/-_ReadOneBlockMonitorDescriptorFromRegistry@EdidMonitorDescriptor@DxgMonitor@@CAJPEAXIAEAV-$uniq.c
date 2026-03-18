/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027F7EC
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027EED0 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 * Callees:
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140007048 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1400077C0 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        void **a3)
{
  int v6; // ebx
  _DWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  char *v11; // rax
  char *v12; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  WCHAR SourceString; // [rsp+40h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 688;
  }
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    a3,
    0LL);
  v6 = RtlStringCbPrintfW(&SourceString, 8uLL, (size_t *)L"%d", a2);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 701;
LABEL_5:
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v12,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v13,
      0LL);
    return (unsigned int)v6;
  }
  RtlInitUnicodeString(&DestinationString, &SourceString);
  v6 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (__int64)&v13);
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 717;
    goto LABEL_5;
  }
  v8 = v13;
  if ( v13[1] == 3 && v13[2] == 128 )
  {
    v9 = operator new(0x98uLL, 0x4D677844u, 256LL);
    v10 = (_QWORD *)v9;
    if ( v9 )
    {
      memset((void *)(v9 + 24), 0, 0x80uLL);
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 128LL;
    }
    else
    {
      v10 = 0LL;
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v12,
      v10);
    v11 = v12;
    if ( !v12 )
    {
      v6 = -1073741801;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 739;
      goto LABEL_5;
    }
    *(_OWORD *)(v12 + 24) = *(_OWORD *)(v8 + 3);
    *(_OWORD *)(v11 + 40) = *(_OWORD *)(v8 + 7);
    *(_OWORD *)(v11 + 56) = *(_OWORD *)(v8 + 11);
    *(_OWORD *)(v11 + 72) = *(_OWORD *)(v8 + 15);
    *(_OWORD *)(v11 + 88) = *(_OWORD *)(v8 + 19);
    *(_OWORD *)(v11 + 104) = *(_OWORD *)(v8 + 23);
    *(_OWORD *)(v11 + 120) = *(_OWORD *)(v8 + 27);
    *(_OWORD *)(v11 + 136) = *(_OWORD *)(v8 + 31);
    *((_DWORD *)v11 + 2) = 3;
    *((_DWORD *)v11 + 3) = a2 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      a3,
      (void **)&v12);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v12,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v13,
      0LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 729;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v12,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v13,
      0LL);
    return 3223126017LL;
  }
}
