/*
 * XREFs of sub_1400487B4 @ 0x1400487B4
 * Callers:
 *     sub_14001D0C8 @ 0x14001D0C8 (sub_14001D0C8.c)
 * Callees:
 *     sub_14005A0F8 @ 0x14005A0F8 (sub_14005A0F8.c)
 */

char __fastcall sub_1400487B4(__int64 a1, void *a2)
{
  DWORD LastError; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  DWORD dwFlags; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  v8 = HIDWORD(a1);
  dwFlags = 0;
  if ( GetHandleInformation(a2, &dwFlags) )
    return dwFlags & 1;
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    LastError = GetLastError();
    sub_14005A0F8(*((_QWORD *)off_1400E73D8 + 2), v4, v5, a2, LastError);
  }
  return 0;
}
