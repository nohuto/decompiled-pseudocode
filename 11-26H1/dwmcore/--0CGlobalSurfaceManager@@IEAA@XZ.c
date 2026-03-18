/*
 * XREFs of ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x180207D4C
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1801D777C (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1801DB3E4 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CSurfaceManager@@QEAA@XZ @ 0x180207DCC (--0CSurfaceManager@@QEAA@XZ.c)
 *     ??0CLegacySurfaceManager@@IEAA@XZ @ 0x180207E64 (--0CLegacySurfaceManager@@IEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  CSurfaceManager::CSurfaceManager(this);
  CLegacySurfaceManager::CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 152));
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 19) = &CGlobalSurfaceManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalSurfaceManager *)((char *)this + 408));
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  return this;
}
