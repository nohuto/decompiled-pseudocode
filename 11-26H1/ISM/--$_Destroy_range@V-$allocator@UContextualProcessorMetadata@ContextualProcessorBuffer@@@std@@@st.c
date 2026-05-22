/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18001CE04
 * Callers:
 *     ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18009614C (--$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@U.c)
 *     ??1_Reallocation_guard@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A7540 (--1_Reallocation_guard@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$alloc.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001CF2C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this,
        ContextualProcessorBuffer::ContextualProcessorMetadata *a2)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v3);
      v3 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v3 + 224);
    }
    while ( v3 != a2 );
  }
}
