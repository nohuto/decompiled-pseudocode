/*
 * XREFs of sub_140880300 @ 0x140880300
 * Callers:
 *     ClipInitHandles @ 0x1406CD030 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140B37C90 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140880300()
{
  qword_140E3E918 = 10LL;
  qword_140E3E908 = 0LL;
  *(struct _LIST_ENTRY **)((char *)&stru_140E3E928.Header.WaitListHead.Flink + 4) = 0LL;
  HIDWORD(stru_140E3E928.Header.WaitListHead.Blink) = 0;
  qword_140E3E910 = 0LL;
  *(_QWORD *)&stru_140E3E928.Header.Lock = 0LL;
  LODWORD(stru_140E3E928.Header.WaitListHead.Flink) = 54;
  qword_140E3E900 = 8LL;
  qword_140E3E920 = (__int64)sub_140A81480;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)&stru_140E3E928.Header.WaitListHead.Blink, L"SHA256", 0LL, 0);
}
