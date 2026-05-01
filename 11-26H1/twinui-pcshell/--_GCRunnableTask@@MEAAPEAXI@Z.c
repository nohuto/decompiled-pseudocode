/*
 * XREFs of ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x180601280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x180600930 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall CRunnableTask::`scalar deleting destructor'(CRunnableTask *this, char a2)
{
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
