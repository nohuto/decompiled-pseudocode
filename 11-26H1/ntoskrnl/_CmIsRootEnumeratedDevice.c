/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x140A19290
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140968268 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PipResetDevice @ 0x140CC8F58 (PipResetDevice.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 */

char __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v2; // r10
  const wchar_t *v3; // r11
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  if ( RtlInitUnicodeStringEx(&v8, SourceString) < 0 )
    return 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v3 = L"Root\\";
  Flink = CurrentServerSiloGlobals[75].Flink;
  if ( v8.Length >= 0xAu )
  {
    while ( v3 < L"" )
    {
      v5 = *v3;
      v6 = *(const wchar_t *)((char *)v3 + (char *)v8.Buffer - (char *)L"Root\\");
      if ( (_WORD)v5 != (_WORD)v6 )
      {
        if ( (unsigned int)v5 >= 0x61 )
        {
          if ( (unsigned int)v5 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v5 >= 0xC0u )
              LOWORD(v5) = *((_WORD *)&Flink->Flink
                           + (v5 & 0xF)
                           + *((unsigned __int16 *)&Flink->Flink
                             + ((unsigned __int8)v5 >> 4)
                             + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v5 >> 8))))
                         + v5;
          }
          else
          {
            LOWORD(v5) = v5 - 32;
          }
        }
        if ( (unsigned int)v6 >= 0x61 )
        {
          if ( (unsigned int)v6 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v6 >= 0xC0u )
                LOWORD(v6) = *((_WORD *)&Flink->Flink
                             + (v6 & 0xF)
                             + *((unsigned __int16 *)&Flink->Flink
                               + ((unsigned __int8)v6 >> 4)
                               + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v6 >> 8))))
                           + v6;
            }
          }
          else
          {
            LOWORD(v6) = v6 - 32;
          }
        }
        if ( (_WORD)v5 != (_WORD)v6 )
          return v2;
      }
      ++v3;
    }
    return 1;
  }
  return v2;
}
