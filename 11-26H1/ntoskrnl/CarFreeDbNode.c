/*
 * XREFs of CarFreeDbNode @ 0x140650180
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CarFreeDbNode(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  void *v5; // rcx

  v2 = a2 + 4;
  if ( a2 != (_QWORD *)-32LL )
  {
    v4 = a2[7];
    if ( v4 )
    {
      v5 = *(void **)(v4 + 72);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      ExFreePoolWithTag((PVOID)v2[3], 0);
    }
  }
  ExFreePoolWithTag(a2, 0x6F4E6143u);
}
