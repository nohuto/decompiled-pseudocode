/*
 * XREFs of GetNormalizedMouseSensitivityFactor @ 0x140086498
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x140085DD4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetNormalizedMouseSensitivityFactor(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  signed int v8; // r8d
  int v9; // eax

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16360);
  if ( (unsigned int)(*(_DWORD *)(v4 + 104) - 1) > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 541LL);
  v5 = *(_DWORD *)(v4 + 104);
  LODWORD(v6) = *(_DWORD *)(v4 + 108);
  if ( !v5 || v5 > 0x14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 534LL);
  if ( a1 )
  {
    v7 = *(unsigned __int16 *)(a1 + 20);
    if ( (unsigned int)v7 > 0x60 )
    {
      v8 = ((int)v6 >> 31) & 0xFFFFFFFE;
      v9 = -(int)v6;
      if ( (int)v6 > 0 )
        v9 = v6;
      v6 = (v7 * v9 + 48) / 96;
      if ( v6 > 0x7FFFFFFF )
      {
        LODWORD(v6) = 0x80000000;
        if ( v8 > -1 )
          LODWORD(v6) = 0x7FFFFFFF;
      }
      else if ( v8 <= -1 )
      {
        LODWORD(v6) = (v7 * v9 + 48) / -96;
      }
    }
  }
  return (unsigned int)v6;
}
