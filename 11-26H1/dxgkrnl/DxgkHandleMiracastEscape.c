/*
 * XREFs of DxgkHandleMiracastEscape @ 0x14042CB5C
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x140087D1C (DpiMiracastGetDeviceContextFromLuid.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x14024C798 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024C928 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x14024CDAC (DpiMiracastHandleStopSessionDone.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(unsigned int a1, _QWORD *a2)
{
  int v3; // r14d
  _DWORD *Pool2; // r12
  char v5; // r13
  __int64 *DeviceContextFromLuid; // rax
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r8
  void *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  struct _KEVENT *v23; // r9
  void *v24; // rcx
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  char v27; // [rsp+40h] [rbp-B8h]
  char v28; // [rsp+42h] [rbp-B6h]
  char v29; // [rsp+43h] [rbp-B5h]
  PVOID P; // [rsp+48h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A0h]
  PVOID Object[4]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v33[4]; // [rsp+80h] [rbp-78h] BYREF

  Object[2] = a2;
  v3 = 0;
  v31 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v5 = 0;
  v27 = 0;
  v29 = 0;
  v28 = 0;
  if ( a1 < 0x38 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4183;
    return 3221225507LL;
  }
  *((_DWORD *)a2 + 12) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a2, 0);
  v9 = DeviceContextFromLuid;
  Object[1] = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4212;
    return 3221225485LL;
  }
  v10 = DeviceContextFromLuid[13];
  if ( PsGetCurrentProcess(v8) == v10 )
  {
    v13 = *((_DWORD *)a2 + 4);
    if ( v13 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(257LL, v13, 1953656900LL);
      if ( !Pool2 )
      {
        v3 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 4252;
        goto LABEL_7;
      }
    }
    v14 = *((_DWORD *)a2 + 8);
    if ( v14 )
    {
      v12 = (void *)ExAllocatePool2(257LL, v14, 1953656900LL);
      P = v12;
      if ( !v12 )
      {
        v3 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 4270;
        goto LABEL_61;
      }
    }
    v15 = *((_DWORD *)a2 + 4);
    if ( v15 )
    {
      ProbeForRead((volatile void *)a2[3], v15, 1u);
      memmove(Pool2, (const void *)a2[3], *((unsigned int *)a2 + 4));
    }
    v16 = *((_DWORD *)a2 + 8);
    if ( v16 )
      ProbeForWrite((volatile void *)a2[5], v16, 1u);
    if ( (a2[1] & 6) != 0 )
    {
      AcquireMiniportListMutex();
      v5 = 1;
      v17 = v9[54];
      if ( !v17 )
      {
        v3 = -1073741275;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4332;
LABEL_21:
        v12 = P;
        goto LABEL_61;
      }
      v18 = *(_QWORD *)(v17 + 64);
      v31 = v18;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v18 + 484) )
        DpiCheckForOutstandingD3Requests(v18);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 168), 1u);
      v27 = 1;
      v19 = *(_DWORD *)(v18 + 236);
      if ( v19 != 2 && (*(_DWORD *)(v18 + 240) != 2 || ((v19 - 3) & 0xFFFFFFFC) != 0 || v19 == 4) )
      {
        v3 = -1073741130;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4366;
        goto LABEL_21;
      }
      if ( (a2[1] & 4) != 0 )
      {
        v3 = DpiAcquireCoreSyncAccessSafe(v9[54], *((_BYTE *)a2 + 12));
        if ( v3 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4390;
          goto LABEL_21;
        }
        v29 = 1;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( (a2[1] & 1) != 0 )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v9 + 4);
      v9[11] = (__int64)KeGetCurrentThread();
      v28 = 1;
    }
    v20 = *((_DWORD *)a2 + 2);
    switch ( v20 )
    {
      case 4:
        v3 = DpiMiracastDdiMiracastIoControl(
               v18,
               v9[56],
               *((unsigned int *)a2 + 4),
               (__int64)Pool2,
               *((_DWORD *)a2 + 8),
               (__int64)P,
               (_DWORD *)a2 + 12);
        break;
      case 8:
        if ( *((_DWORD *)a2 + 4) >= 0x350u )
        {
          DpiMiracastHandleStartSessionDone((char *)v9, (__int64)Pool2, v11);
        }
        else
        {
          v3 = -1073741811;
          WdLogSingleEntry2(2LL, 8LL, -1073741811LL);
          WdLogGlobalForLineNumber = 4442;
        }
        break;
      case 16:
        if ( *((_DWORD *)a2 + 4) >= 0x350u )
        {
          DpiMiracastHandleStopSessionDone((char *)v9, (__int64)Pool2, v11);
        }
        else
        {
          v3 = -1073741811;
          WdLogSingleEntry2(2LL, 16LL, -1073741811LL);
          WdLogGlobalForLineNumber = 4468;
        }
        break;
      case 24:
        v23 = 0LL;
        if ( *((_DWORD *)a2 + 4) >= 0x18u )
        {
          v24 = (void *)*((_QWORD *)Pool2 + 1);
          if ( v24 )
          {
            Object[0] = 0LL;
            v25 = ObReferenceObjectByHandle(v24, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
            v23 = (struct _KEVENT *)Object[0];
            v3 = v25;
            if ( v25 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 4530;
              v23 = 0LL;
            }
          }
          DpiMiracastStopMiracastSessionSync((char *)v9, 0, 0LL, v23, Pool2[4], *Pool2);
        }
        else
        {
          v3 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4497;
        }
        break;
      case 32:
        memset(v33, 0, sizeof(v33));
        *((_BYTE *)v9 + 591) = 1;
        if ( *((_DWORD *)a2 + 4) >= 0x404u )
        {
          *((_BYTE *)Pool2 + 1023) = 0;
          v22 = 0;
          LOBYTE(v21) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v21) )
          {
            DbgPrintEx(0x65u, 0, (PCSTR)Pool2);
            __debugbreak();
            v22 = 1;
          }
          v33[0] = 0x4000000006uLL;
          memset(&v33[1], 0, 28);
          LODWORD(v33[3]) = 74;
          DWORD1(v33[3]) = Pool2[256];
          *((_QWORD *)&v33[3] + 1) = v22;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, 0x200000000LL);
        }
        else
        {
          v3 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4578;
        }
        break;
      default:
        v3 = -1073741637;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4629;
        break;
    }
    v27 = v5;
    goto LABEL_21;
  }
  v3 = -1073741790;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 4231;
LABEL_7:
  v12 = 0LL;
LABEL_61:
  if ( v3 >= 0 )
  {
    v26 = *((_DWORD *)a2 + 12);
    if ( *((_DWORD *)a2 + 8) >= v26 )
    {
      if ( v26 )
        memmove((void *)a2[5], v12, *((unsigned int *)a2 + 12));
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4652;
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
  {
    v9[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v9 + 4);
  }
  if ( v29 )
    DpiReleaseCoreSyncAccessSafe(v9[54], *((_BYTE *)a2 + 12));
  if ( v27 )
  {
    if ( *(_BYTE *)(v31 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v31 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v31 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    ReleaseMiniportListMutex();
  DpiMiracastReleaseMiracastDeviceContext((int *)v9, (unsigned int)v9);
  return (unsigned int)v3;
}
