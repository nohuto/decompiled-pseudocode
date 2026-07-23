/*
 * XREFs of ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405FBB50
 * Callers:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KiUpdateChildrenCpuTarget(struct _LIST_ENTRY *a1, unsigned __int8 a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _KSCHEDULING_GROUP *v5; // rcx

  Flink = a1->Flink;
  do
  {
    v5 = (struct _KSCHEDULING_GROUP *)&Flink[-4];
    if ( (HIDWORD(Flink[-4].Flink) & 1) != 0 )
      KiUpdateCpuTargetByRate(v5, a2);
    else
      KiUpdateCpuTargetByWeight(v5, a2);
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
}
