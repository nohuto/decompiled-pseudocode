/*
 * XREFs of KiProcessExpiredTimerList @ 0x1403B58FC
 * Callers:
 *     KiExpireTimerTable @ 0x1403B5450 (KiExpireTimerTable.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiObjTrkTimerUntrack @ 0x1403B5410 (KiObjTrkTimerUntrack.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiProcessExpiredTimerList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  int v6; // r12d
  int v7; // r15d
  _DWORD *v8; // r13
  unsigned int v9; // r14d
  __int64 result; // rax
  __int64 v11; // rbx
  char v12; // si
  __int64 v13; // r8
  __int64 v14; // r13
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // rdx
  _DWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // [rsp+30h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-59h]
  _DWORD *v25; // [rsp+48h] [rbp-51h]
  __int64 v26; // [rsp+50h] [rbp-49h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  _QWORD v28[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v29; // [rsp+70h] [rbp-29h] BYREF
  __int128 v30; // [rsp+80h] [rbp-19h]
  _OWORD v31[2]; // [rsp+90h] [rbp-9h] BYREF

  v24 = a4;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = BYTE4(PerfGlobalGroupMask) & 0x80;
  v26 = a3;
  v7 = DWORD2(PerfGlobalGroupMask) & 0x20000;
  v25 = (_DWORD *)a2;
  v8 = (_DWORD *)a2;
  BugCheckParameter2 = 0LL;
  v29 = 0LL;
  v9 = 0;
  v27 = v5;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  do
  {
    result = v9++;
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * result), 0LL);
    if ( v11 )
    {
      v12 = 0;
      if ( !*(_DWORD *)(v11 + 60) )
        v12 = KiObjTrkTimerUntrack(v11);
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v11, a2, a3);
      if ( v12 )
        _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 59), 0, 1);
      if ( v7 )
      {
        *(_QWORD *)&v29 = *(_QWORD *)(v11 + 24);
        v21 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v21 )
          *(_QWORD *)&v30 = *(_QWORD *)(v21 + 24);
        else
          *(_QWORD *)&v30 = 0LL;
      }
      result = KiTimerWaitTest(a1, v11, v8 + 2);
      v14 = result;
      if ( v7 )
      {
        *((_QWORD *)&v29 + 1) = v11;
        BYTE8(v30) = *(_BYTE *)(v11 + 1) >> 2;
        v28[0] = &v29;
        v28[1] = 32LL;
        result = EtwTraceKernelEvent((int)v28, 1, 0x40020000u, 3921, 1538);
      }
      if ( v14 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)a1, 1LL, 0LL, 2);
        v15 = *(unsigned int *)(v27 + 484);
        v22 = *(_BYTE *)(v27 + 562);
        if ( v6 )
          EtwGetKernelTraceTimestamp((unsigned __int64)v31, 0x20000080uLL, v13);
        v17 = v25;
        BugCheckParameter2 = *(_QWORD *)(v14 + 24);
        v16 = BugCheckParameter2;
        v18 = (*v25)++ & 0xF;
        v19 = 3 * v18;
        *(_QWORD *)&v17[2 * v19 + 4] = v16;
        *(_QWORD *)&v17[2 * v19 + 6] = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v17[2 * v19 + 8] = 0LL;
        *(_DWORD *)(a1 + 34396) = 0;
        *(_BYTE *)(a1 + 14522) = 1;
        guard_dispatch_icall_no_overrides(v14, *(_QWORD *)(v14 + 32), (unsigned int)v17[2]);
        v8 = v25;
        v20 = v27;
        *(_BYTE *)(a1 + 14522) = 0;
        *(_QWORD *)&v8[2 * v19 + 8] = MEMORY[0xFFFFF78000000320];
        if ( (_DWORD)v15 != *(_DWORD *)(v20 + 484) )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v15, *(unsigned int *)(v20 + 484));
        result = *(char *)(v20 + 562);
        if ( v22 != (_BYTE)result )
          KeBugCheckEx(0x1F9u, BugCheckParameter2, *(char *)(v20 + 562), 5uLL, 0LL);
        if ( v6 )
          result = EtwTraceTimedEvent(3909, 0x20000080u, (__int64)&BugCheckParameter2, 8, 5245442, (__int64)v31);
      }
      else
      {
        v8 = v25;
      }
      a3 = v26;
    }
  }
  while ( v9 < v24 );
  *(_QWORD *)(a1 + 14432) = 0LL;
  if ( *(_QWORD *)(a1 + 11528) )
    return KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)a1, 1LL, 0LL, 2);
  return result;
}
