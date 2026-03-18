/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14011FF84
 * Callers:
 *     DrawTextExWorker @ 0x14011FA9C (DrawTextExWorker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x14011F9C0 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14012142C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        __int64 a1,
        int a2,
        char *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  unsigned int v6; // edi
  HDC v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  char *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *v18; // rax
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  char v25; // [rsp+90h] [rbp-70h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  v6 = a4;
  v23 = a2;
  v24 = a1;
  v8 = (HDC)a1;
  v20 = a4;
  v9 = 0LL;
  v22 = -1LL;
  PtiCurrent(a1);
  if ( (a5 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !(unsigned int)NeedsEndEllipsis(v8, (const unsigned __int16 *)a3, &v20, a6, a5, a6, v19) )
  {
    v6 = v20;
    goto LABEL_6;
  }
  v10 = v20;
  if ( v20 + 4 <= 128 )
  {
    v11 = &v25;
LABEL_5:
    memmove(v11, a3, 2 * v10);
    a3 = v11;
    *(_QWORD *)&v11[2 * v10] = 0x2E002E002ELL;
    v6 = v10 + 3;
    v8 = (HDC)v24;
LABEL_6:
    DT_DrawJustifiedLine(v8, v23, (const unsigned __int16 *)a3, v6, a5, a6);
    if ( v9 )
      UserRtlFreeMem(v9);
    if ( v22 != -1 )
    {
      v18 = PtiCurrent(v12);
      *((_QWORD *)v18 + 47) = BugCheckParameter2[0];
    }
    return v6;
  }
  v9 = UserRtlAllocMem((unsigned int)(2 * (v20 + 4)));
  if ( v9 )
  {
    if ( v22 != -1 )
    {
      BugCheckParameter4 = PtiCurrent(v14);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v9, (ULONG_PTR)BugCheckParameter4);
    }
    v17 = PtiCurrent(v14);
    v11 = (char *)v9;
    BugCheckParameter2[0] = *((_QWORD *)v17 + 47);
    *((_QWORD *)v17 + 47) = BugCheckParameter2;
    v22 = (__int64)Win32FreePool;
    BugCheckParameter2[1] = v9;
    goto LABEL_5;
  }
  if ( v22 != -1 )
  {
    v15 = PtiCurrent(v14);
    *((_QWORD *)v15 + 47) = BugCheckParameter2[0];
  }
  return 0LL;
}
