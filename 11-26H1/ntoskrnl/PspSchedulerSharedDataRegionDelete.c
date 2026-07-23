/*
 * XREFs of PspSchedulerSharedDataRegionDelete @ 0x140AEDE30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 */

void __fastcall PspSchedulerSharedDataRegionDelete(_QWORD *a1)
{
  __int64 v1; // rdx
  struct _KPROCESS **v2; // rdi
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v1 = a1[23];
  v2 = (struct _KPROCESS **)(a1 + 20);
  if ( v1 )
  {
    MiUnmapViewOfSection(*v2, v1, 0LL, 0);
    a1[23] = 0LL;
  }
  v4 = a1[22];
  if ( v4 )
  {
    MiRemoveFromSystemSpace(v4);
    a1[22] = 0LL;
  }
  v5 = (void *)a1[21];
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x61537350u);
    a1[21] = 0LL;
  }
  if ( *v2 )
  {
    ObfDereferenceObjectWithTag(*v2, 0x61537350u);
    *v2 = 0LL;
  }
}
