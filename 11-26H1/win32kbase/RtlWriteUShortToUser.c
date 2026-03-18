/*
 * XREFs of RtlWriteUShortToUser @ 0x1402D23A8
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 *     RtlWriteUShortToUser$thunk$4279219291461662417 @ 0x14024E0D0 (RtlWriteUShortToUser$thunk$4279219291461662417.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteUShortToUser(_WORD *a1, __int16 a2)
{
  ProbeForRead_0(a1, 2uLL, 1u);
  *a1 = a2;
}
