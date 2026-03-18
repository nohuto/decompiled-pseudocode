/*
 * XREFs of ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x140058988
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x140058368 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::~CBatchSharedMemoryPoolSet(
        DirectComposition::CBatchSharedMemoryPoolSet *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    ObfDereferenceObject(v1);
}
