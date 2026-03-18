/*
 * XREFs of ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x140041CD0
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::IsNativeWslProcess(DXGPROCESS *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 102);
  return (v1 & 0x10) != 0 && (v1 & 0x100) == 0;
}
