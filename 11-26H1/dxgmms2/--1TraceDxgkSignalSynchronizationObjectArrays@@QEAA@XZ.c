/*
 * XREFs of ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x1400129BC
 * Callers:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays(
        TraceDxgkSignalSynchronizationObjectArrays *this)
{
  char *v2; // rcx
  char *v3; // rcx
  void *v4; // rcx

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 != (char *)this + 80 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 24) = 0;
  v3 = (char *)*((_QWORD *)this + 5);
  if ( v3 != (char *)this + 48 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  v4 = *(void **)this;
  if ( *(TraceDxgkSignalSynchronizationObjectArrays **)this != (TraceDxgkSignalSynchronizationObjectArrays *)((char *)this + 8)
    && v4 )
  {
    ExFreePoolWithTag(v4, 0);
  }
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 6) = 0;
}
