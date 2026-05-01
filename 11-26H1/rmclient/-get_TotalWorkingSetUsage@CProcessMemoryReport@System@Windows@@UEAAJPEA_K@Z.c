/*
 * XREFs of ?get_TotalWorkingSetUsage@CProcessMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x1800184C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::get_TotalWorkingSetUsage(
        Windows::System::CProcessMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 6);
  return 0LL;
}
