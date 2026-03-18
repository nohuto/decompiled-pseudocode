/*
 * XREFs of MiDeletePageFileSectionNodes @ 0x140A8186C
 * Callers:
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 * Callees:
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 *     MiAweControlArea @ 0x14048FC84 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1407014B8 (MiDeleteSectionAwe.c)
 */

__int64 __fastcall MiDeletePageFileSectionNodes(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a1 + 128;
  do
  {
    v3 = *(void **)(v2 + 8);
    if ( v3 )
    {
      MiUpdateSystemProtoPtesTree((_QWORD *)(v2 + 56), 0);
      MiFreeProtoPool(v3, 8LL * *(unsigned int *)(v2 + 44));
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  result = MiAweControlArea(a1);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v5);
  return result;
}
