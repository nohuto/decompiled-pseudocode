/*
 * XREFs of MiReferenceFileObjectForMap @ 0x140A73EF0
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall MiReferenceFileObjectForMap(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v3 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObjectWithTag(v3, 0x63536D4Du);
  return v3;
}
