/*
 * XREFs of ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140214114
 * Callers:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402138CC (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 *     ?OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ @ 0x140213B90 (-OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140149E18 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x14014A2FC (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x140196EE0 (ApiSetEditionUpdateRemoteLights.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___ @ 0x14021385C (CBaseInput--ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CKeyboardSensor::_KeyboardIOControl(CKeyboardSensor *this, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct RawInputManagerObject *v9; // rdx
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  struct W32_PUSH_LOCK *v12; // rbx
  char *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  int v20; // r15d
  int v21; // r13d
  int v22; // r12d
  struct _IO_STATUS_BLOCK *v23; // rax
  struct _IO_STATUS_BLOCK *v24; // rax
  struct _IO_STATUS_BLOCK *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v28[4]; // [rsp+68h] [rbp-39h] BYREF
  int v29; // [rsp+6Ch] [rbp-35h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-31h] BYREF
  int v31; // [rsp+74h] [rbp-2Dh]
  int v32; // [rsp+78h] [rbp-29h] BYREF
  __int16 v33; // [rsp+7Ch] [rbp-25h]
  char *v34; // [rsp+80h] [rbp-21h]
  __int64 v35; // [rsp+88h] [rbp-19h]
  PVOID v36; // [rsp+A0h] [rbp-1h] BYREF
  _QWORD v37[3]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+1Fh] BYREF
  int v39; // [rsp+C8h] [rbp+27h]

  if ( *((_QWORD *)this + 157) )
  {
    v3 = *((_DWORD *)this + 336);
    *((_DWORD *)this + 336) = 0;
    v31 = *(_DWORD *)(W32GetUserSessionState(this, a2) + 68612);
    UserSessionState = W32GetUserSessionState(v5, v4);
    v32 = *(_DWORD *)(UserSessionState + 12860);
    v33 = *(_WORD *)(UserSessionState + 12864);
    v30 = *(_DWORD *)(UserSessionState + 12852);
    v38 = *(_QWORD *)(UserSessionState + 14320);
    v39 = *(_DWORD *)(UserSessionState + 14328);
    v8 = W32GetUserSessionState(v30, v7);
    v9 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
    v10 = *(_QWORD *)(v8 + 68840);
    v34 = (char *)*((_QWORD *)this + 1);
    v35 = v10;
    RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v36, v9);
    LOBYTE(v11) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v28, v11);
    v12 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
    v13 = 0LL;
    v14 = 0;
    W32AcquirePushLockSharedEx(v12, 0);
    v15 = **((_QWORD **)this + 155);
    if ( v15 )
    {
      do
      {
        if ( *(_DWORD *)(v15 + 48) == 1 && *(_QWORD *)(v15 + 208) && *(_QWORD *)(v15 + 216) )
          ++v14;
        v15 = *(_QWORD *)(v15 + 56);
      }
      while ( v15 );
      if ( v14 )
      {
        v16 = Win32AllocPoolZInitImpl(256LL, 16LL * v14, 0x43486970u);
        v13 = (char *)v16;
        if ( v16 )
        {
          v37[0] = v16;
          v29 = 0;
          v37[2] = &v29;
          CBaseInput::ForEachDevice__lambda_5dcffa01845846ecfe290e57461c0d33___((__int64)this, (__int64)v37);
        }
      }
    }
    ExReleasePushLockSharedEx(v12, 0LL);
    KeLeaveCriticalRegion();
    v19 = 0;
    if ( v14 )
    {
      v20 = v3 & 1;
      v21 = v3 & 2;
      v22 = v3 & 4;
      do
      {
        v29 = 0;
        if ( v20 )
        {
          v23 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v18, v17);
          RIMDeviceIoControl(v34, *(char **)&v13[16 * v19], 0xB0004u, &v32, 6u, 0LL, 0, &v29, v23 + 805, 1, 0, 0);
        }
        if ( v21 )
        {
          v24 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v18, v17);
          RIMDeviceIoControl(v34, *(char **)&v13[16 * v19], 0xB0008u, &v30, 4u, 0LL, 0, &v29, v24 + 805, 1, 0, 0);
        }
        if ( v22 && (v13[16 * v19 + 8] == 7 && v13[16 * v19 + 9] == 82 || v31 && v35 == 0x2000200000007LL) )
        {
          v25 = (struct _IO_STATUS_BLOCK *)W32GetUserSessionState(v18, v17);
          RIMDeviceIoControl(v34, *(char **)&v13[16 * v19], 0xB1004u, &v38, 0xCu, 0LL, 0, &v29, v25 + 805, 1, 0, 0);
        }
        ++v19;
      }
      while ( v19 < v14 );
    }
    if ( v13 )
      GreDeleteFastMutex(v13);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v28, v17);
    ApiSetEditionUpdateRemoteLights(v27, v26);
    RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v36);
  }
}
