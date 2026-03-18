/*
 * XREFs of ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F6FD0
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140222370 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019FD58 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 */

HWND __fastcall CInputDest::GetContainerHwndDest(CInputDest *this)
{
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // r8
  HWND result; // rax

  ContainerInfo = CInputDest::GetContainerInfo(this);
  result = 0LL;
  if ( ContainerInfo )
    return (HWND)*((_QWORD *)ContainerInfo + 1);
  return result;
}
