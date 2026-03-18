/*
 * XREFs of memmove_0 @ 0x14000F810
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x14000A09C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?move@?$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z @ 0x14000EE24 (-move@-$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z.c)
 *     ??$copy_n@PEAPEAX_KPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x14000F1E8 (--$copy_n@PEAPEAX_KPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
