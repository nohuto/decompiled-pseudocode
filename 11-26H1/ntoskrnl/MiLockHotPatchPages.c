/*
 * XREFs of MiLockHotPatchPages @ 0x140877998
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140879848 (MiPrepareDriverForHotPatch.c)
 * Callees:
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchExtent @ 0x1408B12E0 (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v6 = a4;
  v11 = 0;
  v12 = 0;
  while ( a3 )
  {
    RtlDetermineHotPatchExtent(a5, *(_DWORD *)(a2 + 4LL * a6), 34404, (unsigned int)&v11, (__int64)&v12);
    result = MiLockDriverPageRange(a1, v11, v12, 1, 0LL);
    if ( (int)result < 0 )
      return result;
    a2 += 4 * v6;
    --a3;
  }
  return 0LL;
}
