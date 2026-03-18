/*
 * XREFs of IoctlToNVMe @ 0x1400104F0
 * Callers:
 *     NVMeHwBuildIo @ 0x140002CA0 (NVMeHwBuildIo.c)
 * Callees:
 *     SetPrpFromSrb @ 0x140003380 (SetPrpFromSrb.c)
 *     CompareId @ 0x14000F8E0 (CompareId.c)
 *     DiagGeneric @ 0x14001A1B8 (DiagGeneric.c)
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 *     IoctlFirmwareProcess @ 0x14001B93C (IoctlFirmwareProcess.c)
 *     IoctlQueryEnduranceInformation @ 0x14001BD34 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryProtocolInfoProcess @ 0x14001BF38 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlQueryReservedQueueEntries @ 0x14001C028 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x14001C2B0 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x14001C474 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x14001C534 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14001C670 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x14001C844 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x14001CC20 (IoctlStorageStreamsReleaseId.c)
 */

__int64 __fastcall IoctlToNVMe(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  _BYTE *v10; // rbp
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  _BYTE *v15; // rbp

  v3 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v3 = 24LL;
  v5 = *(_QWORD *)(v3 + a2);
  v6 = *(_DWORD *)(v5 + 16);
  if ( v6 <= 0x2D2828 )
  {
    if ( v6 == 2959400 )
    {
      result = IoctlStorageStreamsGetParameters(a1, a2);
      goto LABEL_35;
    }
    v7 = v6 - 1771392;
    if ( !v7 || (v8 = v7 - 16) == 0 )
    {
      result = IoctlFirmwareProcess(a1, a2);
      goto LABEL_35;
    }
    v9 = v8 - 368;
    if ( !v9 )
    {
      result = DiagGeneric(a1, a2);
      goto LABEL_35;
    }
    if ( v9 == 1182464 )
    {
      v10 = (_BYTE *)(v5 + 4);
      if ( CompareId((__int64)"PROTOCOL", 8u, (_BYTE *)(v5 + 4), 8u, 0LL) )
      {
        result = IoctlQueryProtocolInfoProcess(a1, a2);
        goto LABEL_35;
      }
      if ( CompareId((__int64)"TEMPERAT", 8u, v10, 8u, 0LL) )
      {
        result = IoctlQueryTemperatureInfoProcess(a1, a2);
        goto LABEL_35;
      }
      if ( CompareId((__int64)"QUEUEINF", 8u, v10, 8u, 0LL) )
      {
        result = IoctlQueryReservedQueueEntries(a1, a2);
        goto LABEL_35;
      }
      if ( CompareId((__int64)"ENDURINF", 8u, v10, 8u, 0LL) )
      {
        result = IoctlQueryEnduranceInformation(a1, a2);
        goto LABEL_35;
      }
    }
    goto LABEL_24;
  }
  v12 = v6 - 2959404;
  if ( v12 )
  {
    v13 = v12 - 4;
    if ( v13 )
    {
      v14 = v13 - 27596;
      if ( v14 )
      {
        if ( v14 == 15876 && CompareId((__int64)"SETTEMPT", 8u, (_BYTE *)(v5 + 4), 8u, 0LL) )
        {
          result = IoctlSetTemperatureThresholdProcess(a1, a2);
          goto LABEL_35;
        }
LABEL_24:
        *(_BYTE *)(a2 + 3) = 6;
        result = 3238002694LL;
        goto LABEL_35;
      }
      v15 = (_BYTE *)(v5 + 4);
      if ( CompareId((__int64)"SETPROTO", 8u, (_BYTE *)(v5 + 4), 8u, 0LL) )
      {
        result = IoctlSetProtocolInfoProcess(a1, a2);
      }
      else if ( CompareId((__int64)"CREATEQU", 8u, v15, 8u, 0LL) )
      {
        result = IoctlCreateReservedQueuePair(a1, a2);
      }
      else
      {
        if ( !CompareId((__int64)"DELETEQU", 8u, v15, 8u, 0LL) )
          goto LABEL_24;
        result = IoctlDeleteReservedQueuePair(a1, a2);
      }
    }
    else
    {
      result = IoctlStorageStreamsReleaseId(a1, a2);
    }
  }
  else
  {
    result = IoctlStorageStreamsGetOpenStreams(a1, a2);
  }
LABEL_35:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = SetPrpFromSrb(a1, a2);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}
