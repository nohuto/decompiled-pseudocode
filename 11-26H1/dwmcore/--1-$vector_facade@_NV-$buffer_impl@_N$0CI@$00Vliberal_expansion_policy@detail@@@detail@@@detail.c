/*
 * XREFs of ??1?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BFB7C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     AppendCustomSamplerShaderBody @ 0x1801452A0 (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

int __fastcall detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // r8
  __int64 v3; // r8
  void *v4; // rbx
  int result; // eax
  bool v6; // zf
  HANDLE ProcessHeap; // rax
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = a1[1] - *a1;
  if ( v2 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v8, *a1, v2);
    v1[1] -= v3;
  }
  v4 = (void *)*v1;
  result = (_DWORD)v1 + 24;
  v6 = *v1 == (_QWORD)(v1 + 3);
  *v1 = 0LL;
  if ( v6 )
    v4 = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v4);
  }
  return result;
}
