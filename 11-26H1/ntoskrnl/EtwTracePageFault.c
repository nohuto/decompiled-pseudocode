/*
 * XREFs of EtwTracePageFault @ 0x1402162F0
 * Callers:
 *     MiConvertFaultStatus @ 0x1403A4CB0 (MiConvertFaultStatus.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int16 v5; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // ebp
  __int64 EffectiveServerSilo; // r14
  int v9; // r15d
  unsigned int v10; // edi
  bool i; // zf
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 v14; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v16; // r14
  unsigned int v17; // edi
  _DWORD *v18; // rax
  __int64 ThreadServerSilo; // rdi
  unsigned int v20; // ebx
  unsigned int v21; // edx
  _DWORD *v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // ebx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  struct _KTHREAD *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  int v30; // r10d
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  unsigned int v34; // r11d
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  unsigned __int64 v39; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h]
  _QWORD v41[2]; // [rsp+48h] [rbp-50h] BYREF

  v4 = a3;
  switch ( a1 )
  {
    case 273:
      v5 = 523;
      break;
    case 272:
      v5 = 522;
      break;
    case 274:
      v5 = 524;
      break;
    case 276:
      v5 = 526;
      break;
    case 275:
      v5 = 525;
      break;
    case -1073741819:
      v5 = 527;
      break;
    default:
      return;
  }
  v39 = a2;
  v40 = 0LL;
  if ( a4 )
    v40 = *(_QWORD *)(a4 + 360);
  v41[1] = 16LL;
  v41[0] = &v39;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(CurrentThread);
    v20 = *(_DWORD *)(EtwpHostSiloState + 4520);
    for ( i = !_BitScanForward(&v21, v20); !i; i = !_BitScanForward(&v21, v20) )
    {
      v20 &= v20 - 1;
      v22 = (_DWORD *)(EtwpHostSiloState + 32LL * v21 + 4556);
      if ( v22 && (*v22 & 0x1000) != 0 )
        EtwpLogKernelEvent(
          (unsigned int)v41,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2LL * v21 + 4504),
          1,
          v5,
          33554690);
    }
    if ( ThreadServerSilo )
    {
      v23 = *(_QWORD *)(PsGetServerSiloGlobals(ThreadServerSilo) + 832);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 4520);
        for ( i = !_BitScanForward((unsigned int *)&v25, v24); !i; i = !_BitScanForward((unsigned int *)&v25, v24) )
        {
          v24 &= v24 - 1;
          v26 = (_DWORD *)(v23 + 32LL * (unsigned int)v25 + 4556);
          if ( v26 && (*v26 & 0x1000) != 0 )
            EtwpLogKernelEvent((unsigned int)v41, v23, *(unsigned __int8 *)(v23 + 2 * v25 + 4504), 1, v5, 33554690);
        }
      }
    }
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LODWORD(CurrentThread[1].Queue) |= 0x10u;
    v7 = 50338050;
    if ( (_BYTE)a3 )
      v7 = 33558786;
    if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
      EffectiveServerSilo = CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
    else
      EffectiveServerSilo = PsGetEffectiveServerSilo();
    v9 = 1;
    v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
    for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
    {
      a2 = EtwpHostSiloState;
      v10 &= v10 - 1;
      v13 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v12 + 4556);
      if ( v13 && (*v13 & 0x1000) != 0 )
        EtwpLogKernelEvent(
          (unsigned int)v41,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4504),
          1,
          v5,
          v7);
    }
    if ( EffectiveServerSilo )
    {
      v16 = *(_QWORD *)(PsGetServerSiloGlobals(EffectiveServerSilo) + 832);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 4520);
        for ( i = !_BitScanForward((unsigned int *)&v12, v17); !i; i = !_BitScanForward((unsigned int *)&v12, v17) )
        {
          v17 &= v17 - 1;
          v18 = (_DWORD *)(v16 + 32LL * (unsigned int)v12 + 4556);
          if ( v18 && (*v18 & 0x1000) != 0 )
            EtwpLogKernelEvent((unsigned int)v41, v16, *(unsigned __int8 *)(v16 + 2 * v12 + 4504), 1, v5, v7);
        }
      }
    }
    LODWORD(CurrentThread[1].Queue) &= ~0x10u;
    i = CurrentThread->SpecialApcDisable++ == -1;
    if ( i && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v12, a2, a3, a4, v37, v38);
    if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 0x1000) != 0 )
    {
      v14 = v40;
      Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
      if ( v4 )
      {
        if ( (unsigned __int64)(v40 - 1) <= 0xFFFF7FFFFFFFFFFEuLL && v39 < 0xFFFF800000000000uLL )
        {
          v27 = KeGetCurrentThread();
          --v27->SpecialApcDisable;
          v28 = ExSaDecodeHandle(Blink->Blink);
          v29 = (v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          v30 = *(_DWORD *)(v29 + 0x108);
          if ( !v30 )
          {
LABEL_67:
            KeLeaveGuardedRegion();
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 332));
            EtwpCovSampCaptureSample(v14, 1342177296LL);
            return;
          }
          v31 = *(_DWORD *)(((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x11C);
          v32 = MEMORY[0xFFFFF78000000320];
          if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10C)) <= *(_DWORD *)(((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) )
          {
            v9 = *(_DWORD *)(((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x128);
          }
          else
          {
            *(_DWORD *)(((v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10C) = MEMORY[0xFFFFF78000000320];
            v33 = v31 + v30;
            v31 = *(_DWORD *)(v29 + 276);
            if ( v33 <= v31 )
              v31 = v33;
            *(_DWORD *)(v29 + 284) = v31;
            v34 = (unsigned int)(*(_DWORD *)(v29 + 292) + *(_DWORD *)(v29 + 280)) >> 1;
            *(_DWORD *)(v29 + 292) = v34;
            *(_DWORD *)(v29 + 280) = 0;
            if ( v34 >= 2 * v30 )
            {
              v35 = v34 / (v30 + 1);
              *(_DWORD *)(v29 + 296) = v35;
              v9 = v35;
              v36 = 16777619 * (v32 ^ *(_DWORD *)(v29 + 300));
              *(_DWORD *)(v29 + 300) = v36;
              *(_DWORD *)(v29 + 288) = v36 & (2 * v35);
            }
            else
            {
              *(_DWORD *)(v29 + 296) = 1;
              *(_DWORD *)(v29 + 288) = 1;
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 280));
          if ( v31 > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 288), 0xFFFFFFFF) <= 1 )
          {
            *(_DWORD *)(v29 + 284) = v31 - 1;
            *(_DWORD *)(v29 + 288) = v9;
            goto LABEL_67;
          }
          KeLeaveGuardedRegion();
        }
      }
    }
  }
}
