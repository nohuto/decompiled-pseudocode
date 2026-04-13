/*
 * XREFs of ?get_Delay@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z @ 0x180078890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_Delay(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        struct Windows::Foundation::TimeSpan *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 20);
  return 0LL;
}
