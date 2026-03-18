/*
 * XREFs of sub_1407F0BB4 @ 0x1407F0BB4
 * Callers:
 *     ClipInitHandles @ 0x140649760 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140AA1968 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_1407F0BB4()
{
  qword_140E3E718 = 10LL;
  qword_140E3E708 = 0LL;
  qword_140E3E734 = 0LL;
  dword_140E3E73C = 0;
  qword_140E3E710 = 0LL;
  qword_140E3E728 = 0LL;
  dword_140E3E730 = 54;
  qword_140E3E700 = 8LL;
  qword_140E3E720 = (__int64)sub_140909220;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140E3E734 + 4), L"SHA256", 0LL, 0);
}
