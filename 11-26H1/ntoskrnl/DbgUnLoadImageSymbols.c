/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1404F708C
 * Callers:
 *     KiBugcheckUnloadDebugSymbols @ 0x1405EA2EC (KiBugcheckUnloadDebugSymbols.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140536E00 (DebugService2.c)
 */

__int64 __fastcall DbgUnLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  v4[2] = 0LL;
  return DebugService2(a1, v4, 4LL);
}
