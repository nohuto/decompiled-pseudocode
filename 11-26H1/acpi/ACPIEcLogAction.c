/*
 * XREFs of ACPIEcLogAction @ 0x14001F2C0
 * Callers:
 *     AcpiEcCommonDpcHandler @ 0x14001E93C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcOpRegionHandler @ 0x14001EE90 (ACPIEcOpRegionHandler.c)
 *     ACPIEcQueueEcIrp @ 0x14001F030 (ACPIEcQueueEcIrp.c)
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 *     ACPIEcServiceIoLoop @ 0x14001F500 (ACPIEcServiceIoLoop.c)
 *     ACPIEcWatchdogDpc @ 0x14004DD70 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rsi
  char v9; // r10
  __int64 v10; // rax
  LARGE_INTEGER v11; // rax
  __int16 v12; // cx
  bool v13; // cc
  LARGE_INTEGER result; // rax
  __int64 v15; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v20; // rcx

  v6 = *(unsigned __int8 *)(a1 + 513);
  v8 = a1 + 24 * v6;
  v9 = *(_BYTE *)(v8 + 656);
  if ( (v9 & 0xF0) == 0xA0
    && (v18 = a1 + 24LL * (((_BYTE)v6 - 1) & 0x1F), *(_BYTE *)(v18 + 656) == (*(_BYTE *)(a1 + 496) | a2))
    && *(_BYTE *)(v18 + 657) == a3
    && *(_QWORD *)(v18 + 664) == a4 )
  {
    if ( (*(_BYTE *)(v8 + 657))++ == 0xFF )
      *(_BYTE *)(v8 + 657) = -1;
    result = KeQueryPerformanceCounter(0LL);
    v20 = result.QuadPart + *(unsigned __int16 *)(v8 + 658) - ACPIEcLastActionTime;
    if ( v20 > 0xFFFF )
      LOWORD(v20) = -1;
    *(_WORD *)(v8 + 658) = v20;
  }
  else if ( v9 == (*(_BYTE *)(a1 + 496) | a2) && *(_BYTE *)(v8 + 657) == a3 && *(_QWORD *)(v8 + 664) == a4 )
  {
    v15 = ((_BYTE)v6 + 1) & 0x1F;
    *(_BYTE *)(a1 + 513) = v15;
    *(_BYTE *)(a1 + 24 * v15 + 657) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
    v13 = PerformanceCounter.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    if ( !v13 )
      v17 = -1;
    *(_WORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 513) + 658) = v17;
    result.QuadPart = *(unsigned __int8 *)(a1 + 513);
    *(_BYTE *)(a1 + 24 * result.QuadPart + 656) = *(_BYTE *)(a1 + 496) | 0xA0;
  }
  else
  {
    v10 = ((_BYTE)v6 + 1) & 0x1F;
    *(_BYTE *)(a1 + 513) = v10;
    *(_BYTE *)(a1 + 24 * v10 + 657) = a3;
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = LOWORD(v11.LowPart) - ACPIEcLastActionTime;
    v13 = v11.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = v11.QuadPart;
    if ( !v13 )
      v12 = -1;
    *(_WORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 513) + 658) = v12;
    result.QuadPart = *(unsigned __int8 *)(a1 + 513);
    *(_BYTE *)(a1 + 24 * result.QuadPart + 656) = *(_BYTE *)(a1 + 496) | a2;
    if ( a4 )
    {
      *(_QWORD *)(a1 + 24LL * *(unsigned __int8 *)(a1 + 513) + 664) = a4 - 328;
      result = *(LARGE_INTEGER *)(a4 - 256);
      *(LARGE_INTEGER *)(a1 + 24 * (*(unsigned __int8 *)(a1 + 513) + 28LL)) = result;
    }
  }
  return result;
}
