/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x140364B10
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140364738 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14002EB40 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x140365BB4 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140412BCC (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x14041433C (DxgkRemoveSessionViewForCurrentSession.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(CCD_TOPOLOGY *this, struct DXGPROCESS *a2, unsigned int a3)
{
  __int64 v5; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  unsigned int v12; // r14d
  char v13; // bl
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // r10
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  char v24; // [rsp+50h] [rbp-B0h]
  _BYTE v25[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v28[88]; // [rsp+B8h] [rbp-48h] BYREF

  v22 = a3;
  v5 = 340LL * a3;
  while ( 1 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v5 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                                             0);
    v7 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
        CddDeviceAndContextForCurrentSession);
      result = v7;
      WdLogGlobalForLineNumber = 3595;
      return result;
    }
    v8 = MEMORY[0x768];
    if ( !MEMORY[0x768] )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v23, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGPROCESS *)((char *)a2 + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, 0LL, 1, v9, 0);
    v10 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v26, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState(0LL) )
    {
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
          *((_QWORD *)this + 8),
          v10);
        WdLogGlobalForLineNumber = 3659;
      }
      else
      {
        v12 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v8 + 3160) + 96LL) )
        {
          v13 = 1;
          do
          {
            v14 = *((_QWORD *)this + 8);
            v11 = (unsigned int)(1 << v12);
            v15 = *(_QWORD *)(v14 + 48);
            if ( ((unsigned int)v11 & *(_DWORD *)(v15 + v5 + 84)) != 0 )
            {
              v18 = v12 + 85 * v22;
              v19 = *(_DWORD *)(296LL * *(unsigned int *)(v15 + 4 * v18 + 8) + v14 + 248);
              if ( v19 < 0 )
              {
                *(_DWORD *)(v15 + 4 * v18 + 168) = v19;
                v13 = 0;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 164) |= v11;
                v20 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v8 + 3160), v12);
                LODWORD(v10) = v20;
                if ( v20 < 0 )
                {
                  WdLogSingleEntry4(
                    2LL,
                    v12,
                    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
                    v20);
                  WdLogGlobalForLineNumber = 3699;
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v5 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v12,
                  0);
              }
            }
            ++v12;
          }
          while ( v12 < *(_DWORD *)(*(_QWORD *)(v8 + 3160) + 96LL) );
          if ( !v13 )
            DmmDisableAllFailurePathsOnAdapter(
              v8,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 164),
              v15,
              0LL);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v28, v11);
      COREACCESS::~COREACCESS((COREACCESS *)v27, v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
      if ( v24 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v23 + 136));
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
      return (unsigned int)v10;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28, v11);
    COREACCESS::~COREACCESS((COREACCESS *)v27, v21);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
    if ( v24 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v23 + 136));
      KeLeaveCriticalRegion();
      v24 = 0;
    }
  }
  WdLogSingleEntry4(
    2LL,
    0LL,
    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5 + 4),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v5),
    -1073741811LL);
  WdLogGlobalForLineNumber = 3611;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)0x40, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(MEMORY[0x10], 0LL);
  return 3221225485LL;
}
