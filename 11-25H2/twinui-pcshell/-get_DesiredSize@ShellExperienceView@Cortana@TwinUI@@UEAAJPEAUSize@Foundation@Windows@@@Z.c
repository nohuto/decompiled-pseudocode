/*
 * XREFs of ?get_DesiredSize@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1803B6620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_DesiredSize(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 92);
  return result;
}
