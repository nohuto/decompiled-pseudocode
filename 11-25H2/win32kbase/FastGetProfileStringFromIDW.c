/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1400A95E0
 * Callers:
 *     xxxODI_ColorInit @ 0x1400A8E40 (xxxODI_ColorInit.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1400A9AF0 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        PCUNICODE_STRING Source,
        __int64 a2,
        ULONG a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  int v8; // ebx
  BYTE *Text; // rdx
  __int64 v10; // rbx
  unsigned __int64 v12; // [rsp+28h] [rbp-100h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+40h] [rbp-E8h] BYREF
  _WORD v14[80]; // [rsp+50h] [rbp-D8h] BYREF

  MessageResourceEntry = 0LL;
  v8 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, a3, &MessageResourceEntry) < 0 )
  {
LABEL_9:
    v14[v8] = 0;
    goto LABEL_5;
  }
  Text = MessageResourceEntry->Text;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&Text[2 * v10] );
  v8 = v10 - 2;
  if ( v8 >= 0 )
  {
    if ( v8 > 79 )
      v8 = 79;
    memmove(v14, Text, 2LL * v8);
    goto LABEL_9;
  }
LABEL_5:
  LODWORD(v12) = a6;
  return FastGetProfileStringW(Source, a5, v12, a7);
}
