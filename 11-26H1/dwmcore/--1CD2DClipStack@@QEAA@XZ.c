/*
 * XREFs of ??1CD2DClipStack@@QEAA@XZ @ 0x1801832C0
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180183278 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DClipStack::~CD2DClipStack(void **this)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *this;
  if ( *this )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
