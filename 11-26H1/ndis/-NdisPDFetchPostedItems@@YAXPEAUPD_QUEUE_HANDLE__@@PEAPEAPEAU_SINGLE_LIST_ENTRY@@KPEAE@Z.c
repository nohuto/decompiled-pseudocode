/*
 * XREFs of ?NdisPDFetchPostedItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAPEAU_SINGLE_LIST_ENTRY@@KPEAE@Z @ 0x1400A6580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDFetchPostedItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY ***a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  int v4; // edi
  struct _SINGLE_LIST_ENTRY **p_Next; // rbx
  unsigned int v7; // r11d
  __int64 v8; // rax
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  bool v10; // zf
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+8h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a1 + 13);
  p_Next = &v11;
  v11 = 0LL;
  v7 = *((_DWORD *)a1 + 34);
  if ( (v4 & (*((_DWORD *)a1 + 16) - v7)) < a3 )
    a3 = v4 & (*((_DWORD *)a1 + 16) - v7);
  for ( ; a3; --a3 )
  {
    v8 = v7;
    v7 = v4 & (v7 + 1);
    v9 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v8 + 24);
    *p_Next = v9;
    p_Next = &v9->Next;
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    *((_DWORD *)a1 + 15) = v7;
    *((_DWORD *)a1 + 33) = v7;
  }
  v10 = v11 == 0LL;
  *((_DWORD *)a1 + 34) = v7;
  if ( !v10 )
  {
    *p_Next = 0LL;
    **a2 = v11;
    *a2 = p_Next;
  }
  *a4 = *((_BYTE *)a1 + 48);
}
