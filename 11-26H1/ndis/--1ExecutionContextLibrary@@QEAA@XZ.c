/*
 * XREFs of ??1ExecutionContextLibrary@@QEAA@XZ @ 0x140146128
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x14013B6CC (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ??1NdisPoll@@QEAA@XZ @ 0x14014632C (--1NdisPoll@@QEAA@XZ.c)
 * Callees:
 *     KLoaderDereferenceModule @ 0x1400DEF80 (KLoaderDereferenceModule.c)
 */

void __fastcall ExecutionContextLibrary::~ExecutionContextLibrary(ExecutionContextLibrary *this)
{
  struct KLOADER_MODULE_REFERENCE__ *v1; // rcx

  v1 = (struct KLOADER_MODULE_REFERENCE__ *)*((_QWORD *)this + 19);
  if ( v1 )
    KLoaderDereferenceModule(v1);
}
