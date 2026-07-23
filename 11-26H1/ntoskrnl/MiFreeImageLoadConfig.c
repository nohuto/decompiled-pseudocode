/*
 * XREFs of MiFreeImageLoadConfig @ 0x140AA7AAC
 * Callers:
 *     MiRelocateCleanup @ 0x14099B9E4 (MiRelocateCleanup.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140AA79E0 (MiFreeRelocations.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140AA7B04 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
    SddlpFree(v4);
}
