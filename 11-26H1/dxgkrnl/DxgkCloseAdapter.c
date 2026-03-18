/*
 * XREFs of DxgkCloseAdapter @ 0x1402E7A90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCloseAdapterImpl @ 0x1402E7AB0 (DxgkCloseAdapterImpl.c)
 */

__int64 __fastcall DxgkCloseAdapter(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkCloseAdapterImpl(a1, a2);
}
