/*
 * XREFs of TtmiCreateTerminal @ 0x1407F15A8
 * Callers:
 *     TtmpDispatchCreateTerminal @ 0x1407ED9E4 (TtmpDispatchCreateTerminal.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1407EC64C (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogTerminalCreated @ 0x1407F0998 (TtmiLogTerminalCreated.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407F2420 (TtmpSetTerminalPendingCleanup.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiCreateTerminal(
        __int64 a1,
        unsigned int a2,
        char a3,
        _QWORD *a4,
        _DWORD *DeferredContext,
        _QWORD *a6)
{
  ULONG ClearBitsAndSet; // eax
  int v11; // r9d
  unsigned __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  int Object; // eax
  _QWORD *v18; // rdx
  int inserted; // eax
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22; // [rsp+60h] [rbp-38h]
  __int128 v23; // [rsp+70h] [rbp-28h]

  *a4 = 0LL;
  DWORD1(v21) = 0;
  *DeferredContext = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  v12 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v13 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 1597LL, 0xFFFFFFFFLL, 3221225540LL);
    v14 = 3221225540LL;
    v15 = 3221225540LL;
    v16 = 718LL;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v16, v15, v14);
    return v13;
  }
  LOBYTE(v11) = a3;
  v22 = 0LL;
  DWORD2(v22) = a3 == 0 ? 0x200 : 0;
  v21 = 0LL;
  LODWORD(v21) = 48;
  v23 = 0LL;
  Object = ObCreateObjectEx(0, *(_DWORD *)&PspSiloMonitorLock.WaitBlockFill11[96], (unsigned int)&v21, v11);
  v13 = Object;
  if ( Object < 0 )
  {
    v14 = (unsigned int)Object;
    *(_BYTE *)((v12 >> 3) + *(_QWORD *)(a1 + 64)) &= ~(1 << (v12 & 7));
    v15 = (unsigned int)Object;
    v16 = 751LL;
    goto LABEL_3;
  }
  PsReferenceSiloContext(0LL);
  memset_0(0LL, 0, 0x120uLL);
  MEMORY[0x18] = 1416459348;
  MEMORY[0x1C] = v12;
  if ( (_DWORD)v12 )
  {
    MEMORY[0x28] = 1;
    MEMORY[0x114] = 1;
    MEMORY[0x30] = 2;
    MEMORY[0x48] = 300000000LL;
  }
  else
  {
    MEMORY[0x28] = 3;
    MEMORY[0x114] = 3;
    MEMORY[0x30] = 0;
    MEMORY[0x24] |= 0x10u;
    MEMORY[0x50] = MEMORY[0xFFFFF78000000008];
    TtmiUpdateActiveTerminalCount((_DWORD *)a1, 1, 26);
  }
  KeInitializeTimer((PKTIMER)0x58);
  KeInitializeDpc((PRKDPC)0x98, (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, 0LL);
  MEMORY[0xF0] = 0LL;
  MEMORY[0xE8] = TtmpScheduledEvaluationWorker;
  MEMORY[0xD8] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  MEMORY[0x10] = a1;
  v18 = *(_QWORD **)(a1 + 48);
  if ( *v18 != a1 + 40 )
    __fastfail(3u);
  MEMORY[8] = *(_QWORD *)(a1 + 48);
  MEMORY[0] = a1 + 40;
  *v18 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  TtmiLogTerminalCreated(0LL, v12);
  inserted = ObInsertObjectEx(0LL, 0LL, a2, 1LL, 0, 0LL, a4);
  v13 = inserted;
  if ( inserted >= 0 )
  {
    *DeferredContext = v12;
    if ( a6 )
      *a6 = 0LL;
    else
      ObfDereferenceObject(0LL);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 841LL, (unsigned int)inserted, (unsigned int)inserted);
    TtmpSetTerminalPendingCleanup(a1, 0LL);
  }
  return v13;
}
