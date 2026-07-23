/*
 * XREFs of HalpTimerTraceTimingHardware @ 0x140782A5C
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void HalpTimerTraceTimingHardware()
{
  int v0; // ecx
  int v1; // ecx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
  {
    v20 = 4LL;
    v22 = 4LL;
    v0 = *(_DWORD *)(HalpClockTimer + 228);
    v19 = &v10;
    v10 = v0;
    v1 = *(_DWORD *)(HalpPerformanceCounter + 228);
    v21 = &v11;
    v11 = v1;
    if ( HalpAlwaysOnTimer )
      v2 = *(_DWORD *)(HalpAlwaysOnTimer + 228);
    else
      v2 = 0;
    v12 = v2;
    v23 = &v12;
    v24 = 4LL;
    if ( *(_QWORD *)&HalpVpptPhysicalTimer )
      v3 = *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL);
    else
      v3 = 0;
    v13 = v3;
    v25 = &v13;
    v26 = 4LL;
    if ( HalpAlwaysOnCounter )
      v4 = *(_DWORD *)(HalpAlwaysOnCounter + 228);
    else
      v4 = 0;
    v14 = v4;
    v27 = &v14;
    v28 = 4LL;
    if ( HalpWatchdogTimer )
      v5 = *(_DWORD *)(HalpWatchdogTimer + 228);
    else
      v5 = 0;
    v15 = v5;
    v29 = &v15;
    v30 = 4LL;
    if ( HalpAuxiliaryCounter )
      v6 = *(_DWORD *)(HalpAuxiliaryCounter + 228);
    else
      v6 = 0;
    v16 = v6;
    v31 = &v16;
    v7 = 0;
    v32 = 4LL;
    if ( HalpStallCounter )
      v7 = *(_DWORD *)(HalpStallCounter + 228);
    v17 = v7;
    v33 = &v17;
    v34 = 4LL;
    if ( (KeFeatureBits2 & 0x800000) == 0
      || qword_140FBB3E0
      || (*(_DWORD *)(HalpStallCounter + 224) & 0x6000) != 0
      || (v8 = 1, *(_DWORD *)(HalpStallCounter + 228) != 5) )
    {
      v8 = 0;
    }
    v9 = v8;
    v36 = 1LL;
    v35 = &v9;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E024C8,
      (unsigned __int8 *)byte_140044C01,
      0LL,
      0LL,
      0xBu,
      &v18);
  }
  if ( HalpDiagnosticEventsRegistered )
  {
    if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_PLATFORM_CLOCK_TIMER, 0LL, 0, 0LL);
    if ( (MEMORY[0xFFFFF780000003C6] & 1) == 0 )
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_NO_QPC_BYPASS, 0LL, 0, 0LL);
  }
}
