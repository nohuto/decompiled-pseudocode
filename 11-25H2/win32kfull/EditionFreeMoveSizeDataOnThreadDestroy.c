/*
 * XREFs of EditionFreeMoveSizeDataOnThreadDestroy @ 0x1402AC170
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140228654 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 */

void __fastcall EditionFreeMoveSizeDataOnThreadDestroy(__int64 a1, __int64 a2)
{
  MOVESIZEDATA::FreeMoveSizeData((struct MOVESIZEDATA **)(a1 + 712), a2);
}
