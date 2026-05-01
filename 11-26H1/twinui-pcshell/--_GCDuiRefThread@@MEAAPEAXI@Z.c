/*
 * XREFs of ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1802113C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDuiRefThread@@MEAA@XZ @ 0x1802AB34C (--1CDuiRefThread@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDuiRefThread *__fastcall CDuiRefThread::`scalar deleting destructor'(CDuiRefThread *this, char a2)
{
  CDuiRefThread::~CDuiRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
