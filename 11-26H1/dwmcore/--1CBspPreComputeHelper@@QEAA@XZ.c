/*
 * XREFs of ??1CBspPreComputeHelper@@QEAA@XZ @ 0x1801758B8
 * Callers:
 *     ??1CPreComputeSubTreeContext@@QEAA@XZ @ 0x180175834 (--1CPreComputeSubTreeContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CBspPreComputeHelper::~CBspPreComputeHelper(CBspPreComputeHelper *this)
{
  void *v1; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  HANDLE v17; // rax
  HANDLE v18; // rax
  HANDLE v19; // rax
  HANDLE v20; // rax
  HANDLE v21; // rax
  HANDLE v22; // rax
  HANDLE v23; // rax

  v1 = (void *)*((_QWORD *)this + 30);
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v3 = (void *)*((_QWORD *)this + 27);
  if ( v3 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v3);
  }
  v4 = (void *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v4);
  }
  v5 = (void *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v5);
  }
  v6 = (void *)*((_QWORD *)this + 18);
  if ( v6 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v6);
  }
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v7);
  }
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    v19 = GetProcessHeap();
    HeapFree(v19, 0, v8);
  }
  v9 = (void *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    v20 = GetProcessHeap();
    HeapFree(v20, 0, v9);
  }
  v10 = (void *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v10);
  }
  v11 = (void *)*((_QWORD *)this + 3);
  if ( v11 )
  {
    v22 = GetProcessHeap();
    HeapFree(v22, 0, v11);
  }
  v12 = *(void **)this;
  if ( v12 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v12);
  }
}
