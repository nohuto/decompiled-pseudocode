/*
 * XREFs of ??1?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180182B70
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

unsigned int __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  unsigned int result; // eax
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *v5; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  result = -1431655765;
  v2 = a1;
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v3 )
  {
    result = (unsigned int)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *a1, v3);
    v2[1] += -24 * v4;
  }
  v5 = (__int64 *)*v2;
  *v2 = 0LL;
  if ( v5 != v2 + 3 )
  {
    if ( v5 )
    {
      ProcessHeap = GetProcessHeap();
      return HeapFree(ProcessHeap, 0, v5);
    }
  }
  return result;
}
