/*
 * XREFs of sub_140036A30 @ 0x140036A30
 * Callers:
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 * Callees:
 *     <none>
 */

char sub_140036A30()
{
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_1400E9680 )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      byte_1400E9730 = pvData != 0;
    byte_1400E9680 = 1;
  }
  return byte_1400E9730;
}
