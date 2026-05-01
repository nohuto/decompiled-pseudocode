/*
 * XREFs of ??0CIAMGlobals@@QEAA@XZ @ 0x18004C668
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18004B774 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ??0CReportWindowVisibilityChange@@QEAA@XZ @ 0x18004D2AC (--0CReportWindowVisibilityChange@@QEAA@XZ.c)
 */

CIAMGlobals *__fastcall CIAMGlobals::CIAMGlobals(CIAMGlobals *this)
{
  int UniqueContext; // eax

  *(_QWORD *)this = 0LL;
  CReportWindowVisibilityChange::CReportWindowVisibilityChange((CIAMGlobals *)((char *)this + 8));
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  *((_DWORD *)this + 23) = GetCurrentProcessId();
  *((_QWORD *)this + 12) = GetShellWindow();
  UniqueContext = SHTaskPoolGetUniqueContext();
  *((_WORD *)this + 54) = 0;
  *((_DWORD *)this + 26) = UniqueContext;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = SHTaskPoolGetUniqueContext();
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 55) = GlobalAddAtomW(L"IAMWindowPropertyIndexBehaviorFlags");
  return this;
}
