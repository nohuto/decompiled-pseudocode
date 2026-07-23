/*
 * XREFs of sub_140886700 @ 0x140886700
 * Callers:
 *     ClipInitHandles @ 0x1406D1060 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140B39EA0 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140886700()
{
  qword_140E3EA98 = 10LL;
  qword_140E3EA88 = 0LL;
  *(struct _LIST_ENTRY **)((char *)&stru_140E3EAA8.Header.WaitListHead.Flink + 4) = 0LL;
  HIDWORD(stru_140E3EAA8.Header.WaitListHead.Blink) = 0;
  qword_140E3EA90 = 0LL;
  *(_QWORD *)&stru_140E3EAA8.Header.Lock = 0LL;
  LODWORD(stru_140E3EAA8.Header.WaitListHead.Flink) = 54;
  qword_140E3EA80 = 8LL;
  qword_140E3EAA0 = (__int64)sub_140A872F0;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)&stru_140E3EAA8.Header.WaitListHead.Blink, L"SHA256", 0LL, 0);
}
