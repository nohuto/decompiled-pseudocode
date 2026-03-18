/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1401E0654
 * Callers:
 *     RIMApplyPTPConfigRemedyWorker @ 0x1400F1818 (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rbx

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  LODWORD(v2) = RIMFindSiblingPointerDeviceForMouseWorker(a1, v2);
  RIMUnlockExclusive(UserSessionState + 56);
  return (unsigned int)v2;
}
