/*
 * XREFs of ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x18001CE7C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18001D8F8 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001CF2C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(
        ContextualProcessorBuffer::ContextualProcessorMetadata **a1,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a2,
        __int64 a3,
        __int64 a4)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v4; // rdi
  ContextualProcessorBuffer::ContextualProcessorMetadata *v9; // rbp
  ContextualProcessorBuffer::ContextualProcessorMetadata *result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v4);
      v4 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v4 + 224);
    }
    std::_Deallocate<16>(*a1, 32 * ((a1[2] - *a1) >> 5));
  }
  *a1 = a2;
  a1[1] = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)a2 + 224 * a3);
  result = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)a2 + 224 * a4);
  a1[2] = result;
  return result;
}
