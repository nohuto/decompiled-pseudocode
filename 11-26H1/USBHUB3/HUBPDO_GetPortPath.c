/*
 * XREFs of HUBPDO_GetPortPath @ 0x140018F9C
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x1400190E4 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBPDO_ReportDeviceFailure @ 0x14001A9F0 (HUBPDO_ReportDeviceFailure.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x14008555C (HUBPDO_UnregisterPortPLDRCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_GetPortPath(__int64 a1, _WORD *a2)
{
  _WORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v3 = a2 + 1;
  v4 = 5LL;
  v5 = *(_QWORD *)(a1 + 16) + 312LL;
  v6 = *(_WORD *)(v5 + 16);
  v7 = v5 - (_QWORD)a2;
  *a2 = v6;
  do
  {
    *v3 = *(_WORD *)((char *)v3 + v7 + 16);
    ++v3;
    --v4;
  }
  while ( v4 );
  result = *(_QWORD *)(a1 + 16);
  v9 = *(unsigned __int8 *)(result + 240);
  if ( (unsigned __int8)v9 < 6u )
  {
    result = *(unsigned __int16 *)(a1 + 48);
    a2[v9] = result;
  }
  return result;
}
