/*
 * XREFs of ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E9FAC
 * Callers:
 *     NtDxgkOpenNativeFenceFromNtHandle @ 0x1401EC940 (NtDxgkOpenNativeFenceFromNtHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline @ 0x14007F7CC (Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     _NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP @ 0x1401E9158 (_NtDxgkOpenNativeFenceFromNtHandleInternal_--_2_--CLEANUP--_CLEANUP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall NtDxgkOpenNativeFenceFromNtHandleInternal(struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *a1)
{
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  struct ADAPTER_RENDER **v5; // rbx
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // r14d
  NTSTATUS v9; // eax
  int v10; // r12d
  DXGSYNCOBJECT **v11; // r14
  int v12; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // ebx
  unsigned int v23; // r8d
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  struct DXGDEVICE *v29; // [rsp+80h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1E0h] BYREF
  _BYTE v31[8]; // [rsp+90h] [rbp-1D8h] BYREF
  _BYTE v32[16]; // [rsp+98h] [rbp-1D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp-1C0h] BYREF
  struct DXGDEVICESYNCOBJECT *v34; // [rsp+B0h] [rbp-1B8h] BYREF
  struct DXGADAPTERSYNCOBJECT *v35[2]; // [rsp+B8h] [rbp-1B0h] BYREF
  _BYTE v36[24]; // [rsp+C8h] [rbp-1A0h] BYREF
  HANDLE Handle[22]; // [rsp+E0h] [rbp-188h] BYREF
  _BYTE v38[160]; // [rsp+190h] [rbp-D8h] BYREF

  v35[1] = a1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1607;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  memset(Handle, 0, sizeof(Handle));
  RtlCopyFromUser(Handle, a1, 0xB0uLL);
  HIDWORD(Handle[2]) = 0;
  if ( ((__int64)Handle[2] & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1640;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&Handle[18], 32LL) )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1647;
    return v3;
  }
  if ( ((__int64)Handle[2] & 0x10) != 0 || ((__int64)Handle[2] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1653;
  }
  v29 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v31,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v29);
  v5 = (struct ADAPTER_RENDER **)v29;
  if ( !v29 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1661;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_29:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v31);
    return v3;
  }
  v29 = 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
    (struct DXGDEVICE *)v5);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v5, 0, v6, 0);
  v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(3LL, v5, v7);
    WdLogGlobalForLineNumber = 1691;
LABEL_15:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP((void **)&v29);
    v3 = v8;
    goto LABEL_29;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) && (*(_DWORD *)(*((_QWORD *)v5[2] + 2) + 2504LL) & 0x800) == 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1701;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot open native fence on an DXGADAPTER (0x%I64x) that does not support native GPU fences",
      *((_QWORD *)v5[2] + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP((void **)&v29);
    v3 = -1073741811;
    goto LABEL_29;
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v8 = v9;
  v10 = -1073741788;
  if ( v9 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1723;
LABEL_28:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP((void **)&v29);
    v3 = v10;
    goto LABEL_29;
  }
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v9);
    WdLogGlobalForLineNumber = 1729;
    goto LABEL_15;
  }
  v11 = (DXGSYNCOBJECT **)Object;
  v29 = (struct DXGDEVICE *)Object;
  v12 = *(_DWORD *)(*(_QWORD *)Object + 420LL);
  if ( v12 != 7 && v12 != 5 )
  {
    v3 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)Object, Handle[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1742;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP((void **)&v29);
    goto LABEL_29;
  }
  LODWORD(Handle[2]) = (__int64)Handle[2] & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v35[0] = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
  v34 = 0LL;
  v10 = DXGSYNCOBJECT::Open(
          *v11,
          v5[2],
          (struct DXGDEVICE *)v5,
          &v34,
          (unsigned int *)&Handle[2] + 1,
          0LL,
          0LL,
          HIDWORD(Handle[1]),
          v35,
          1,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)Handle[2],
          0LL,
          (unsigned __int8 *)&Handle[10],
          *((_DWORD *)*v11 + 105) == 5,
          0,
          0);
  if ( v10 < 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36);
    goto LABEL_28;
  }
  Handle[3] = *((HANDLE *)v34 + 7);
  Handle[4] = *((HANDLE *)v34 + 6);
  Handle[5] = *((HANDLE *)v34 + 13);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36);
  if ( bTracingEnabled )
  {
    if ( v35[0] ? *((_QWORD *)v35[0] + 4) : 0LL )
    {
      v17 = v35[0] ? *((_QWORD *)v35[0] + 4) : 0LL;
      v16 = *(_QWORD *)(v17 + 16);
    }
    else
    {
      v16 = 0LL;
    }
    v18 = v35[0] ? *((_QWORD *)v35[0] + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v16, &EventOpenSyncObject, v14, v18, HIDWORD(Handle[2]), v5, v16);
  }
  if ( (unsigned int)Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline() )
  {
    v19 = HIDWORD(Handle[2]);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v20 = (v19 >> 6) & 0xFFFFFF;
    v21 = v19 >> 30;
    if ( v20 < *((_DWORD *)Current + 74) )
    {
      v23 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v20 + 8);
      if ( v21 == ((v23 >> 5) & 3) && (v23 & 0x1F) != 0 )
      {
        v24 = 16LL * v20;
        if ( (*(_DWORD *)(*((_QWORD *)Current + 35) + v24 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(v24 + *((_QWORD *)Current + 35) + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
  RtlCopyToUser(a1, Handle, 0xB0uLL);
  if ( !(unsigned int)Feature_MSRC99180_58215914__private_IsEnabledNoReportingNoInline() )
  {
    v25 = HIDWORD(Handle[2]);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v26 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)Current + 74) )
    {
      v27 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v25 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
        && (*(_DWORD *)(v27 + 16 * v26 + 8) & 0x1F) != 0 )
      {
        v28 = 16 * ((v25 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v27 + v28 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)Current + 35) + v28 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP((void **)&v29);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v31);
  return (unsigned int)v10;
}
