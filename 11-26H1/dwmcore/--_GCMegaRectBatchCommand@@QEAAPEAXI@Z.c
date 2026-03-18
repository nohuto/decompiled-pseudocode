/*
 * XREFs of ??_GCMegaRectBatchCommand@@QEAAPEAXI@Z @ 0x18018CC4C
 * Callers:
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMegaRectBatchCommand *__fastcall CMegaRectBatchCommand::`scalar deleting destructor'(CMegaRectBatchCommand *this)
{
  char *v1; // rsi
  _DWORD *v2; // rdi
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax

  v1 = (char *)*((_QWORD *)this + 12);
  v2 = (_DWORD *)((char *)this + 104);
  if ( (char *)this + 104 != v1 )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
    *((_QWORD *)this + 12) = v2;
    *v2 = 0;
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return this;
}
