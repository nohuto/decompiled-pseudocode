/*
 * XREFs of ?TmExpandMemory@@YAJPEAPEAX_K@Z @ 0x18035D6FC
 * Callers:
 *     ?TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z @ 0x18035D738 (-TmQueryPcwCounter@Cpu@@QEAAJPEAPEAU_COUNTER_BUFFER@@0PEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TmExpandMemory(void **a1, unsigned __int64 a2)
{
  void *v3; // rax

  v3 = operator new[](a2, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
    return 2147942414LL;
  *a1 = v3;
  return 0LL;
}
