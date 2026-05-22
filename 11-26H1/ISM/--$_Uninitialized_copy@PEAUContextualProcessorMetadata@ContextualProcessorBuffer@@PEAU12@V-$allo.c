/*
 * XREFs of ??$_Uninitialized_copy@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@00AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18001DA84
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x18001D8F8 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18001DAEC (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall std::_Uninitialized_copy<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        struct ContextualProcessorBuffer::ContextualProcessorMetadata *a1,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a2,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a3)
{
  const struct ContextualProcessorBuffer::ContextualProcessorMetadata *i; // rdi

  for ( i = a1; i != a2; i = (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)i + 224) )
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(a3, i);
    a3 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)a3 + 224);
  }
  return a3;
}
