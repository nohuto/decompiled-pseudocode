/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x140213D10
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1400BF9C0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140149E18 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x14014A2FC (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x140196EE0 (ApiSetEditionUpdateRemoteLights.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct RawInputManagerObject *v21; // rdx
  char *v22; // r13
  __int64 v23; // rdx
  struct W32_PUSH_LOCK *v24; // rbx
  __int64 v25; // rsi
  char *v26; // r14
  __int64 i; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edi
  int v32; // r12d
  char *v33; // rbx
  int v34; // r15d
  int v35; // r14d
  struct _IO_STATUS_BLOCK *v36; // rax
  struct _IO_STATUS_BLOCK *v37; // rax
  struct _IO_STATUS_BLOCK *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v42[4]; // [rsp+6Ch] [rbp-15h] BYREF
  int v43; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v44; // [rsp+74h] [rbp-Dh] BYREF
  unsigned int v45; // [rsp+78h] [rbp-9h] BYREF
  __int16 v46; // [rsp+7Ch] [rbp-5h]
  __int64 v47; // [rsp+80h] [rbp-1h]
  __int64 v48; // [rsp+90h] [rbp+Fh]
  PVOID v49; // [rsp+98h] [rbp+17h] BYREF
  __int64 v50; // [rsp+A0h] [rbp+1Fh] BYREF
  int v51; // [rsp+A8h] [rbp+27h]

  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v3, v2) + 12872) )
    {
      v41 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 217);
    }
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v5 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 157) )
      {
        v43 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 68612);
        v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 12872);
        UserSessionState = W32GetUserSessionState(v10, v9);
        *(_DWORD *)(UserSessionState + 12872) &= 0xFFFFFFF8;
        v14 = W32GetUserSessionState(v13, v12);
        v45 = *(_DWORD *)(v14 + 12860);
        v46 = *(_WORD *)(v14 + 12864);
        v44 = *(_DWORD *)(W32GetUserSessionState(v45, v15) + 12852);
        v17 = W32GetUserSessionState(v44, v16);
        v50 = *(_QWORD *)(v17 + 14320);
        v51 = *(_DWORD *)(v17 + 14328);
        v20 = W32GetUserSessionState(v19, v18);
        v21 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v22 = (char *)*((_QWORD *)this + 1);
        v47 = *(_QWORD *)(v20 + 68840);
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v49, v21);
        LOBYTE(v23) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v42, v23);
        v24 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
        v25 = 0LL;
        W32AcquirePushLockSharedEx(v24, 0);
        v48 = Win32AllocPoolZInitImpl(256LL, 16LL * *((_QWORD *)this + 157), 0x43486970u);
        v26 = (char *)v48;
        if ( v48 )
        {
          for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(i + 56) )
          {
            if ( *(_DWORD *)(i + 48) == 1 && *(_QWORD *)(i + 208) && *(_QWORD *)(i + 216) )
            {
              if ( (unsigned __int64)(unsigned int)v25 >= *((_QWORD *)this + 157) )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 282);
                break;
              }
              v28 = 2LL * (unsigned int)v25;
              v25 = (unsigned int)(v25 + 1);
              *(_QWORD *)&v26[8 * v28] = *(_QWORD *)(i + 16);
              *(_WORD *)&v26[8 * v28 + 8] = *(_WORD *)(i + 440);
            }
          }
        }
        ExReleasePushLockSharedEx(v24, 0LL);
        KeLeaveCriticalRegion();
        if ( (_DWORD)v25 )
        {
          v31 = v8 & 1;
          v32 = v8 & 2;
          v33 = v26;
          v34 = v8 & 4;
          v35 = v43;
          do
          {
            v41 = 0;
            if ( v31 )
            {
              v36 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v30, v29);
              RIMDeviceIoControl(v22, *(char **)v33, 0xB0004u, &v45, 6u, 0LL, 0, &v41, v36 + 805, 1, 0, 0);
            }
            if ( v32 )
            {
              v37 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v30, v29);
              RIMDeviceIoControl(v22, *(char **)v33, 0xB0008u, &v44, 4u, 0LL, 0, &v41, v37 + 805, 1, 0, 0);
            }
            if ( v34 && (v33[8] == 7 && v33[9] == 82 || v35 && v47 == 0x2000200000007LL) )
            {
              v43 = 0;
              v38 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v30, v29);
              RIMDeviceIoControl(v22, *(char **)v33, 0xB1004u, &v50, 0xCu, 0LL, 0, &v43, v38 + 805, 1, 0, 0);
            }
            v33 += 16;
            --v25;
          }
          while ( v25 );
          v26 = (char *)v48;
        }
        if ( v26 )
          GreDeleteFastMutex(v26);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v42, v29);
        ApiSetEditionUpdateRemoteLights(v40, v39);
        RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v49);
      }
    }
  }
}
