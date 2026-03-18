/*
 * XREFs of FastWriteProfileValue @ 0x1400E2410
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401EA0EC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void *__fastcall FastWriteProfileValue(
        PCUNICODE_STRING Source,
        unsigned int a2,
        const WCHAR *a3,
        ULONG a4,
        PVOID Data,
        ULONG DataSize)
{
  const WCHAR *v7; // rdi
  int v10; // ebx
  BYTE *Text; // rdx
  __int64 v12; // rbx
  void *result; // rax
  void *v14; // rsi
  NTSTATUS v15; // ebx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-B0h] BYREF
  _WORD v18[40]; // [rsp+50h] [rbp-98h] BYREF

  v7 = a3;
  DestinationString = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_7;
  v18[0] = 0;
  v10 = 0;
  MessageResourceEntry = 0LL;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)a3, &MessageResourceEntry) >= 0 )
  {
    Text = MessageResourceEntry->Text;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&Text[2 * v12] );
    v10 = v12 - 2;
    if ( v10 < 0 )
      goto LABEL_6;
    if ( v10 > 39 )
      v10 = 39;
    memmove(v18, Text, 2LL * (unsigned int)v10);
  }
  v18[v10] = 0;
LABEL_6:
  v7 = v18;
LABEL_7:
  result = OpenCacheKeyEx(Source, a2, 0x20006u, 0LL);
  v14 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v15 = ZwSetValueKey(v14, &DestinationString, 0, a4, Data, DataSize);
    ZwClose(v14);
    return (void *)(v15 >= 0);
  }
  return result;
}
