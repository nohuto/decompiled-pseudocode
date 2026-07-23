/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x1403BBF88
 * Callers:
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403BBDB0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403BCE50 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404DB8B8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x140614284 (PopPepClearDripsDeviceVetoMask.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PopPepUnregisterDevice @ 0x140B08930 (PopPepUnregisterDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 *     PopDiagTraceFxVetoMaskUpdate @ 0x140504994 (PopDiagTraceFxVetoMaskUpdate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopPepUpdateIdleStateRefCount(int a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  char v8; // r12
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v11; // ebp
  unsigned int v12; // ebp
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v19; // r15d
  ULONG_PTR v20; // rbx
  int v21; // eax
  int v22; // ett
  unsigned __int8 v23; // bl
  __int64 v24; // rsi
  ULONG_PTR v25; // rbx
  signed __int32 v26; // eax
  __int64 v28; // [rsp+38h] [rbp-160h]
  _DWORD v30[3]; // [rsp+44h] [rbp-154h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+50h] [rbp-148h] BYREF

  v30[0] = 0;
  memset_0(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v8 = 0;
  v9 = 0LL;
  CurrentIrql = 0;
  v11 = a1;
  if ( a3 )
    v11 = a2;
  v12 = (a1 ^ a2) & v11;
  if ( a4 )
  {
    if ( a5 == -1 )
      v13 = (volatile signed __int32 *)(a4 + 184);
    else
      v13 = (volatile signed __int32 *)(a4 + 208LL * a5 + 384);
    v14 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 48LL);
  }
  else
  {
    v13 = 0LL;
    LODWORD(v14) = 0;
  }
  result = PopDiagTraceFxVetoMaskUpdate(v14, a5, a1, a2, a3);
  v16 = PopPepPlatformState;
  v28 = PopPepPlatformState;
LABEL_10:
  v17 = 2LL;
  while ( _BitScanForward(&v19, v12) )
  {
    v12 &= v12 - 1;
    v20 = v16 + 448LL * v19;
    if ( a3 )
    {
      result = *(unsigned int *)(v20 + 384);
      if ( v13 )
        _InterlockedIncrement(v13);
      if ( (int)result <= 0
        || (v22 = result,
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(v20 + 384),
                                     result + 1,
                                     result),
            v16 = v28,
            v22 != (_DWORD)result) )
      {
        BugCheckParameter2[v9] = v20;
        v9 = (unsigned int)(v9 + 1);
      }
    }
    else
    {
      if ( v13 )
      {
        v21 = _InterlockedDecrement(v13);
        if ( v21 < 0 )
          PopFxBugCheck(0x668uLL, v16 + 448LL * v19, v21, v12);
      }
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 384));
      if ( (int)result < 0x40000000 )
        PopFxBugCheck(0x668uLL, v16 + 448LL * v19, (int)result, v12);
      if ( (_DWORD)result == 0x40000000 )
      {
        if ( !v8 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v16) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
            v16 = v28;
            v17 = 2LL;
          }
          v8 = 1;
        }
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 384), -1, 0x40000000);
        if ( (_DWORD)result == 0x40000000 )
        {
          LOBYTE(v17) = 1;
          PopFxPlatformStateAvailable(v19, v17);
          result = *(int *)(v20 + 384);
          if ( (_DWORD)result != -1 )
            PopFxBugCheck(0x669uLL, v20, *(int *)(v20 + 384), 0LL);
          v16 = v28;
          *(_DWORD *)(v20 + 384) = 0;
          goto LABEL_10;
        }
      }
    }
  }
  if ( (_DWORD)v9 )
  {
    v23 = KeGetCurrentIrql();
    if ( v23 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = v23;
      KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
    }
    CurrentIrql = v23;
    while ( 1 )
    {
      KeYieldProcessorEx(v30);
      v24 = 0LL;
      do
      {
        v25 = BugCheckParameter2[v24];
        v26 = *(_DWORD *)(v25 + 384);
        if ( v26 <= 0 )
        {
          if ( !v26 && !_InterlockedCompareExchange((volatile signed __int32 *)(v25 + 384), -1, 0) )
          {
            PopFxPlatformStateAvailable((__int64)(v25 - v28) / 448, 0LL);
            if ( *(_DWORD *)(v25 + 384) != -1 )
              PopFxBugCheck(0x669uLL, v25, *(int *)(v25 + 384), 0LL);
            *(_DWORD *)(v25 + 384) = 1073741825;
LABEL_43:
            v9 = (unsigned int)(v9 - 1);
            BugCheckParameter2[v24] = BugCheckParameter2[v9];
            continue;
          }
        }
        else if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 384), v26 + 1, v26) )
        {
          goto LABEL_43;
        }
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < (unsigned int)v9 );
      if ( !(_DWORD)v9 )
      {
LABEL_54:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
    }
  }
  if ( v8 )
    goto LABEL_54;
  return result;
}
