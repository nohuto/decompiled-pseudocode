/*
 * XREFs of WmipCopyFromEventQueues @ 0x140AF0B88
 * Callers:
 *     WmipReceiveNotifications @ 0x1403DE4EC (WmipReceiveNotifications.c)
 * Callees:
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipCopyFromEventQueues(
        struct _KEVENT **a1,
        unsigned int a2,
        char *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        char a7)
{
  char v7; // bp
  __int64 v8; // rdi
  struct _KEVENT **v10; // rsi
  struct _KEVENT **v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r8d
  char *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // r13d
  char *v21; // r12
  char *v22; // rbp
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r15
  unsigned int *v26; // r14
  size_t v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rax
  struct _KEVENT *v30; // rax
  LONG result; // eax
  bool v32; // cf
  __int64 v33; // rbp
  unsigned __int64 v34; // rbx
  struct _KEVENT *v35; // rdi
  void *v36; // rcx
  char *v37; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = a2;
  v10 = a1;
  if ( a2 )
  {
    v11 = a1 + 1;
    v12 = a2;
    while ( 1 )
    {
      v13 = (__int64)*(v11 - 1);
      if ( a7 )
        break;
      v14 = *(_QWORD *)(v13 + 128);
      if ( !v14 || !*(_DWORD *)(v13 + 148) )
        goto LABEL_8;
      *v11 = (struct _KEVENT *)v14;
      *(_WORD *)(v14 + 10) = 0;
      LODWORD((*v11)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v13 + 152) << 16;
      *(_DWORD *)(v13 + 152) = 0;
LABEL_9:
      v11 += 2;
      if ( !--v12 )
        goto LABEL_10;
    }
    v15 = *(_QWORD *)(v13 + 96);
    if ( v15 && *(_DWORD *)(v13 + 116) )
    {
      *v11 = (struct _KEVENT *)v15;
      *(_WORD *)(v15 + 10) = 0;
      LODWORD((*v11)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v13 + 120) << 16;
      *(_DWORD *)(v13 + 120) = 0;
      goto LABEL_9;
    }
LABEL_8:
    *v11 = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  v16 = -1;
  v17 = 0LL;
  v37 = 0LL;
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  v19 = 0;
  v20 = 0;
  v21 = a3;
  if ( (_DWORD)v8 )
  {
    v22 = a3;
    while ( 1 )
    {
      v23 = (__int64 *)(v10 + 1);
      do
      {
        v24 = *v23;
        if ( *v23 && *(_QWORD *)(v24 + 16) < v18 )
        {
          v18 = *(_QWORD *)(v24 + 16);
          v16 = v19;
        }
        ++v19;
        v23 += 2;
      }
      while ( v19 < (unsigned int)v8 );
      if ( v16 == -1 )
        break;
      v25 = 2LL * v16;
      v37 = v21;
      v26 = (unsigned int *)v10[2 * v16 + 1];
      v27 = *v26;
      v28 = ((_DWORD)v27 + 7) & 0xFFFFFFF8;
      memmove(v21, v26, v27);
      *((_DWORD *)v22 + 3) = v28;
      v21 += v28;
      v29 = v26[3];
      v20 += v28;
      if ( (_DWORD)v29 )
        v30 = (struct _KEVENT *)((char *)v26 + v29);
      else
        v30 = 0LL;
      v10[v25 + 1] = v30;
      v22 = v21;
      v18 = 0x7FFFFFFFFFFFFFFFLL;
      v16 = -1;
      v19 = 0;
    }
    v7 = a7;
    v17 = v37;
  }
  *a6 = v17;
  result = (int)a5;
  *a5 = v20;
  if ( (_DWORD)v8 )
  {
    v32 = v7 != 0;
    v33 = v8;
    v34 = -(__int64)v32 & 0xFFFFFFFFFFFFFFE0uLL;
    do
    {
      v35 = *v10;
      v36 = *(struct _LIST_ENTRY **)((char *)&(*v10)[5].Header.WaitListHead.Flink + v34);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *(struct _LIST_ENTRY **)((char *)&v35[5].Header.WaitListHead.Flink + v34) = 0LL;
        *(LONG *)((char *)&v35[6].Header.SignalState + v34) = 0;
        *(struct _LIST_ENTRY **)((char *)&v35[5].Header.WaitListHead.Blink + v34) = 0LL;
      }
      result = KeResetEvent(v35);
      v10 += 2;
      --v33;
    }
    while ( v33 );
  }
  return result;
}
