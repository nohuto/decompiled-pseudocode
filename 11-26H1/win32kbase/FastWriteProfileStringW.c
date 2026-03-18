/*
 * XREFs of FastWriteProfileStringW @ 0x1400E2BC0
 * Callers:
 *     FastUpdateWinIni @ 0x1401C6670 (FastUpdateWinIni.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 */

void *__fastcall FastWriteProfileStringW(const UNICODE_STRING *a1, unsigned int a2, const WCHAR *a3, _WORD *a4)
{
  void *result; // rax
  void *v7; // rsi
  __int64 v8; // rax
  NTSTATUS v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = OpenCacheKeyEx(a1, a2, 0x20006u, 0LL);
  v7 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = ZwSetValueKey(v7, &DestinationString, 0, 1u, a4, 2 * v8 + 2);
    ZwClose(v7);
    return (void *)(v9 >= 0);
  }
  return result;
}
