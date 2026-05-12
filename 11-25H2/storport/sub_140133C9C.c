/*
 * XREFs of sub_140133C9C @ 0x140133C9C
 * Callers:
 *     sub_14009FE10 @ 0x14009FE10 (sub_14009FE10.c)
 * Callees:
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     sub_14003AD8C @ 0x14003AD8C (sub_14003AD8C.c)
 */

__int64 __fastcall sub_140133C9C(
        void *a1,
        int a2,
        WCHAR *a3,
        PWSTR *a4,
        WCHAR *a5,
        ULONG a6,
        WCHAR *a7,
        int a8,
        HANDLE Handle)
{
  __int64 result; // rax

  Handle = 0LL;
  result = sub_14003AD8C(a1, 1u, &Handle, L"Logical Unit Id %d", a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      sub_14003A5EC(Handle, L"InquiryData", 3u, a3, 0x24u);
    if ( a4 && *(_WORD *)a4 )
      sub_14003A5EC(Handle, L"SerialNumber", 0x7232002u, a4[1], *(unsigned __int16 *)a4);
    if ( a3 )
      sub_14003A5EC(Handle, L"Identifier", 0x7232002u, a3 + 4, 0x1Cu);
    if ( a7 )
      sub_14003A5EC(Handle, L"DeviceType", 1u, a7, 2 * a8 + 2);
    if ( a5 )
      sub_14003A5EC(Handle, L"DeviceIdentifierPage", 3u, a5, a6);
    ZwClose(Handle);
    return 0LL;
  }
  return result;
}
