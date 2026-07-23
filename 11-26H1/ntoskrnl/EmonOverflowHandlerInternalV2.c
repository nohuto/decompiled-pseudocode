/*
 * XREFs of EmonOverflowHandlerInternalV2 @ 0x1404B093C
 * Callers:
 *     EmonOverflowHandler @ 0x1404B0900 (EmonOverflowHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EmonIsModifiedByBadActorInternal @ 0x1404B12EC (EmonIsModifiedByBadActorInternal.c)
 *     KeProfileInterruptWithSource @ 0x1404B1420 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140531EF0 (PoGetProcessorIdleAccounting.c)
 *     EmonPebsOverflowHandler @ 0x140598608 (EmonPebsOverflowHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall EmonOverflowHandlerInternalV2(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  struct _KTHREAD *v6; // rbx
  bool v7; // zf
  __int64 v8; // rsi
  unsigned __int64 result; // rax
  __int64 v10; // r13
  int v11; // ecx
  int *v12; // r14
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // rdx^4
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // ecx
  __int64 v28; // r12
  int v29; // eax
  int v30; // eax
  unsigned int v31; // ecx
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // rdx
  __int64 TotalTransitions; // rax
  LARGE_INTEGER v34; // rax
  __int64 v35; // r8
  __int64 v36; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r9
  __int64 v42; // [rsp+20h] [rbp-68h]
  unsigned __int64 v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-48h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]
  __int64 v49; // [rsp+A0h] [rbp+18h] BYREF
  int v50; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v3 = a2;
  LODWORD(v49) = 0;
  v4 = IommuInterfaceStateChangeCallbackPushLock.ReadOperationCount & __readmsr(0x38Eu);
  v47 = v4;
  v5 = v4;
  if ( (v4 & 0x4000000000000000LL) != 0 )
  {
    EmonPebsOverflowHandler(910LL);
    v5 = v4 & 0xBFFFFFFFFFFFFFFFuLL;
  }
  v6 = *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary;
  v49 = v3;
  if ( *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary )
  {
    v36 = 80 * v3;
    do
    {
      v40 = *(unsigned __int64 *)((_BYTE *)&v6->QuantumTarget + v36) & v5;
      if ( v40 && v6->Header.WaitListHead.Blink )
        guard_dispatch_icall_no_overrides(*(unsigned __int64 *)((_BYTE *)&v6->QuantumTarget + v36) & v5, v6);
      v6 = *(struct _KTHREAD **)&v6->Header.Lock;
      v5 &= ~v40;
    }
    while ( v6 != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary );
  }
  v7 = !_BitScanForward64((unsigned __int64 *)&v8, v5);
  if ( !v7 )
  {
    v10 = v49;
    while ( 1 )
    {
      v11 = 0;
      v5 &= ~(1LL << v8);
      if ( (unsigned int)v8 >= 0x20 )
      {
        v8 = (unsigned int)(v8 - 32);
        v11 = 1;
      }
      v12 = *(int **)(KiProcessorBlock[v10] + 88);
      if ( v11 )
      {
        v13 = v11 - 1;
        if ( v13 )
        {
          v24 = v13 - 99;
          if ( v24 )
          {
            if ( v24 == 1 )
              v12 += 18;
            else
              v12 = 0LL;
          }
          else
          {
            v12 += 12;
          }
        }
        else
        {
          v12 += 6;
        }
      }
      v14 = *((_QWORD *)v12 + 2) + 48 * v8;
      if ( *(_DWORD *)(v14 + 24) )
        goto LABEL_25;
      LODWORD(v15) = 0;
      if ( (unsigned int)v8 > v12[2] || *(_DWORD *)(v14 + 28) == 3 )
        goto LABEL_25;
      v16 = *v12;
      v17 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      LOBYTE(v49) = 0;
      v46 = 0LL;
      if ( v16 == 1 )
      {
        v50 = v8 + 32;
        v21 = 911;
        v43 = ~(15LL << (4 * (unsigned __int8)v8)) & __readmsr(0x38Du);
        v41 = __readmsr(0x38Fu);
        _bittestandreset64((__int64 *)&v41, (unsigned int)(v8 + 32));
        v46 = v41;
        v22 = HIDWORD(v41);
        v23 = v41;
      }
      else
      {
        v50 = v8;
        if ( v16 )
          goto LABEL_17;
        v21 = v8 + 390;
        v50 = v8;
        v43 = __readmsr((int)v8 + 390);
        v22 = HIDWORD(v43);
        v23 = v43 & 0xFFAFFFFF;
      }
      v17 = v14;
      __writemsr(v21, __PAIR64__(v22, v23));
      v42 = v14;
LABEL_17:
      v18 = *(unsigned int *)(v17 + 36);
      if ( !(_DWORD)v18 )
      {
        v44 = 0LL;
        PerformanceFrequency.QuadPart = 0LL;
        if ( HalpTimerProfilingCallback )
          guard_dispatch_icall_no_overrides(v2, v18);
        else
          KeProfileInterruptWithSource(v2, 0LL);
        v25 = HalpProfileData;
        v26 = 296LL * KeGetPcr()->Prcb.Number;
        v27 = *(_DWORD *)(v26 + HalpProfileData + 24);
        if ( !v27 )
          goto LABEL_47;
        LODWORD(v15) = *(_DWORD *)(v26 + HalpProfileData + 16);
        v28 = v26 + 16LL * *(unsigned int *)(v26 + HalpProfileData + 32);
        *(_DWORD *)(v26 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v26 + HalpProfileData + 32) + 1) & 0xF;
        v29 = *(_DWORD *)(v26 + v25 + 20);
        if ( v29 )
        {
          v30 = v29 - 1;
          *(_DWORD *)(v26 + v25 + 20) = v30;
          if ( v30 )
            goto LABEL_46;
          *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
          v31 = 0x2710 / v27;
          if ( !v31 )
          {
            *(_DWORD *)(v26 + v25 + 20) = 1;
            v31 = 1;
          }
          IdleAccounting = KeGetCurrentPrcb()->PowerState.IdleAccounting;
          if ( IdleAccounting )
            TotalTransitions = IdleAccounting->TotalTransitions;
          else
            TotalTransitions = 0LL;
          if ( TotalTransitions == *(_QWORD *)(v26 + HalpProfileData + 8) )
          {
            v44 = (unsigned int)v15 * v31;
            v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
            v35 = HalpProfileData;
            if ( v34.QuadPart != *(_QWORD *)(v26 + HalpProfileData) )
            {
              v15 = PerformanceFrequency.QuadPart
                  * (v44
                   * (unsigned __int64)*(unsigned int *)(v26 + HalpProfileData + 24)
                   / (v34.QuadPart - *(_QWORD *)(v26 + HalpProfileData)))
                  / 0x989680;
              if ( v15 < 0x1000 || v15 > 0x7FFFFFFF )
                LODWORD(v15) = *(_DWORD *)(v26 + HalpProfileData + 28);
              *(_DWORD *)(v26 + HalpProfileData + 16) = v15;
              *(LARGE_INTEGER *)(v26 + v35) = v34;
            }
            *(_DWORD *)(v28 + v25 + 40) = v15;
            *(LARGE_INTEGER *)(v28 + v25 + 48) = v34;
LABEL_46:
            v2 = a1;
LABEL_47:
            v17 = v42;
            goto LABEL_19;
          }
          *(_QWORD *)(v26 + HalpProfileData + 8) = TotalTransitions;
        }
        else
        {
          *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
          if ( !(0x2710 / v27) )
            *(_DWORD *)(v26 + v25 + 20) = 1;
          PoGetProcessorIdleAccounting(&v44, 0x2710 % v27);
          *(_QWORD *)(v26 + v25 + 8) = v44;
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v38 = HalpProfileData;
        *(LARGE_INTEGER *)(v26 + HalpProfileData) = PerformanceCounter;
        *(_DWORD *)(v28 + v25 + 40) = v15;
        *(_QWORD *)(v28 + v25 + 48) = *(_QWORD *)(v26 + v38);
        goto LABEL_46;
      }
      KeProfileInterruptWithSource(v2, v18);
      LODWORD(v15) = *(_DWORD *)v17;
LABEL_19:
      if ( *v12 )
      {
        if ( *v12 == 1 )
        {
          if ( *(&IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime + 1) < 0x40 )
            v39 = (1LL << *((char *)&IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime + 4)) - 1;
          else
            v39 = -1LL;
          __writemsr(v8 + 777, v39 & -(__int64)(unsigned int)v15);
          __writemsr(0x38Fu, v46 | (1LL << v50));
        }
        v20 = v43;
      }
      else
      {
        if ( IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime >= 0x40 )
          v19 = -1LL;
        else
          v19 = (1LL << SLOBYTE(IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime)) - 1;
        __writemsr(v8 + 193, v19 & -(__int64)(unsigned int)v15);
        v20 = v43;
        __writemsr(v8 + 390, v43 | 0x500000);
      }
      EmonIsModifiedByBadActorInternal((unsigned int)v8, v12, v20, &v49);
      if ( (_BYTE)v49 )
        *(_BYTE *)(v17 + 40) = 1;
LABEL_25:
      v7 = !_BitScanForward64((unsigned __int64 *)&v8, v5);
      if ( v7 )
      {
        v4 = v47;
        break;
      }
    }
  }
  result = v4;
  __writemsr(0x390u, v4);
  return result;
}
