/*
 * XREFs of ?get_TotalCommitLimit@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z @ 0x180011430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::get_TotalCommitLimit(
        Windows::System::CAppMemoryReport *this,
        unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 9);
  return 0LL;
}
