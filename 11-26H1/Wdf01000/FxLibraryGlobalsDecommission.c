/*
 * XREFs of FxLibraryGlobalsDecommission @ 0x14009671C
 * Callers:
 *     FxLibraryCommonDecommission @ 0x14008EB1C (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxLibraryGlobalsDecommission()
{
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  unk_1400C9070 = 0LL;
  unk_1400C9084 = 0;
  if ( CallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
    CallbackRecord.CallbackRoutine = 0LL;
    if ( qword_1400C9030 )
    {
      *(_QWORD *)&dword_1400C9028 = 0LL;
      ExFreePoolWithTag(qword_1400C9030, 0);
      qword_1400C9030 = 0LL;
    }
  }
  unk_1400C9008 = 0;
}
