/*
 * XREFs of CcUnmapFileOffsetFromSystemCache @ 0x14039E980
 * Callers:
 *     <none>
 * Callees:
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall CcUnmapFileOffsetFromSystemCache(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v3 + 4) )
    KeBugCheckEx(0x34u, 0x15D3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return CcUnmapVacbArray(v3, a2, a3, 0LL, 0, 1);
}
