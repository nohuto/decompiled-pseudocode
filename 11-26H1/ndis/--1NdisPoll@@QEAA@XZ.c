/*
 * XREFs of ??1NdisPoll@@QEAA@XZ @ 0x14014632C
 * Callers:
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x140145EC0 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x140146128 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 */

void __fastcall NdisPoll::~NdisPoll(void (**this)(void))
{
  if ( this[20] )
    this[2]();
  ExecutionContextLibrary::~ExecutionContextLibrary((ExecutionContextLibrary *)this);
}
