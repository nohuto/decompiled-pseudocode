/*
 * XREFs of ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1401A9968
 * Callers:
 *     ??0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z @ 0x1401A99D4 (--0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z.c)
 *     ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A9A50 (--1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CActivationObjectManager::ActivationObjectDescriptor *__fastcall CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
        CActivationObjectManager::ActivationObjectDescriptor *this,
        PEPROCESS *a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    *(_DWORD *)this = (unsigned int)PsGetProcessId(a2[3]) & 0xFFFFFFFC;
    *((_DWORD *)this + 1) = (unsigned int)PsGetThreadId(a2[4]);
    *((_QWORD *)this + 1) = a2[5];
  }
  return this;
}
