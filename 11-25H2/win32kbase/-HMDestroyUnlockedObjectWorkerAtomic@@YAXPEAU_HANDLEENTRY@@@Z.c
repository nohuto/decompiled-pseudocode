/*
 * XREFs of ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserDestroyHandle @ 0x14003C844 (EtwTraceUserDestroyHandle.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1400AF090 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x140108CFC (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 *     HMRemoveHandleForObjectWorker @ 0x14013956C (HMRemoveHandleForObjectWorker.c)
 *     HMCleanupGrantedHandle @ 0x14014EE04 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x140150BB0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AD354 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall HMDestroyUnlockedObjectWorkerAtomic(struct _HANDLEENTRY *a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  int v4; // r13d
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  char EtwUserHandleType; // al
  __int64 v16; // rdx
  struct _HANDLEENTRY *v17; // r8
  char v18; // al
  void *v19; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 19760) && !(unsigned int)AtomicExecutionCheck::GetCount() )
  {
    v20 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3925LL);
  }
  LOBYTE(v20) = 0;
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v20, a1);
  v4 = *(_DWORD *)(UserSessionState + 19788);
  v5 = 0LL;
  v6 = *(_QWORD *)(UserSessionState + 19768);
  *(_DWORD *)(UserSessionState + 19788) = v4 + 1;
  v9 = W32GetUserSessionState(v8, v7);
  v10 = (__int64)a1 - *(_QWORD *)(v9 + 19888);
  v11 = *(_QWORD *)(v9 + 19832);
  *((_BYTE *)a1 + 25) |= 2u;
  v12 = 5LL * (unsigned int)(v10 >> 5);
  v13 = *((unsigned __int8 *)a1 + 24);
  if ( (_BYTE)v13 == 19 || (_BYTE)v13 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v13);
    EtwTraceUserDestroyHandle(**(_QWORD **)(v11 + 8 * v12), EtwUserHandleType, 0);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      Win32JobObject::RemoveHandle(**(Win32JobObject ***)(v11 + 8 * v12), a1, v17);
    }
    else if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**(_QWORD **)(v11 + 8 * v12));
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v18 = *((_BYTE *)a1 + 24);
    if ( v18 == 19 )
    {
      v19 = *(void **)(*(_QWORD *)(v11 + 8 * v12) + 32LL);
    }
    else
    {
      if ( v18 != 22 )
      {
LABEL_16:
        HMRemoveHandleForObjectWorker((__int64)a1, v16);
        goto LABEL_17;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v12) + 16LL);
      v19 = *(void **)(v5 + 32);
    }
    ObfDereferenceObject(v19);
    goto LABEL_16;
  }
  (*(&gahti + 3 * v13))(*(_QWORD *)(v11 + 8 * v12));
LABEL_17:
  if ( !*(_DWORD *)(UserSessionState + 19760) && v5 )
    HMUnlockObject((int *)v5, v14);
  *(_DWORD *)(UserSessionState + 19788) = v4;
  if ( v6 )
  {
    if ( *(_QWORD *)(UserSessionState + 19768) != v6 )
    {
      v21 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4020LL);
    }
    *(_QWORD *)(UserSessionState + 19768) = v6;
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v20, v14);
}
