/*
 * XREFs of ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x18006C7F0
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180041E8C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18006C874 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall HampExtendedExecutionFormatDescription(unsigned int a1, const unsigned __int16 *a2, void *a3)
{
  const unsigned __int16 *v5; // rbx

  v5 = a2;
  if ( !a2 || !*a2 )
  {
    if ( a1 > 4 )
      v5 = L"BAD_INPUT";
    else
      v5 = (const unsigned __int16 *)(&EeDefaultDescription)[a1];
  }
  memset_0(a3, 0, 0x80uLL);
  return StringCbPrintfW((unsigned __int16 *)a3, 0x80uLL, L"Ee%d_%s", a1, v5);
}
