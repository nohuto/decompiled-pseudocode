/*
 * XREFs of ?NdisPDDrainCompletedItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400A6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDDrainCompletedItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY ***a2,
        unsigned int a3)
{
  struct _SINGLE_LIST_ENTRY **p_Next; // r10
  unsigned int v4; // r9d
  int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rax
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  bool v10; // zf
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+8h] [rbp+8h] BYREF

  p_Next = &v11;
  v4 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 13);
  v7 = v6 & (*((_DWORD *)a1 + 33) - v4);
  v11 = 0LL;
  if ( v7 < a3 )
    a3 = v7;
  for ( ; a3; --a3 )
  {
    v8 = v4;
    v4 = v6 & (v4 + 1);
    v9 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v8 + 24);
    *p_Next = v9;
    p_Next = &v9->Next;
  }
  v10 = v11 == 0LL;
  *((_DWORD *)a1 + 15) = v4;
  if ( !v10 )
  {
    *p_Next = 0LL;
    **a2 = v11;
    *a2 = p_Next;
  }
}
