/*
 * XREFs of FastWriteProfileValue @ 0x1400A8870
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     ?WriteRegStringValue@@YAHIPEBG0@Z @ 0x1401C14FC (-WriteRegStringValue@@YAHIPEBG0@Z.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void *__fastcall FastWriteProfileValue(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        ULONG a4,
        PVOID Data,
        ULONG DataSize)
{
  const WCHAR *v7; // rdi
  int v9; // ebx
  BYTE *Text; // rdx
  __int64 v11; // rbx
  void *result; // rax
  void *v13; // rsi
  NTSTATUS v14; // ebx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-B0h] BYREF
  _WORD v17[40]; // [rsp+50h] [rbp-98h] BYREF

  v7 = a3;
  DestinationString = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_7;
  v17[0] = 0;
  v9 = 0;
  MessageResourceEntry = 0LL;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)a3, &MessageResourceEntry) >= 0 )
  {
    Text = MessageResourceEntry->Text;
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&Text[2 * v11] );
    v9 = v11 - 2;
    if ( v9 < 0 )
      goto LABEL_6;
    if ( v9 > 39 )
      v9 = 39;
    memmove(v17, Text, 2LL * v9);
  }
  v17[v9] = 0;
LABEL_6:
  v7 = v17;
LABEL_7:
  result = (void *)OpenCacheKeyEx(Source);
  v13 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v14 = ZwSetValueKey(v13, &DestinationString, 0, a4, Data, DataSize);
    ZwClose(v13);
    return (void *)(v14 >= 0);
  }
  return result;
}
