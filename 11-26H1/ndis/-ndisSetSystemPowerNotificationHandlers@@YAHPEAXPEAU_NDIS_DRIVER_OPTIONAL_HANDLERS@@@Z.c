/*
 * XREFs of ?ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1400AB99C
 * Callers:
 *     NdisSetOptionalHandlers @ 0x140095FC0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetSystemPowerNotificationHandlers(_BYTE *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  __int64 v2; // rax

  if ( *a1 != 2 || a1[24] <= 6u && (a1[24] != 6 || a1[25] < 0x1Eu) )
    return 3221225659LL;
  if ( a2->Header.Revision != 1 )
    return 3221225485LL;
  if ( a2->Header.Size < 0x10u )
    return 3221225485LL;
  if ( a2[1] )
    return 3221225485LL;
  v2 = *(_QWORD *)&a2[2].Header.Type;
  if ( !v2 )
    return 3221225485LL;
  *((_QWORD *)a1 + 103) = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0xAu,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)a1,
      v2);
  return 0LL;
}
