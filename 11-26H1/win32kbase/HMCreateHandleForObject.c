/*
 * XREFs of HMCreateHandleForObject @ 0x140095100
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140219730 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMHandleFromIndex @ 0x1400952F8 (HMHandleFromIndex.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     EtwTraceUserCreateHandle @ 0x140095724 (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140153418 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(_QWORD *a1, int a2, int a3)
{
  char v3; // di
  int v5; // edx
  int v6; // ecx
  _QWORD *UserSessionState; // rbp
  int v8; // r8d
  __int64 *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  unsigned int v26; // ebx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ebx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax
  __int64 v39; // rbx

  v3 = a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  if ( v3 != 19 && v3 != 22 || !a1 )
    return 0LL;
  while ( 1 )
  {
    v9 = UserSessionState + 2467;
    if ( UserSessionState[2467] )
      break;
    v9 = UserSessionState + 2466;
    if ( UserSessionState[2466] )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  if ( !v9 )
    return 0LL;
  v10 = *v9;
  v11 = UserSessionState[2490] + 32 * *v9;
  v12 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v8) + 19864);
  *v9 = *(_QWORD *)(v12 + 40 * v10);
  if ( (unsigned int)v10 > *(_DWORD *)(W32GetUserSessionState(v14, v13, v15) + 19848) )
    *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 19848) = v10;
  *(_BYTE *)(v11 + 24) = v3;
  *(_QWORD *)(v12 + 40 * v10) = a1;
  *(_QWORD *)(v12 + 40 * v10 + 24) = 0LL;
  *(_QWORD *)(v12 + 40 * v10 + 32) = _InterlockedIncrement64(&HandleSequenceNumber);
  *a1 = HMHandleFromIndex(v10);
  v22 = W32GetUserSessionState(v20, v19, v21);
  ++*(_DWORD *)(v22 + 19852);
  v26 = *(_DWORD *)(W32GetUserSessionState(v24, v23, v25) + 19852);
  if ( v26 > *(_DWORD *)(W32GetUserSessionState(v28, v27, v29) + 19856) )
  {
    v33 = *(_DWORD *)(W32GetUserSessionState(v31, v30, v32) + 19852);
    *(_DWORD *)(W32GetUserSessionState(v35, v34, v36) + 19856) = v33;
  }
  LOBYTE(v31) = v3;
  EtwUserHandleType = GetEtwUserHandleType(v31, v30, v32);
  EtwTraceUserCreateHandle(*a1, EtwUserHandleType, 0LL);
  if ( v3 == 19 )
  {
    RawInputManagerDeviceObjectReference(a1[4]);
  }
  else
  {
    v39 = a1[2];
    RawInputManagerDeviceObjectReference(*(_QWORD *)(v39 + 32));
    _InterlockedAdd((volatile signed __int32 *)(v39 + 8), 1u);
  }
  result = *(_QWORD *)(v12 + 40 * v10);
  *(_QWORD *)(v12 + 40 * v10 + 16) = 0LL;
  return result;
}
