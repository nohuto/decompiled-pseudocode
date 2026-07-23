/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140AA7B04
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x140AA7894 (MiCreateRetpolineRelocationInformation.c)
 *     MiFreeImageLoadConfig @ 0x140AA7AAC (MiFreeImageLoadConfig.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineRelocationInformation(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)P[7];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
