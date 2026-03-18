/*
 * XREFs of CmpPostApcRunDown @ 0x140850FE0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     CmpFreeSubordinatePost @ 0x1408D08C0 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1408D1020 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  char v3; // di
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  char v8; // al
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  struct _KEVENT *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 result; // rax
  __int128 Src; // [rsp+40h] [rbp-28h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v3 = 1;
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  v4 = *(_QWORD **)(a1 + 72);
  v5 = (_QWORD *)v4[8];
  if ( (_QWORD *)v5[13] == v5 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v5);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime
    || ((v7 = WORD2(Process[3].PerProcessorCycleTimes), v7 == 332) || v7 == 452 ? (v8 = 1) : (v8 = 0), !v8) )
  {
    v3 = 0;
  }
  v9 = *(_QWORD **)(v4[8] + 104LL);
  if ( v3 )
  {
    if ( ((unsigned __int8)v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlWriteULong64ToUser(v9, 267LL);
  }
  else
  {
    Src = 0x10BuLL;
    if ( ((unsigned __int8)v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyToUser(v9, &Src, 0x10uLL);
  }
  v10 = (_QWORD *)v4[8];
  if ( (_QWORD *)v10[13] == v10 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v11 = *(struct _KEVENT **)(v4[8] + 8LL);
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v4[8] + 8LL));
  }
  v12 = v4[2];
  v13 = (_QWORD *)v4[3];
  if ( *(_QWORD **)(v12 + 8) != v4 + 2 || (_QWORD *)*v13 != v4 + 2 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  CmpFreeSubordinatePost(v4);
  CmpFreePostBlock(v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
