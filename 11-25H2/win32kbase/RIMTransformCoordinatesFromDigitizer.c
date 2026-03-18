/*
 * XREFs of RIMTransformCoordinatesFromDigitizer @ 0x1401E5610
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMTransformCoordinates @ 0x140076844 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x140079180 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400792B4 (RIMTransformPointerDevicePointToPhysical.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMTransformCoordinatesFromDigitizer(__int64 a1, int *a2, __int64 *a3, __int64 a4)
{
  int v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v9[0] = 0LL;
  v8 = 0;
  if ( !a1 )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2254);
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x80u) != 0 && *(_QWORD *)(a1 + 528) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v10,
      (struct RIMLOCK *)(*(_QWORD *)(a1 + 392) + 104LL));
    if ( a2 )
    {
      RIMTransformCoordinates(*(_QWORD *)(a1 + 528), 0, a2, v9, &v8);
      RIMTransformPointerDevicePointToPhysical(*(__m128i **)(a1 + 528), *(_QWORD *)a2, (__int64)a3);
    }
    RIMTransformPhysicalPointToScreen(*(__m128i **)(a1 + 528), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
  }
}
