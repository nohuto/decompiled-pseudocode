/*
 * XREFs of HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x140012690
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400433F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 */

__int64 __fastcall HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 3005;
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 44LL);
  if ( (v3 & 2) != 0 && (*(_BYTE *)(v1 + 184) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1644LL), 0x100000u);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      v3,
      *(unsigned int *)(v1 + 184),
      0LL,
      "Device resumed with port disabled");
    return 3089;
  }
  return v2;
}
