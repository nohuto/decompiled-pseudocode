/*
 * XREFs of ??0DXGADAPTERSYNCOBJECTCA@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGSYNCOBJECT@@@Z @ 0x14040ED0C
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     <none>
 */

DXGADAPTERSYNCOBJECTCA *__fastcall DXGADAPTERSYNCOBJECTCA::DXGADAPTERSYNCOBJECTCA(
        DXGADAPTERSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2,
        struct DXGSYNCOBJECT *a3)
{
  DXGADAPTERSYNCOBJECTCA *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  result = this;
  *((_QWORD *)this + 21) = a3;
  *(_OWORD *)((char *)this + 152) = 0LL;
  return result;
}
