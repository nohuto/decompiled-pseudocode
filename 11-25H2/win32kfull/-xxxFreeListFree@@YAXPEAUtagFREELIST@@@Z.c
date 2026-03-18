/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402B22C0
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x140255D80 (xxxDDETrackPostHook.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402B1DA8 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientFreeDDEHandle @ 0x1402BDD2C (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1, __int64 a2)
{
  struct tagFREELIST *v2; // rbx
  struct tagTHREADINFO *v3; // rdx
  __int64 v4; // rcx
  signed __int32 v5; // edi
  struct tagTHREADINFO *v6; // rax
  struct tagFREELIST *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    v2 = a1;
    v3 = PtiCurrent((__int64)a1, a2);
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0) & 1;
    do
    {
      v6 = PtiCurrent(v4, (__int64)v3);
      v11[0] = *((_QWORD *)v6 + 48);
      *((_QWORD *)v6 + 48) = v11;
      v11[2] = FreeListFree;
      v11[1] = v2;
      if ( !v5 )
        xxxClientFreeDDEHandle(*((_QWORD *)v2 + 1), *((unsigned int *)v2 + 4));
      v7 = v2;
      v2 = *(struct tagFREELIST **)v2;
      Win32FreePool(v7);
      v10 = PtiCurrent(v9, v8);
      v4 = v11[0];
      *((_QWORD *)v10 + 48) = v11[0];
    }
    while ( v2 );
  }
}
