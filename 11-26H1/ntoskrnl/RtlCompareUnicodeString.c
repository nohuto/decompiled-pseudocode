/*
 * XREFs of RtlCompareUnicodeString @ 0x1409DE5A0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     KsepCacheHwIdEqual @ 0x1404F1EA0 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1406DF3D0 (ApiSetpGetExtensionNameKeyInfo.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409DE060 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409DE220 (FsRtlAddToTunnelCacheEx.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     KeHwPolicyLocateResource @ 0x140CD0520 (KeHwPolicyLocateResource.c)
 *     PsInitializeWin32kServiceTable @ 0x140CDDD28 (PsInitializeWin32kServiceTable.c)
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rsi
  wchar_t *v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v8; // r8
  SIZE_T v9; // r14
  struct _LIST_ENTRY *Flink; // r11
  wchar_t *v11; // r10
  SIZE_T v12; // rcx
  signed __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9

  Buffer = String2->Buffer;
  v4 = String1->Buffer;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = (unsigned __int64)String1->Length >> 1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = v6;
  if ( v6 > v5 )
    v9 = v5;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v11 = &v4[v9];
  if ( v8 )
  {
    v14 = (char *)Buffer - (char *)v4;
    while ( v4 < v11 )
    {
      v15 = *v4;
      v16 = *(wchar_t *)((char *)v4 + v14);
      if ( (_WORD)v15 != (_WORD)v16 )
      {
        if ( (unsigned int)v15 >= 0x61 )
        {
          if ( (unsigned int)v15 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v15 >= 0xC0u )
              LOWORD(v15) = *((_WORD *)&Flink->Flink
                            + (v15 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v15 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v15 >> 8))))
                          + v15;
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        if ( (unsigned int)v16 >= 0x61 )
        {
          if ( (unsigned int)v16 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v16 >= 0xC0u )
                LOWORD(v16) = *((_WORD *)&Flink->Flink
                              + (v16 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v16 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v16 >> 8))))
                            + v16;
            }
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        if ( (_WORD)v15 != (_WORD)v16 )
          return (unsigned __int16)v15 - (unsigned __int16)v16;
      }
      ++v4;
    }
  }
  else
  {
    v12 = RtlCompareMemory(v4, Buffer, 2 * v9) >> 1;
    if ( v12 < v9 )
      return v4[v12] - Buffer[v12];
  }
  return v6 - v5;
}
