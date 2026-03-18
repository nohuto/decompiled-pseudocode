/*
 * XREFs of ?RtlStringCbVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1400681F4
 * Callers:
 *     RESOURCE_HUB_STRING_PRINTF @ 0x1400681BC (RESOURCE_HUB_STRING_PRINTF.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1400936A4 (RtlStringVPrintfWorkerW_0.c)
 */

__int64 __fastcall RtlStringCbVPrintfExW(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        NTSTRSAFE_PCWSTR pszFormat,
        char *a7)
{
  size_t v7; // rdx
  NTSTATUS v10; // ecx
  size_t v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = (size_t)a4;
  v7 = a2 >> 1;
  if ( v7 && v7 <= 0x7FFFFFFF )
  {
    v12 = 0LL;
    v10 = RtlStringVPrintfWorkerW_0(a1, v7, &v12, pszFormat, a7);
    if ( v10 >= 0 || v10 == -2147483643 )
    {
      if ( a3 )
        *a3 = &a1[v12];
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
