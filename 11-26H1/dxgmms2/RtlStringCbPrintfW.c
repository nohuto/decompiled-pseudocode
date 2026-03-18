/*
 * XREFs of RtlStringCbPrintfW @ 0x14003F654
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400ABE44 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x1400B48B0 (-VidMmInitializePhysicalAdapter@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1400FCC58 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 >= 0 && v7 <= v5 )
    {
      if ( v7 == v5 )
        pszDest[v5] = 0;
    }
    else
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    return v6;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
