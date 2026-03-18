/*
 * XREFs of DxgkCloseAdapterInternal @ 0x1401B5330
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1400A19BC (--1CAdapter@@IEAA@XZ.c)
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1402E7AB0 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapterInternal(__int64 a1)
{
  return DxgkCloseAdapterImpl(a1, 0LL);
}
