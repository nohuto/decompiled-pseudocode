/*
 * XREFs of EngFreeUserMem @ 0x140035480
 * Callers:
 *     <none>
 * Callees:
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 */

void __stdcall EngFreeUserMem(PVOID pv)
{
  EngTryFreeUserMem(pv);
}
