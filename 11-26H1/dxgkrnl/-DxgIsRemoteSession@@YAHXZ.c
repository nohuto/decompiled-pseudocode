/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1403195B8
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
