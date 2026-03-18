/*
 * XREFs of ObFastReplaceObject @ 0x1404819D8
 * Callers:
 *     MmChangeSectionBackingFile @ 0x1404816CC (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1404817E0 (CcChangeBackingFileObject.c)
 *     MiEnableImageDirectMap @ 0x1406F9834 (MiEnableImageDirectMap.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteDeviceMap @ 0x140B5C818 (ObpDeleteDeviceMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObFastReplaceObject(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  int v5; // ecx

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFuLL);
    if ( v2 <= 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 0x10uLL, v2 + 15);
  }
  v3 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v3 & 0xF;
    if ( v5 )
      _InterlockedAdd64((volatile signed __int64 *)(result - 48), -v5);
  }
  return result;
}
