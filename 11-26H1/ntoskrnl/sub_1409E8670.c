/*
 * XREFs of sub_1409E8670 @ 0x1409E8670
 * Callers:
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     sub_140779364 @ 0x140779364 (sub_140779364.c)
 *     WbGetWowTrapFrame @ 0x14088677C (WbGetWowTrapFrame.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     sub_1409E9244 @ 0x1409E9244 (sub_1409E9244.c)
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 *     sub_1409EA080 @ 0x1409EA080 (sub_1409EA080.c)
 *     sub_1409EA128 @ 0x1409EA128 (sub_1409EA128.c)
 *     WbDisableTracing @ 0x1409EA148 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 *     sub_140B0244C @ 0x140B0244C (sub_140B0244C.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409E8670(__int64 a1, _QWORD *a2, void *a3, unsigned int a4)
{
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  int ContextThreadInternal; // ebx
  __int64 v10; // rdx
  int v11; // r9d
  _KPROCESS *Process; // rcx
  int v13; // edx
  __int64 v14; // r15
  __int64 v15; // r13
  int v16; // r14d
  unsigned int v17; // ecx
  size_t v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // rbx
  _KPROCESS *v25; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v27; // r14d
  _KPROCESS *v28; // rcx
  __int16 v29; // ax
  __int16 v30; // ax
  __int16 v31; // ax
  void *v32; // rcx
  size_t v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  _DWORD *v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h]
  _QWORD *v39; // [rsp+68h] [rbp-A0h]
  void *v40; // [rsp+70h] [rbp-98h]
  _BYTE v41[336]; // [rsp+78h] [rbp-90h] BYREF

  v40 = a3;
  v39 = a2;
  v7 = 0LL;
  LODWORD(v38) = a4;
  v8 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  memset_0(v41, 0, sizeof(v41));
  ContextThreadInternal = sub_1409E9244(a2, a4, v41);
  if ( ContextThreadInternal < 0 )
    goto LABEL_13;
  ContextThreadInternal = sub_1409E960C(a1, v41, &v34);
  if ( ContextThreadInternal < 0 )
    goto LABEL_9;
  ContextThreadInternal = sub_1409E9DA0(a1, v10, &v37);
  if ( ContextThreadInternal < 0 )
  {
    v7 = v37;
    goto LABEL_9;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime || (v30 = WORD2(Process[3].PerProcessorCycleTimes), v30 != 332) && v30 != 452 )
  {
    v7 = v37;
    LOBYTE(v11) = 1;
    v13 = (_DWORD)v37 + 48;
    v37[24] = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), v13, 0, v11, 1);
    if ( ContextThreadInternal >= 0 )
    {
      v14 = *((_QWORD *)v7 + 37);
      v15 = *((_QWORD *)v7 + 25);
      v16 = v7[29];
      *((_QWORD *)&v35 + 1) = v14;
      *(_QWORD *)&v35 = v15;
      LODWORD(v36) = v16;
      goto LABEL_7;
    }
LABEL_9:
    v8 = v34;
    goto LABEL_13;
  }
  v7 = v37;
  ContextThreadInternal = WbGetWowTrapFrame(v37, (__int64)&v35);
  if ( ContextThreadInternal < 0 )
    goto LABEL_9;
  v16 = v36;
  v14 = *((_QWORD *)&v35 + 1);
  v15 = v35;
LABEL_7:
  v17 = v7[5];
  v18 = 32LL * v17;
  if ( v18 > 0xFFFFFFFF || (v19 = v17 + v7[8], (unsigned int)v19 < v17) )
  {
    ContextThreadInternal = -1073741675;
    goto LABEL_9;
  }
  v8 = v34;
  if ( (unsigned __int64)(32 * v19) > 0xFFFFFFFF )
  {
    ContextThreadInternal = -1073741675;
    goto LABEL_13;
  }
  if ( v7[4] + 1 >= v17 )
  {
    ContextThreadInternal = sub_140B0244C(*((void **)v7 + 3), v18);
    if ( ContextThreadInternal < 0 )
      goto LABEL_24;
    v7[5] += v7[8];
  }
  v21 = *((_QWORD *)v7 + 3);
  v22 = 32LL * (unsigned int)v7[4];
  *(_QWORD *)(v22 + v21) = v8;
  *(_QWORD *)(v22 + v21 + 8) = v14;
  *(_QWORD *)(v22 + v21 + 16) = v15;
  *(_DWORD *)(v22 + v21 + 24) = v16;
  ++v7[4];
  ContextThreadInternal = sub_1409EA128(v8);
LABEL_24:
  if ( ContextThreadInternal < 0 )
    goto LABEL_13;
  LODWORD(v33) = v38;
  ContextThreadInternal = sub_140779364((__int64)v41, v8, (__int64 *)&v35, v39, v40, v33);
  if ( ContextThreadInternal < 0 )
    goto LABEL_13;
  ContextThreadInternal = WbDisableTracing(&v35);
  if ( ContextThreadInternal < 0 )
    goto LABEL_13;
  v24 = *(_QWORD *)(v8 + 24);
  *((_QWORD *)&v35 + 1) = v24;
  v25 = KeGetCurrentThread()->ApcState.Process;
  if ( !v25[1].ReadyTime || (v31 = WORD2(v25[3].PerProcessorCycleTimes), v31 != 332) && v31 != 452 )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v23) = 1;
    --CurrentThread->SpecialApcDisable;
    v7[24] = 1048577;
    v27 = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)v7 + 48, 0, v23, 1);
    if ( v27 >= 0 )
    {
      *((_QWORD *)v7 + 25) = v35;
      v7[29] = v36;
      *((_QWORD *)v7 + 37) = v24;
      v27 = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
    }
    KeLeaveGuardedRegion();
LABEL_31:
    ContextThreadInternal = v27;
    if ( v27 < 0 )
      goto LABEL_13;
    goto LABEL_32;
  }
  v27 = WbSetWowTrapFrame(v7, &v35);
  ContextThreadInternal = v27;
  if ( v27 < 0 )
    goto LABEL_31;
LABEL_32:
  v28 = KeGetCurrentThread()->ApcState.Process;
  if ( v28[1].ReadyTime )
  {
    v29 = WORD2(v28[3].PerProcessorCycleTimes);
    if ( (v29 == 332 || v29 == 452) && PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process) == 332 )
      ContextThreadInternal = DWORD2(v35);
  }
LABEL_13:
  if ( v7
    && _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && (int)sub_1409EA080(a1, v7, 0xFFFFFFFFLL) >= 0 )
  {
    v32 = (void *)*((_QWORD *)v7 + 3);
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    ExFreePoolWithTag(v7, 0);
  }
  if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( *(_QWORD *)(v8 + 40) )
    {
      sub_1409E9A1C(a1);
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_DWORD *)(v8 + 72) = 0;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
  }
  return (unsigned int)ContextThreadInternal;
}
