/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x140306C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1400508E4 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x140306F50 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r14
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  struct DXGDEVICE *v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  ADAPTER_RENDER **v25; // rcx
  __int64 CurrentProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  char v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  _BYTE v38[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  struct DXGDEVICE *v43; // [rsp+F8h] [rbp-8h]
  char v44; // [rsp+100h] [rbp+0h]

  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v10 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    v17 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3791;
    v28 = PsGetCurrentProcess(v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v28,
      0LL,
      0LL,
      0LL);
    return v17;
  }
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31, v5, Current, &v29);
  v12 = v29;
  if ( !v29 )
  {
    v22 = PsGetCurrentProcess(v11);
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v22, v5);
    WdLogGlobalForLineNumber = 3803;
    v24 = PsGetCurrentProcess(v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid device handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v24,
      v5,
      0LL,
      0LL);
    v20 = v31[0];
    if ( v31[0] )
    {
LABEL_13:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    }
    return v17;
  }
  v30 = 0;
  if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v29) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
    v35 = v13;
    v36 = 0;
    v37 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      v34 = -1LL;
    }
    v14 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
    v40 = v14;
    v41 = 0;
    v42 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      v39 = -1LL;
    }
    v43 = v12;
    v44 = 0;
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = DXGDEVICE::IssueSyncObjectOpForAllContexts(v12, v10, a2, a3, a4);
      COREACCESS::~COREACCESS((COREACCESS *)v38, v18);
      COREACCESS::~COREACCESS((COREACCESS *)v33, v19);
      if ( v29 && v30 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v29 + 17));
        KeLeaveCriticalRegion();
      }
      v20 = v31[0];
      if ( !v31[0] )
        return v17;
      goto LABEL_13;
    }
    WdLogSingleEntry2(4LL, v15, v10);
    WdLogGlobalForLineNumber = 3825;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v29);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v31);
    return v16;
  }
  else
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3816;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v29);
    v25 = (ADAPTER_RENDER **)v31[0];
    if ( v31[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v31[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v25[2], (struct DXGDEVICE *)v25);
    return 2147483665LL;
  }
}
