/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1404FDB4C
 * Callers:
 *     KiBugcheckUnloadDebugSymbols @ 0x1405E797C (KiBugcheckUnloadDebugSymbols.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140534980 (DebugService2.c)
 */

__int64 __fastcall DbgUnLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  v4[2] = 0LL;
  return DebugService2(a1, v4, 4LL);
}
