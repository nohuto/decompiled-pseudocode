/*
 * XREFs of ObFastReplaceObject @ 0x14047B348
 * Callers:
 *     MmChangeSectionBackingFile @ 0x14047B03C (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x14047B150 (CcChangeBackingFileObject.c)
 *     MiEnableImageDirectMap @ 0x1406FE504 (MiEnableImageDirectMap.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteDeviceMap @ 0x140B5F738 (ObpDeleteDeviceMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
