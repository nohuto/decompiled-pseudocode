/*
 * XREFs of ??1DockProcessor@@UEAA@XZ @ 0x1801BC730
 * Callers:
 *     ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801BC7A0 (--_EDockProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DockProcessor::~DockProcessor(DockProcessor *this)
{
  wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)this + 9);
  NonPointerProcessor::~NonPointerProcessor(this);
}
