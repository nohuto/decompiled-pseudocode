/*
 * XREFs of ??1?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180187F2C
 * Callers:
 *     ??_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z @ 0x180187EC0 (--_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C2C0C (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 */

int __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8
  void *v3; // rbx
  int result; // eax
  bool v5; // zf
  HANDLE ProcessHeap; // rax

  v2 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1) >> 4);
  if ( v2 )
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  v3 = (void *)*a1;
  result = (_DWORD)a1 + 24;
  v5 = *a1 == (_QWORD)(a1 + 3);
  *a1 = 0LL;
  if ( v5 )
    v3 = 0LL;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v3);
  }
  return result;
}
