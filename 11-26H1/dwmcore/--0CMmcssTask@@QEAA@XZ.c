/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1801DB3E4
 * Callers:
 *     ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1801DB214 (--0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1801DB274 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x180207D4C (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x18020A3C4 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18020D338 (--0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  return this;
}
