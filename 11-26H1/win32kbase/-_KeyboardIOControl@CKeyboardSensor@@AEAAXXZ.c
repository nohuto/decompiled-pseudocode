/*
 * XREFs of ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140219D44
 * Callers:
 *     ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1401B0948 (-KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z.c)
 *     ?OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ @ 0x140219BD0 (-OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x140184324 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x140185E40 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CKeyboardSensor::_KeyboardIOControl(CKeyboardSensor *this, int a2, int a3)
{
  int v4; // r12d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 UserSessionState; // rax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rax
  struct RawInputManagerObject *v12; // rdx
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  char *v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 i; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  int v29; // r15d
  int v30; // r13d
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  int (*v36)(void); // rax
  __int64 v37; // rcx
  void (*v38)(void); // rax
  _BYTE v39[4]; // [rsp+68h] [rbp-29h] BYREF
  int v40; // [rsp+6Ch] [rbp-25h] BYREF
  int v41; // [rsp+70h] [rbp-21h] BYREF
  int v42; // [rsp+74h] [rbp-1Dh]
  int v43; // [rsp+78h] [rbp-19h] BYREF
  __int16 v44; // [rsp+7Ch] [rbp-15h]
  char *v45; // [rsp+80h] [rbp-11h]
  __int64 v46; // [rsp+88h] [rbp-9h]
  PVOID v47; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v48; // [rsp+A8h] [rbp+17h] BYREF
  int v49; // [rsp+B0h] [rbp+1Fh]

  if ( *((_QWORD *)this + 157) )
  {
    v4 = *((_DWORD *)this + 334);
    *((_DWORD *)this + 334) = 0;
    v42 = *(_DWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 68604);
    UserSessionState = W32GetUserSessionState(v6, v5, v7);
    v43 = *(_DWORD *)(UserSessionState + 12860);
    v44 = *(_WORD *)(UserSessionState + 12864);
    v41 = *(_DWORD *)(UserSessionState + 12852);
    v48 = *(_QWORD *)(UserSessionState + 14312);
    v49 = *(_DWORD *)(UserSessionState + 14320);
    v11 = W32GetUserSessionState(v41, v9, v10);
    v12 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
    v13 = *(_QWORD *)(v11 + 68832);
    v45 = (char *)*((_QWORD *)this + 1);
    v46 = v13;
    RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v47, v12);
    LOBYTE(v14) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v39, v14, v15, v16);
    v17 = *((_QWORD *)this + 154);
    v18 = 0LL;
    v19 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v17, 0LL);
    v20 = **((_QWORD **)this + 155);
    if ( v20 )
    {
      do
      {
        if ( *(_DWORD *)(v20 + 48) == 1 && *(_QWORD *)(v20 + 208) && *(_QWORD *)(v20 + 216) )
          ++v19;
        v20 = *(_QWORD *)(v20 + 56);
      }
      while ( v20 );
      if ( v19 )
      {
        v18 = (char *)Win32AllocPoolZInitImpl(256LL, 16LL * v19, 0x43486970u);
        if ( v18 )
        {
          v21 = 0;
          for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(i + 56) )
          {
            if ( *(_DWORD *)(i + 48) == 1 && *(_QWORD *)(i + 208) && *(_QWORD *)(i + 216) )
            {
              v23 = 2LL * v21++;
              *(_QWORD *)&v18[8 * v23] = *(_QWORD *)(i + 16);
              *(_WORD *)&v18[8 * v23 + 8] = *(_WORD *)(i + 440);
            }
          }
        }
      }
    }
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
    v28 = 0;
    if ( v19 )
    {
      v29 = v4 & 1;
      v30 = v4 & 2;
      v31 = v4 & 4;
      do
      {
        v40 = 0;
        if ( v29 )
        {
          v32 = W32GetUserSessionState(v25, v24, v26);
          RIMDeviceIoControl(
            v45,
            *(_QWORD *)&v18[16 * v28],
            0xB0004u,
            &v43,
            6u,
            0LL,
            0,
            &v40,
            (struct _IO_STATUS_BLOCK *)(v32 + 12872),
            1,
            0,
            0);
        }
        if ( v30 )
        {
          v33 = W32GetUserSessionState(v25, v24, v26);
          RIMDeviceIoControl(
            v45,
            *(_QWORD *)&v18[16 * v28],
            0xB0008u,
            &v41,
            4u,
            0LL,
            0,
            &v40,
            (struct _IO_STATUS_BLOCK *)(v33 + 12872),
            1,
            0,
            0);
        }
        if ( v31 && (v18[16 * v28 + 8] == 7 && v18[16 * v28 + 9] == 82 || v42 && v46 == 0x2000200000007LL) )
        {
          v34 = W32GetUserSessionState(v25, v24, v26);
          RIMDeviceIoControl(
            v45,
            *(_QWORD *)&v18[16 * v28],
            0xB1004u,
            &v48,
            0xCu,
            0LL,
            0,
            &v40,
            (struct _IO_STATUS_BLOCK *)(v34 + 12872),
            1,
            0,
            0);
        }
        ++v28;
      }
      while ( v28 < v19 );
    }
    if ( v18 )
      GreDeleteFastMutex(v18, v24, v26, v27);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v39, v24, v26);
    v36 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35) + 48) + 5456LL);
    if ( v36 && v36() >= 0 )
    {
      v38 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48) + 5464LL);
      if ( v38 )
        v38();
    }
    RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v47);
  }
}
