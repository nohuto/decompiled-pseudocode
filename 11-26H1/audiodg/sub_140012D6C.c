/*
 * XREFs of sub_140012D6C @ 0x140012D6C
 * Callers:
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140012B40 @ 0x140012B40 (sub_140012B40.c)
 */

__int64 sub_140012D6C()
{
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF

  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v2 = -1;
  RtlPublishWnfStateData(0x2821B2CA3BC2875LL, 0LL, &v2, 4LL, 0LL);
  dword_1400E8920 = 50000;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementThresholdHns",
    0x18u,
    0LL,
    &dword_1400E8920,
    &pcbData);
  pcbData = 8;
  dword_1400E85B0 = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"CpuManagementAudioReservedCpuMask",
    0x48u,
    0LL,
    &qword_1400E85B8,
    &pcbData);
  sub_1400125D4(&qword_1400E8718);
  return sub_140012B40(&qword_1400E8718);
}
