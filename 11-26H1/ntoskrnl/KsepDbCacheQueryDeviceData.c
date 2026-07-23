/*
 * XREFs of KsepDbCacheQueryDeviceData @ 0x1407BF914
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x1409D7EA8 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // edi
  const UNICODE_STRING *v8; // r15
  const UNICODE_STRING *v9; // r14
  const UNICODE_STRING *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v7 = -1073741275;
  if ( a1 )
  {
    v8 = (const UNICODE_STRING *)(a1 + 56);
    v9 = *(const UNICODE_STRING **)(a1 + 56);
    v7 = 0;
    String2 = 0LL;
    RtlInitUnicodeString(&String2, a2);
    do
    {
      if ( v9 == v8 )
        goto LABEL_9;
      v10 = v9;
      v9 = *(const UNICODE_STRING **)&v9->Length;
    }
    while ( !RtlEqualUnicodeString(v10 + 1, &String2, 1u) );
    if ( !v10 )
    {
LABEL_9:
      *a4 = 0;
      return v7;
    }
    *a3 = *(_DWORD *)(&v10[2].MaximumLength + 1);
    v11 = *(_DWORD *)&v10[2].Length;
    v12 = *a4;
    *a4 = v11;
    if ( v12 >= v11 )
      memmove(a5, v10[2].Buffer, *(unsigned int *)&v10[2].Length);
    else
      return (unsigned int)-1073741789;
  }
  return v7;
}
