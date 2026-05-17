/*
 * XREFs of LdrSetDllManifestProber @ 0x1801056B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrSetDllManifestProber(__int64 a1, __int64 a2, __int64 (*a3)(void))
{
  LdrpManifestProberRoutine = a1;
  LdrpCreateActCtxLanguageW = a2;
  LdrpReleaseActCtxW = a3;
}
