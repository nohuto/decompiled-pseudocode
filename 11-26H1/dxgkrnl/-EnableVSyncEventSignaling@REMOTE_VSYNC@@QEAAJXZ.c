/*
 * XREFs of ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED684
 * Callers:
 *     DxgkModifyVSyncWaiterInternal @ 0x1402A1E80 (DxgkModifyVSyncWaiterInternal.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED638 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 * Callees:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403ED6BC (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::EnableVSyncEventSignaling(BLTQUEUE **this)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  result = REMOTE_VSYNC::EnsureEmulationRunning((REMOTE_VSYNC *)this);
  v3 = result;
  if ( (int)result >= 0 )
  {
    BLTQUEUE::EnableVSyncEventSignaling(this[1]);
    return v3;
  }
  return result;
}
