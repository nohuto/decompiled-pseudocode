/*
 * XREFs of ?get_Timestamp@SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUDateTime@Foundation@6@@Z @ 0x1803F5380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::get_Timestamp(
        Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData *this,
        struct Windows::Foundation::DateTime *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 5);
  return 0LL;
}
