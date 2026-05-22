/*
 * XREFs of ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18001CC10
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$9 @ 0x1801D442A (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$9.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$12 @ 0x1801D46B0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$12.c)
 * Callees:
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18001CF2C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        ContextualProcessorBuffer::ContextualProcessorMetadata **a1)
{
  ContextualProcessorBuffer::ContextualProcessorMetadata *v1; // rbx
  ContextualProcessorBuffer::ContextualProcessorMetadata *v3; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(v1);
      v1 = (ContextualProcessorBuffer::ContextualProcessorMetadata *)((char *)v1 + 224);
    }
    result = std::_Deallocate<16>(*a1, 32 * ((a1[2] - *a1) >> 5));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
