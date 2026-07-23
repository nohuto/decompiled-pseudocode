/*
 * XREFs of CmpPostApc @ 0x140AE20D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     CmpFreeSubordinatePost @ 0x1408D6E80 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

void __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _KPROCESS *Process; // rcx
  char v9; // cl
  unsigned int v10; // edx
  _QWORD *v11; // r9
  __int16 v12; // ax
  char v13; // al
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  struct _KEVENT *v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int128 Src; // [rsp+48h] [rbp-20h] BYREF

  v6 = *(_QWORD **)a5;
  v7 = *(_QWORD **)(*(_QWORD *)a5 + 64LL);
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime
    || ((v12 = WORD2(Process[3].PerProcessorCycleTimes), v12 == 332) || v12 == 452
      ? (v9 = 1, v13 = 1)
      : (v13 = 0, v9 = 1),
        !v13) )
  {
    v9 = 0;
  }
  v10 = *a4;
  v11 = *(_QWORD **)(v6[8] + 104LL);
  if ( v9 )
  {
    if ( ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlWriteULong64ToUser(v11, v10);
  }
  else
  {
    Src = v10;
    if ( ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(v11, &Src, 0x10uLL);
  }
  v14 = (_QWORD *)v6[8];
  if ( (_QWORD *)v14[13] == v14 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v14);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  *(_QWORD *)a4 = *(_QWORD *)(v6[8] + 104LL);
  v15 = (_QWORD *)v6[8];
  if ( (_QWORD *)v15[13] == v15 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v16 = *(struct _KEVENT **)(v6[8] + 8LL);
  if ( v16 )
  {
    KeSetEvent(v16, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v6[8] + 8LL));
  }
  v17 = v6[2];
  v18 = (_QWORD *)v6[3];
  if ( *(_QWORD **)(v17 + 8) != v6 + 2 || (_QWORD *)*v18 != v6 + 2 )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  CmpFreeSubordinatePost((__int64)v6);
  CmpFreePostBlock(v6);
}
