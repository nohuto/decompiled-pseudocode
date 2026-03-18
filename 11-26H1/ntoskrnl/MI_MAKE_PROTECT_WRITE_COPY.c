/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x14030B554
 * Callers:
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (*a1 & 0x80u) != 0LL )
  {
    result |= 0x20uLL;
    *a1 = result;
  }
  return result;
}
