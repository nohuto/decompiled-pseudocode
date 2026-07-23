/*
 * XREFs of IopWriteResourceList @ 0x140AFB6B4
 * Callers:
 *     PnpBuildCmResourceList @ 0x140AFB1F0 (PnpBuildCmResourceList.c)
 *     IoReportHalResourceUsage @ 0x140CCA220 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140CCA408 (IopInitializeResourceMap.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall IopWriteResourceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
        _DWORD *Data,
        ULONG DataSize)
{
  int RegistryKey; // edi
  UNICODE_STRING *v10; // rdx
  HANDLE v11; // rbx
  NTSTATUS v12; // eax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  KeyHandle[0] = 0LL;
  RegistryKey = IopCreateRegistryKeyEx(&Handle, a1, a2, 131103LL, 1, 0LL);
  if ( RegistryKey >= 0 )
  {
    RegistryKey = IopCreateRegistryKeyEx(KeyHandle, Handle, a3, 131103LL, 1, 0LL);
    ZwClose(Handle);
    if ( RegistryKey >= 0 )
    {
      v10 = a4;
      v11 = KeyHandle[0];
      if ( *Data )
        v12 = ZwSetValueKey(KeyHandle[0], v10, 0, 8u, Data, DataSize);
      else
        v12 = ZwDeleteValueKey(KeyHandle[0], v10);
      RegistryKey = v12;
      ZwClose(v11);
    }
  }
  return (unsigned int)RegistryKey;
}
