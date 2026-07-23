/*
 * XREFs of RtlHashUnicodeString @ 0x140A43AE0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x1404AE434 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x1404EBA20 (KsepCacheHwIdHash.c)
 *     CarLiveDumpCallBack @ 0x140650830 (CarLiveDumpCallBack.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1407D1060 (PopPluginQuerySocSubsystemMetadata.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 *     SepComputeCachedHandlesEntrySignature @ 0x140A3D060 (SepComputeCachedHandlesEntrySignature.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140A4235C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     KsepCacheDeviceHash @ 0x140A43660 (KsepCacheDeviceHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140A43690 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140A439F4 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitDeviceOverrideCache @ 0x140CC8264 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  char v6; // dl
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v8; // r8d
  ULONG *v9; // r9
  ULONG v10; // r10d
  wchar_t *Buffer; // r11
  int v12; // r9d
  unsigned __int64 v13; // rax
  int v15; // ecx

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( !String )
    return -1073741811;
  if ( !v9 )
    return -1073741811;
  Buffer = String->Buffer;
  *v9 = v10;
  v12 = String->Length >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
      {
        v13 = *Buffer++;
        --v12;
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v13 >= 0xC0u )
                LOWORD(v13) = *((_WORD *)&Flink->Flink
                              + (v13 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v13 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                            + v13;
            }
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        v10 = (unsigned __int16)v13 + 65599 * v10;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        v15 = *Buffer++;
        v10 = v15 + 65599 * v10;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v10;
  return 0;
}
