/*
 * XREFs of sub_1409E8440 @ 0x1409E8440
 * Callers:
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 *     sub_1409EA080 @ 0x1409EA080 (sub_1409EA080.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 *     sub_1409EAA0C @ 0x1409EAA0C (sub_1409EAA0C.c)
 */

__int64 __fastcall sub_1409E8440(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rbx
  int ContextThreadInternal; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r15
  int v12; // r12d
  _KPROCESS *Process; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int16 v21; // ax
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v3 = sub_1409E9DA0(a1, a2, &v24);
  v5 = v24;
  ContextThreadInternal = v3;
  if ( v3 < 0 )
    goto LABEL_13;
  v7 = *(_DWORD *)(v24 + 16);
  if ( !v7 )
  {
LABEL_18:
    ContextThreadInternal = -1073741811;
    goto LABEL_13;
  }
  v8 = (unsigned int)(v7 - 1);
  v9 = *(_QWORD *)(v24 + 24);
  v8 *= 32LL;
  v10 = *(_QWORD *)(v8 + v9 + 8);
  v11 = *(_QWORD *)(v8 + v9 + 16);
  v12 = *(_DWORD *)(v8 + v9 + 24);
  *((_QWORD *)&v22 + 1) = v10;
  *(_QWORD *)&v22 = v11;
  LODWORD(v23) = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime && ((v21 = WORD2(Process[3].PerProcessorCycleTimes), v21 == 332) || v21 == 452) )
  {
    ContextThreadInternal = WbSetWowTrapFrame(v24, &v22);
    if ( ContextThreadInternal >= 0 )
      goto LABEL_8;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v15 = v24 + 48;
    LOBYTE(v4) = 1;
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(v5 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), v15, 0, v4, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(v5 + 296) = v10;
      *(_QWORD *)(v5 + 200) = v11;
      *(_DWORD *)(v5 + 116) = v12;
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
    }
    KeLeaveGuardedRegion();
  }
  if ( ContextThreadInternal < 0 )
    goto LABEL_13;
LABEL_8:
  v16 = *(_DWORD *)(v5 + 16);
  ContextThreadInternal = 0;
  if ( !v16 )
    goto LABEL_18;
  v17 = *(_QWORD *)(v5 + 24);
  v18 = 32LL * (unsigned int)(v16 - 1);
  v19 = *(_QWORD *)(v18 + v17);
  if ( v19 && !_InterlockedDecrement64((volatile signed __int64 *)(v19 + 80)) )
    sub_1409EAA0C(a1);
  *(_OWORD *)(v18 + v17) = 0LL;
  *(_OWORD *)(v18 + v17 + 16) = 0LL;
  --*(_DWORD *)(v5 + 16);
LABEL_13:
  if ( v5
    && !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 8))
    && (int)sub_1409EA080(a1, v5, 0xFFFFFFFFLL) >= 0 )
  {
    SddlpFree(*(_QWORD *)(v5 + 24));
    SddlpFree(v5);
  }
  return (unsigned int)ContextThreadInternal;
}
