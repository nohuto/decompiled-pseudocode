/*
 * XREFs of RtlSetUserMemory @ 0x1402D2218
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     GdiProcessCallout @ 0x1401ADA20 (GdiProcessCallout.c)
 *     RtlSetUserMemory$thunk$13760698665666989659 @ 0x14024E080 (RtlSetUserMemory$thunk$13760698665666989659.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 *     RtlSetVolatileMemory @ 0x14024BCB0 (RtlSetVolatileMemory.c)
 */

void *__fastcall RtlSetUserMemory(void *a1, unsigned __int8 a2, SIZE_T a3)
{
  int v4; // esi

  v4 = a2;
  ProbeForRead_0(a1, a3, 1u);
  return RtlSetVolatileMemory(a1, v4, a3);
}
