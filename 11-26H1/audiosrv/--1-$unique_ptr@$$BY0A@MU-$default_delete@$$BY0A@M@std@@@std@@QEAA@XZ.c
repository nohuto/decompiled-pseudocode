/*
 * XREFs of ??1?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAA@XZ @ 0x180044A10
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004456C (--1CAudioSession@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006DCDC (--1CAudioStream@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<float [0]>::~unique_ptr<float [0]>(void **a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
