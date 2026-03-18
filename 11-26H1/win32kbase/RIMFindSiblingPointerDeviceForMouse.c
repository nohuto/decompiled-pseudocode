/*
 * XREFs of RIMFindSiblingPointerDeviceForMouse @ 0x1401BDE58
 * Callers:
 *     RIMApplyPTPConfigRemedyWorker @ 0x14013846C (RIMApplyPTPConfigRemedyWorker.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x14017B7F0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 */

__int64 __fastcall RIMFindSiblingPointerDeviceForMouse(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi

  v3 = a2;
  v5 = W32GetUserSessionState(a1, (_DWORD)a2, a3) + 56;
  RIMLockExclusive(v5);
  LODWORD(v3) = RIMFindSiblingPointerDeviceForMouseWorker(a1, v3);
  RIMUnlockExclusive(v5);
  return (unsigned int)v3;
}
