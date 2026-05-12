/*
 * XREFs of sub_1400BB7E4 @ 0x1400BB7E4
 * Callers:
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400BB7E4(__int64 a1)
{
  __int64 result; // rax

  if ( byte_140168DE0 )
    return 3221225473LL;
  unk_14016940C = 0;
  if ( KeRegisterBugCheckReasonCallback(
         (PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_1401692A0.Reserved,
         CallbackRoutine,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"PortDriverStandard") != 1 )
    return 3221225473LL;
  byte_140168DE0 = 1;
  result = 0LL;
  qword_140168DD8 = a1;
  return result;
}
