/*
 * XREFs of ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x180448610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x1804484AC (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 */

CWRLExecuteCommandBase *__fastcall CWRLExecuteCommandBase::`scalar deleting destructor'(
        CWRLExecuteCommandBase *this,
        char a2)
{
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
