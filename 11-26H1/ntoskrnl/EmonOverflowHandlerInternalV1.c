/*
 * XREFs of EmonOverflowHandlerInternalV1 @ 0x1404B0DEC
 * Callers:
 *     EmonOverflowHandler @ 0x1404B0900 (EmonOverflowHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EmonIsModifiedByBadActorInternal @ 0x1404B12EC (EmonIsModifiedByBadActorInternal.c)
 *     KeProfileInterruptWithSource @ 0x1404B1420 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140531EF0 (PoGetProcessorIdleAccounting.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EmonOverflowHandlerInternalV1(__int64 a1, int *a2)
{
  __int64 v2; // r9
  __int64 v4; // r15
  int v5; // ebp
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // rdx^4
  unsigned int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r13d
  LARGE_INTEGER v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-78h]
  unsigned __int64 v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+A8h] [rbp+10h] BYREF
  int v40; // [rsp+B0h] [rbp+18h]
  unsigned int v41; // [rsp+B8h] [rbp+20h]

  v2 = a1;
  if ( IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime < 0x40 )
    v4 = (1LL << SLOBYTE(IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime)) - 1;
  else
    v4 = -1LL;
  if ( a2[1] )
  {
    v5 = 0;
    v6 = 193;
    v40 = 0;
    while ( 1 )
    {
      v7 = v6 - 193;
      v8 = *((_QWORD *)a2 + 2) + 48 * v7;
      if ( !*(_DWORD *)(v8 + 24) )
      {
        v9 = __readmsr(v6);
        if ( ((((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) & v4) < (v4 & 0xFFFFFFFF80000001uLL) )
        {
          LODWORD(v10) = 0;
          if ( (unsigned int)v7 <= a2[2] && *(_DWORD *)(v8 + 28) != 3 )
            break;
        }
      }
LABEL_47:
      ++v6;
      v5 += 4;
      v40 = v5;
      if ( v6 - 193 >= a2[1] )
        return;
    }
    v11 = *a2;
    v12 = 0LL;
    v34 = 0LL;
    v39 = 0;
    v33 = 0LL;
    v37 = 0LL;
    if ( v11 == 1 )
    {
      v41 = v6 - 161;
      v13 = 911;
      v34 = ~(15LL << v5) & __readmsr(0x38Du);
      v16 = __readmsr(0x38Fu);
      _bittestandreset64((__int64 *)&v16, v6 - 161);
      v37 = v16;
      v14 = HIDWORD(v16);
      v15 = v16;
    }
    else
    {
      v41 = v6 - 193;
      if ( v11 )
        goto LABEL_15;
      v13 = v6 + 197;
      v41 = v6 - 193;
      v34 = __readmsr(v6 + 197);
      v14 = HIDWORD(v34);
      v15 = v34 & 0xFFAFFFFF;
    }
    v2 = a1;
    __writemsr(v13, __PAIR64__(v14, v15));
    v33 = v8;
    v12 = v8;
LABEL_15:
    v17 = *(unsigned int *)(v12 + 36);
    if ( (_DWORD)v17 )
    {
      KeProfileInterruptWithSource(v2, v17);
      LODWORD(v10) = *(_DWORD *)v12;
      goto LABEL_27;
    }
    v35 = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( HalpTimerProfilingCallback )
      guard_dispatch_icall_no_overrides(v2, v17);
    else
      KeProfileInterruptWithSource(v2, 0LL);
    v18 = HalpProfileData;
    v19 = 296LL * KeGetPcr()->Prcb.Number;
    v20 = *(_DWORD *)(v19 + HalpProfileData + 24);
    if ( !v20 )
    {
LABEL_26:
      v12 = v33;
      LODWORD(v7) = v6 - 193;
LABEL_27:
      if ( *a2 )
      {
        if ( *a2 == 1 )
        {
          if ( *(&IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime + 1) < 0x40 )
            v26 = (1LL << *((char *)&IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime + 4)) - 1;
          else
            v26 = -1LL;
          __writemsr(v6 + 584, v26 & -(__int64)(unsigned int)v10);
          __writemsr(0x38Fu, v37 | (1LL << v41));
        }
        v31 = v34;
      }
      else
      {
        if ( IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime < 0x40 )
          v32 = (1LL << SLOBYTE(IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime)) - 1;
        else
          v32 = -1LL;
        __writemsr(v6, v32 & -(__int64)(unsigned int)v10);
        v31 = v34;
        __writemsr(v6 + 197, v34 | 0x500000);
      }
      EmonIsModifiedByBadActorInternal((unsigned int)v7, a2, v31, &v39);
      v2 = a1;
      if ( v39 )
        *(_BYTE *)(v12 + 40) = 1;
      goto LABEL_47;
    }
    LODWORD(v10) = *(_DWORD *)(v19 + HalpProfileData + 16);
    v21 = v19 + 16LL * *(unsigned int *)(v19 + HalpProfileData + 32);
    *(_DWORD *)(v19 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v19 + HalpProfileData + 32) + 1) & 0xF;
    v22 = *(_DWORD *)(v19 + v18 + 20);
    if ( v22 )
    {
      v27 = v22 - 1;
      *(_DWORD *)(v19 + v18 + 20) = v27;
      if ( v27 )
        goto LABEL_25;
      *(_DWORD *)(v19 + v18 + 20) = 0x2710 / v20;
      v28 = 0x2710 / v20;
      if ( !(0x2710 / v20) )
      {
        *(_DWORD *)(v19 + v18 + 20) = 1;
        v28 = 1;
      }
      PoGetProcessorIdleAccounting(&v35, 0x2710 % v20);
      v23 = v35;
      if ( v35 == *(_QWORD *)(v19 + v18 + 8) )
      {
        v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v30 = HalpProfileData;
        if ( v29.QuadPart != *(_QWORD *)(v19 + HalpProfileData) )
        {
          v10 = PerformanceFrequency.QuadPart
              * (*(unsigned int *)(v19 + HalpProfileData + 24)
               * (unsigned __int64)(v28 * (unsigned int)v10)
               / (v29.QuadPart - *(_QWORD *)(v19 + HalpProfileData)))
              / 0x989680;
          if ( v10 < 0x1000 || v10 > 0x7FFFFFFF )
            LODWORD(v10) = *(_DWORD *)(v19 + HalpProfileData + 28);
          *(_DWORD *)(v19 + HalpProfileData + 16) = v10;
          *(LARGE_INTEGER *)(v19 + v30) = v29;
        }
        *(_DWORD *)(v18 + v21 + 40) = v10;
        *(LARGE_INTEGER *)(v18 + v21 + 48) = v29;
        goto LABEL_25;
      }
    }
    else
    {
      *(_DWORD *)(v19 + v18 + 20) = 0x2710 / v20;
      if ( !(0x2710 / v20) )
        *(_DWORD *)(v19 + v18 + 20) = 1;
      PoGetProcessorIdleAccounting(&v35, 0x2710 % v20);
      v23 = v35;
    }
    *(_QWORD *)(v19 + v18 + 8) = v23;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v25 = HalpProfileData;
    *(LARGE_INTEGER *)(v19 + HalpProfileData) = PerformanceCounter;
    *(_DWORD *)(v18 + v21 + 40) = v10;
    *(_QWORD *)(v18 + v21 + 48) = *(_QWORD *)(v19 + v25);
LABEL_25:
    v5 = v40;
    goto LABEL_26;
  }
}
