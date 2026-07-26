/*
 * XREFs of ?NdisPDPostAndDrainItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAU_SINGLE_LIST_ENTRY@@PEAPEAPEAU2@K@Z @ 0x14008FEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDPostAndDrainItems(
        struct PD_QUEUE_HANDLE__ *a1,
        struct _SINGLE_LIST_ENTRY **a2,
        struct _SINGLE_LIST_ENTRY ***a3,
        unsigned int a4)
{
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  struct _SINGLE_LIST_ENTRY **p_Next; // r14
  unsigned int v7; // r10d
  int v8; // r11d
  unsigned int v9; // eax
  unsigned int v11; // r8d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _SINGLE_LIST_ENTRY *v16; // rcx
  __int64 v17; // rax
  struct _SINGLE_LIST_ENTRY *v18; // rcx
  struct _SINGLE_LIST_ENTRY *v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a2;
  p_Next = &v19;
  v7 = *((_DWORD *)a1 + 15);
  v8 = *((_DWORD *)a1 + 13);
  v9 = v8 & (*((_DWORD *)a1 + 33) - v7);
  v19 = 0LL;
  v11 = *((_DWORD *)a1 + 16);
  if ( v9 < a4 )
    a4 = v9;
  v13 = a4 + (v8 & (v7 - v11 - 1));
  while ( v4 )
  {
    if ( !v13 )
      break;
    v14 = v11;
    --v13;
    v11 = v8 & (v11 + 1);
    *((_QWORD *)a1 + v14 + 24) = v4;
    v4 = v4->Next;
    if ( v11 == v7 )
    {
      v15 = v7;
      v7 = v8 & (v7 + 1);
      --a4;
      v16 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v15 + 24);
      *p_Next = v16;
      p_Next = &v16->Next;
    }
  }
  for ( ; a4; --a4 )
  {
    v17 = v7;
    v7 = v8 & (v7 + 1);
    v18 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + v17 + 24);
    *p_Next = v18;
    p_Next = &v18->Next;
  }
  *((_DWORD *)a1 + 16) = v11;
  *((_DWORD *)a1 + 15) = v7;
  if ( *((_QWORD *)a1 + 5) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 14, 0, 1) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        29,
        100,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)a1);
    }
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
  *a2 = v4;
  if ( v19 )
  {
    *p_Next = 0LL;
    **a3 = v19;
    *a3 = p_Next;
  }
}
