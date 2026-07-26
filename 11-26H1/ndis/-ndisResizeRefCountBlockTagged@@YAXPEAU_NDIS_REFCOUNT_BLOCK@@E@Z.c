/*
 * XREFs of ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x14003F830
 * Callers:
 *     ?ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x14003F7E0 (-ndisResizeRefCountBlock@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140019B10 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __fastcall ndisResizeRefCountBlockTagged(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *Pool2; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v5; // rdi
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rbp
  $68DCC1BC935CB060CAA69B8914A15AB0 *v7; // rcx
  unsigned __int8 *p_NumOverflowTaggedEntries; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v9; // rcx
  unsigned __int16 v10; // bp
  unsigned __int16 i; // bp

  Pool2 = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePool2(64LL, 2 * (unsigned int)a2, 2020754510LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
      memmove(Pool2, Tags, 2LL * a1->NumOverflowTaggedEntries);
    v7 = &a1->8;
    p_NumOverflowTaggedEntries = &a1->NumOverflowTaggedEntries;
    if ( a1->Type )
    {
      if ( a1->Type != 1 )
        goto LABEL_8;
      v10 = 0;
      v7 = &a1->8;
      p_NumOverflowTaggedEntries = &a1->NumOverflowTaggedEntries;
      if ( !a1->NumRefTags )
        goto LABEL_8;
      do
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + v10++));
      while ( v10 < a1->NumRefTags );
    }
    else
    {
      v7 = &a1->8;
      p_NumOverflowTaggedEntries = &a1->NumOverflowTaggedEntries;
      if ( !Tags )
      {
LABEL_8:
        v7->TaggedRefCounts.Tags = v5;
        *p_NumOverflowTaggedEntries = a2;
        return;
      }
      ExFreePoolWithTag(Tags, 0);
      a1->TaggedRefCounts.Tags = 0LL;
    }
    p_NumOverflowTaggedEntries = &a1->NumOverflowTaggedEntries;
    v7 = &a1->8;
    goto LABEL_8;
  }
  if ( a1->Type )
  {
    if ( a1->Type == 1 )
    {
      for ( i = 0; i < a1->NumRefTags; ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + i++)) )
        ;
    }
  }
  else
  {
    v9 = a1->TaggedRefCounts.Tags;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      a1->TaggedRefCounts.Tags = 0LL;
      a1->NumOverflowTaggedEntries = 0;
    }
  }
  a1->Type = 2;
}
