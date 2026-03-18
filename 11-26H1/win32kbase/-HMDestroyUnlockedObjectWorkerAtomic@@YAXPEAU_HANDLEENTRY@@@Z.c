/*
 * XREFs of ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400E5470 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceUserDestroyHandle @ 0x140118DB8 (EtwTraceUserDestroyHandle.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     HMRemoveHandleForObjectWorker @ 0x14016FF84 (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14018D960 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14018FCD0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401CF4C4 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall HMDestroyUnlockedObjectWorkerAtomic(struct _HANDLEENTRY *a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // r8d
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // r15
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned int EtwUserHandleType; // eax
  struct _HANDLEENTRY *v21; // r8
  char v22; // al
  void *v23; // rcx
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h]

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  if ( !*(_DWORD *)(UserSessionState + 19792) && !AtomicExecutionCheck::GetCount() )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3946LL);
  }
  LOBYTE(v24) = 0;
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v24, a1, v5);
  v6 = *(_DWORD *)(UserSessionState + 19820);
  v7 = 0LL;
  v8 = *(_QWORD *)(UserSessionState + 19800);
  *(_DWORD *)(UserSessionState + 19820) = v6 + 1;
  v12 = W32GetUserSessionState(v10, v9, v11);
  v13 = (__int64)a1 - *(_QWORD *)(v12 + 19920);
  v14 = *(_QWORD *)(v12 + 19864);
  *((_BYTE *)a1 + 25) |= 2u;
  v15 = 5LL * (unsigned int)(v13 >> 5);
  v16 = *((unsigned __int8 *)a1 + 24);
  if ( (_BYTE)v16 == 19 || (_BYTE)v16 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v16);
    EtwTraceUserDestroyHandle(**(_QWORD **)(v14 + 8 * v15), EtwUserHandleType, 0LL);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle(**(Win32JobObject ***)(v14 + 8 * v15), a1, v21);
    }
    else if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**(_QWORD **)(v14 + 8 * v15));
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v22 = *((_BYTE *)a1 + 24);
    if ( v22 == 19 )
    {
      v23 = *(void **)(*(_QWORD *)(v14 + 8 * v15) + 32LL);
    }
    else
    {
      if ( v22 != 22 )
      {
LABEL_16:
        HMRemoveHandleForObjectWorker(a1);
        goto LABEL_17;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(v14 + 8 * v15) + 16LL);
      v23 = *(void **)(v7 + 32);
    }
    ObfDereferenceObject(v23);
    goto LABEL_16;
  }
  (*(&gahti + 3 * v16))(*(_QWORD *)(v14 + 8 * v15));
LABEL_17:
  if ( !*(_DWORD *)(UserSessionState + 19792) && v7 )
    HMUnlockObject(v7, v17, v19);
  *(_DWORD *)(UserSessionState + 19820) = v6;
  if ( v8 )
  {
    if ( *(_QWORD *)(UserSessionState + 19800) != v8 )
    {
      v25 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4041LL);
    }
    *(_QWORD *)(UserSessionState + 19800) = v8;
  }
  if ( (_BYTE)v24 )
    *(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 19800) = 0LL;
}
