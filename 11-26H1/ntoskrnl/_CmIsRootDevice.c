/*
 * XREFs of _CmIsRootDevice @ 0x1409529E4
 * Callers:
 *     PiDcResetChildDeviceContainerCallback @ 0x1407AA960 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x140A16A1C (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x140AAD7DC (_CmSetDeviceMappedProperty.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

char __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  char v1; // bl
  struct _LIST_ENTRY *Flink; // rbp
  wchar_t *Buffer; // rsi
  wchar_t *v5; // r14
  SIZE_T v6; // rax
  SIZE_T v7; // rax
  const wchar_t *v8; // rdi
  wchar_t *i; // r11
  wchar_t v10; // si
  int v11; // edx
  __int16 v12; // ax
  __int16 v13; // r10
  UNICODE_STRING v14; // [rsp+20h] [rbp-28h] BYREF

  v14 = 0LL;
  v1 = 0;
  if ( RtlInitUnicodeStringEx(&v14, SourceString) < 0 )
    return 0;
  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( v14.Length == 24 )
  {
    Buffer = v14.Buffer;
    v5 = v14.Buffer + 12;
    v6 = RtlCompareMemory(v14.Buffer, L"HTREE\\ROOT\\0", 0x18uLL);
    if ( v6 != 24 )
    {
      v7 = v6 >> 1;
      v8 = &aHtreeRoot0_0[v7];
      for ( i = &Buffer[v7]; i < v5; ++i )
      {
        v10 = *i;
        v11 = *v8;
        if ( *i != (_WORD)v11 )
        {
          NLS_UPCASE((__int64)Flink, v11);
          v12 = NLS_UPCASE((__int64)Flink, v10);
          if ( v12 != v13 )
            return v1;
        }
        ++v8;
      }
    }
    return 1;
  }
  return v1;
}
