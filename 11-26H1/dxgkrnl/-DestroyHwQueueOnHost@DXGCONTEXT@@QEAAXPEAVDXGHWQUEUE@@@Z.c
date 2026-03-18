/*
 * XREFs of ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1401E17C8
 * Callers:
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7B58 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022E314 (-VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueueOnHost(DXGCONTEXT *this, struct DXGHWQUEUE *a2)
{
  unsigned int HostProcess; // eax

  if ( *((_DWORD *)this + 7) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyHwQueue(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 4712LL),
      HostProcess,
      *((_DWORD *)a2 + 7));
  }
}
