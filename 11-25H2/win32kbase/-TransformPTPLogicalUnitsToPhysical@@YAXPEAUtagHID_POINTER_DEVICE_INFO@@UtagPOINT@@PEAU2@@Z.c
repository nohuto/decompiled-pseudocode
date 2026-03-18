/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x140180614
 * Callers:
 *     RIMApplyPTPTranslation @ 0x140078948 (RIMApplyPTPTranslation.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x140079358 (RIMConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2070LL);
  v6 = *(_OWORD *)((char *)a1 + 124);
  v7 = *(_OWORD *)((char *)a1 + 140);
  *(_OWORD *)v8 = v6;
  if ( !(unsigned int)RIMConvertPointCoordinates(*(_QWORD *)&a2, v8, (int *)&v7, a3) )
    *a3 = 0LL;
}
