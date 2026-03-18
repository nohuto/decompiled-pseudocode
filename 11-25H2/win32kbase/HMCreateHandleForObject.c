/*
 * XREFs of HMCreateHandleForObject @ 0x14003B950
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140212A90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMHandleFromIndex @ 0x14003BB40 (HMHandleFromIndex.c)
 *     EtwTraceUserCreateHandle @ 0x14003C7D4 (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1401131B4 (-HMGrowHandleTable@@YAHXZ.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 */

__int64 __fastcall HMCreateHandleForObject(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *UserSessionState; // rbp
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int EtwUserHandleType; // eax
  __int64 v30; // rbx

  v2 = a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( v2 != 19 && v2 != 22 || !a1 )
    return 0LL;
  while ( 1 )
  {
    v7 = UserSessionState + 2463;
    if ( UserSessionState[2463] )
      break;
    v7 = UserSessionState + 2462;
    if ( UserSessionState[2462] )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  if ( !v7 )
    return 0LL;
  v8 = *v7;
  v9 = UserSessionState[2486] + 32 * *v7;
  v10 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19832);
  *v7 = *(_QWORD *)(v10 + 40 * v8);
  if ( (unsigned int)v8 > *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19816) )
    *(_DWORD *)(W32GetUserSessionState(v14, v13) + 19816) = v8;
  *(_BYTE *)(v9 + 24) = v2;
  *(_QWORD *)(v10 + 40 * v8 + 24) = 0LL;
  *(_QWORD *)(v10 + 40 * v8) = a1;
  *(_QWORD *)(v10 + 40 * v8 + 32) = _InterlockedIncrement64(&HandleSequenceNumber);
  *a1 = HMHandleFromIndex(v8);
  v17 = W32GetUserSessionState(v16, v15);
  ++*(_DWORD *)(v17 + 19820);
  v20 = *(_DWORD *)(W32GetUserSessionState(v19, v18) + 19820);
  if ( v20 > *(_DWORD *)(W32GetUserSessionState(v22, v21) + 19824) )
  {
    v25 = *(_DWORD *)(W32GetUserSessionState(v24, v23) + 19820);
    *(_DWORD *)(W32GetUserSessionState(v27, v26) + 19824) = v25;
  }
  EtwUserHandleType = GetEtwUserHandleType(v2);
  EtwTraceUserCreateHandle(*a1, EtwUserHandleType, 0LL);
  if ( v2 == 19 )
  {
    RawInputManagerDeviceObjectReference(a1[4]);
  }
  else
  {
    v30 = a1[2];
    RawInputManagerDeviceObjectReference(*(_QWORD *)(v30 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
  }
  *(_QWORD *)(v10 + 40 * v8 + 16) = 0LL;
  return *(_QWORD *)(v10 + 40 * v8);
}
