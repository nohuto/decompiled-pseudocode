/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED5D4
 * Callers:
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
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
