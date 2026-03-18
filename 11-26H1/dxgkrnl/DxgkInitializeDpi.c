/*
 * XREFs of DxgkInitializeDpi @ 0x140415440
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x140415458 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 */

__int64 __fastcall DxgkInitializeDpi(DpiPersistence *a1)
{
  return DpiPersistence::SaveHKCUPathInSessionData(a1);
}
