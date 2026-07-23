/*
 * XREFs of ExInitializePoolHeapManagement @ 0x1406D6B74
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExCreateHeap @ 0x1406D6934 (ExCreateHeap.c)
 *     ExpDetermineLargePagePolicy @ 0x1406D6E08 (ExpDetermineLargePagePolicy.c)
 *     RtlHpKInitializeHeapManager @ 0x1406D70BC (RtlHpKInitializeHeapManager.c)
 *     RtlpDynamicLookasideInitialize @ 0x140724064 (RtlpDynamicLookasideInitialize.c)
 *     ExInitializePoolTracker @ 0x140CEC048 (ExInitializePoolTracker.c)
 *     ExpPoolMgrInitialize @ 0x140CEDCB4 (ExpPoolMgrInitialize.c)
 */

__int64 __fastcall ExInitializePoolHeapManagement(unsigned __int64 a1)
{
  bool v2; // r15
  __int64 result; // rax
  __int128 v4; // xmm7
  unsigned int i; // edi
  __int64 v6; // rdx
  __int64 v7; // r13
  __int128 v8; // xmm6
  unsigned __int64 v9; // rbx
  __int64 v10; // xmm0_8
  _BYTE *v11; // rax
  __int128 v12; // xmm6
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  _BYTE *v18; // [rsp+A8h] [rbp+38h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v2 = byte_140FC8BD8 == 0;
  result = RtlHpKInitializeHeapManager();
  if ( (int)result >= 0 )
  {
    RtlpHpLfhPerfFlags = 9355;
    if ( byte_140FC8BD8 )
      RtlpHpLfhPerfFlags = 205963;
    ExpDetermineLargePagePolicy(&v16);
    v4 = v16;
    for ( i = 0; ; ++i )
    {
      v15 = 0LL;
      v6 = 0x400000LL;
      if ( i >= HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) )
        break;
      v7 = 8384LL * i;
      LOWORD(v15) = 259;
      BYTE2(v15) = i;
      if ( *((_QWORD *)&v16 + 1) )
        v6 = 71303168LL;
      v8 = v15;
      result = ExCreateHeap(&v15, v6, (__int64 *)&v18);
      if ( (int)result < 0 )
        return result;
      v9 = (unsigned __int64)v18;
      if ( HIDWORD(ExSaPageGroupDescriptorArrayLock.InitialStack) )
      {
        v18[333] |= 8u;
        *(_BYTE *)(v9 + 525) |= 8u;
      }
      *(unsigned __int64 *)((char *)&stru_140E6BFE8.QuantumTarget + v7) = v9;
      if ( *((_QWORD *)&v16 + 1) )
      {
        v10 = v17;
        *(_OWORD *)(v9 + 200) = v4;
        *(_QWORD *)(v9 + 216) = v10;
        *(_BYTE *)(v9 + 333) = *(_BYTE *)(v9 + 333) & 0xF8 | 1;
        *(_BYTE *)(v9 + 525) = *(_BYTE *)(v9 + 525) & 0xF8 | 1;
      }
      RtlpDynamicLookasideInitialize((char *)&stru_140E6BFE8 + v7 + 4248);
      if ( v2 )
        *(_QWORD *)(v9 + 56) = (char *)&stru_140E6BFE8 + v7 + 4248;
      if ( (a1 & 0x400) != 0 )
      {
        v11 = 0LL;
        v18 = 0LL;
      }
      else
      {
        v15 = v8;
        result = ExCreateHeap(&v15, 1077936128LL, (__int64 *)&v18);
        if ( (int)result < 0 )
          return result;
        v11 = v18;
        if ( HIDWORD(ExSaPageGroupDescriptorArrayLock.InitialStack) )
        {
          v18[333] |= 8u;
          v11[525] |= 8u;
        }
      }
      *(void **)((char *)&stru_140E6BFE8.SListFaultAddress + v7) = v11;
    }
    *(_WORD *)((char *)&v15 + 1) = 1;
    LOBYTE(v15) = 3;
    v12 = v15;
    result = ExCreateHeap(&v15, 0x400000LL, (__int64 *)&v18);
    if ( (int)result >= 0 )
    {
      v13 = (__int64)v18;
      v18[333] |= 8u;
      *(_BYTE *)(v13 + 525) |= 8u;
      qword_140EEF008 = v13;
      if ( (a1 & 0x400) != 0 )
      {
        v14 = 0LL;
      }
      else
      {
        v15 = v12;
        result = ExCreateHeap(&v15, 1077936128LL, (__int64 *)&v18);
        if ( (int)result < 0 )
          return result;
        v14 = (__int64)v18;
        v18[333] |= 8u;
        *(_BYTE *)(v14 + 525) |= 8u;
      }
      qword_140EEF000[0] = v14;
      *(_QWORD *)&stru_140E285C0.SchedulerAssistPriorityFloor = 0LL;
      stru_140E285C0.KernelShadowStack = 0LL;
      result = ExInitializePoolTracker();
      if ( (int)result >= 0 )
      {
        ExpPoolMgrInitialize(&dword_140E6BF60);
        _InterlockedOr64(&ExpPoolFlags, a1);
        return 0LL;
      }
    }
  }
  return result;
}
