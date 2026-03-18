/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF7B0
 * Callers:
 *     ?bPopPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF788 (-bPopPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bExtendScanline@?$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x140332ED0 (-bExtendScanline@-$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14026A0D0 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x140332E1C (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x140333500 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  char *v1; // r15
  unsigned int *v3; // r14
  unsigned int v4; // eax
  _DWORD *v6; // rbp
  int v7; // r13d
  unsigned int v8; // esi
  _DWORD *v9; // r11
  unsigned int v10; // edx
  unsigned int v11; // r12d
  void **v12; // rdi
  __int64 v13; // r8
  void **v14; // rbp
  char *v15; // [rsp+60h] [rbp+8h]

  v1 = (char *)this + 16;
  v3 = (unsigned int *)*((_QWORD *)this + 2);
  v4 = v3[4];
  if ( !v4 )
    return 1LL;
  v6 = (_DWORD *)((char *)this + 4);
  v15 = (char *)this + 16;
  v7 = 8 * v4;
  v8 = 8 * v4 + 28;
  v9 = (_DWORD *)((char *)this + 4);
  v10 = v8 + *((_DWORD *)this + 1);
  v11 = v8;
  if ( v10 > *(_DWORD *)this )
  {
    if ( !(unsigned int)STACKOBJ::bExpand(this, v10) )
      return 0LL;
    v15 = (char *)this + 16;
    v9 = (_DWORD *)((char *)this + 4);
  }
  v12 = (void **)((char *)this + 8);
  *((_QWORD *)v3 + 1) = *((_QWORD *)this + 1);
  if ( !*v6 )
  {
LABEL_5:
    *v9 = v11 + *((_DWORD *)this + 1);
    *v3 = v8;
    memmove(*v12, v3, v8);
    return 1LL;
  }
  v13 = *(unsigned int *)*v12;
  if ( *((_DWORD *)*v12 + 5) != *(_DWORD *)(*(_QWORD *)v1 + 20LL) )
  {
    *v12 = (char *)*v12 + v13;
    goto LABEL_5;
  }
  v8 = v13 + v8 - 28;
  v11 = v7;
  v14 = (void **)((char *)this + 8);
  if ( v8 <= **((_DWORD **)this + 3) )
  {
LABEL_12:
    *(_DWORD *)(*((_QWORD *)this + 3) + 20LL) = *(_DWORD *)(*((_QWORD *)this + 2) + 20LL);
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)*v12 + 1);
    *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = *((_DWORD *)*v12 + 4) + *(_DWORD *)(*(_QWORD *)v15 + 16LL);
    vMergeSpans(
      (struct _SPAN *)((char *)*v12 + 28),
      (struct _SPAN *)((char *)*v12 + 8 * *((unsigned int *)*v12 + 4) + 28),
      (struct _SPAN *)(*(_QWORD *)v15 + 28LL),
      (struct _SPAN *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(*(_QWORD *)v15 + 16LL) + 28),
      (struct _SPAN *)(*((_QWORD *)this + 3) + 28LL));
    v3 = (unsigned int *)*((_QWORD *)this + 3);
    v12 = v14;
    goto LABEL_5;
  }
  if ( (unsigned int)STACKOBJ::bExpandScanline(this, v8, 1u) )
  {
    v14 = (void **)((char *)this + 8);
    goto LABEL_12;
  }
  return 0LL;
}
