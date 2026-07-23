/*
 * XREFs of HsaFlushTb @ 0x1405AC010
 * Callers:
 *     <none>
 * Callees:
 *     HsaFlushTbInternal @ 0x140477D50 (HsaFlushTbInternal.c)
 */

void __fastcall HsaFlushTb(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, __int64 a7)
{
  HsaFlushTbInternal(a1, a2, *(_DWORD *)(a3 + 48), 0, a4, a5, a6, a7);
}
