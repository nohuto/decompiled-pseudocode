/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14004FF34
 * Callers:
 *     xxxCompositedPaint @ 0x14004FBD4 (xxxCompositedPaint.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14004FF34 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x14004FF34 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rbx
  unsigned int v5; // esi
  struct tagWND *v6; // rax
  struct tagWND *v7; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  struct tagWND *v12; // rbp
  ULONG_PTR *v13; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v16; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(v2 + 136) || (*(_BYTE *)(v2 + 17) & 0x10) != 0 )
  {
    xxxSendMessage(a1, 0xFu);
    v5 = 1;
  }
  v6 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v7 = v6;
  while ( v6 )
  {
    v7 = v6;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
  }
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v10 = *CurrentThreadNonPaged;
  else
    v10 = 0LL;
  BugCheckParameter3 = *(_QWORD *)(v10 + 456);
  *(_QWORD *)(v10 + 456) = &BugCheckParameter3;
  v16 = v7;
  if ( v7 )
  {
    HMLockObject(v7);
    do
    {
      if ( !v7 )
        break;
      v11 = xxxCompositedTraverse(v7);
      v7 = (struct tagWND *)*((_QWORD *)v7 + 12);
      v12 = v16;
      if ( v11 )
        v5 = 1;
      v16 = v7;
      if ( v7 )
        HMLockObject(v7);
    }
    while ( v12 && HMUnlockObject(v12) );
  }
  v13 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v10, v9);
  if ( v13 )
    v3 = *v13;
  Win32HM_UnlockFromThread<1>(v3, &BugCheckParameter3);
  return v5;
}
