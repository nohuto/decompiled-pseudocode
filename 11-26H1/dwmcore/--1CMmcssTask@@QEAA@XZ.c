/*
 * XREFs of ??1CMmcssTask@@QEAA@XZ @ 0x18022C0F0
 * Callers:
 *     ??1CGlobalMit@@UEAA@XZ @ 0x1802285B8 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18022DE24 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180294708 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180294DB0 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18022C118 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CMmcssTask::~CMmcssTask(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
