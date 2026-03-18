/*
 * XREFs of FastUpdateWinIni @ 0x1401A21D0
 * Callers:
 *     <none>
 * Callees:
 *     FastWriteProfileStringW @ 0x1400AA950 (FastWriteProfileStringW.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void *__fastcall FastUpdateWinIni(const UNICODE_STRING *a1, unsigned int a2, ULONG a3, _WORD *a4)
{
  int v7; // ebx
  BYTE *Text; // rdx
  __int64 v9; // rbx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-98h] BYREF
  WCHAR v12[40]; // [rsp+40h] [rbp-88h] BYREF

  MessageResourceEntry = 0LL;
  v7 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, a3, &MessageResourceEntry) < 0 )
  {
LABEL_8:
    v12[v7] = 0;
    return FastWriteProfileStringW(a1, a2, v12, a4);
  }
  Text = MessageResourceEntry->Text;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&Text[2 * v9] );
  v7 = v9 - 2;
  if ( v7 >= 0 )
  {
    if ( v7 > 39 )
      v7 = 39;
    memmove(v12, Text, 2LL * v7);
    goto LABEL_8;
  }
  return FastWriteProfileStringW(a1, a2, v12, a4);
}
