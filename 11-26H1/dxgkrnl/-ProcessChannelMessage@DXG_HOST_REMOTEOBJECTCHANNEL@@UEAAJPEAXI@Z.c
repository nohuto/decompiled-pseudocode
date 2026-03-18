/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401FC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x140046930 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14004A5A0 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline @ 0x140080C64 (Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1401FC214 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CC54 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x14041D830 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rdx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // r8d
  struct _KTHREAD *v19; // rcx
  _DWORD *v20; // r14
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // r10d
  struct _KTHREAD *v24; // rcx
  DXGSHAREDVMOBJECT *v25; // r13
  unsigned int v26; // edx
  DXGPROCESS *v27; // r13
  __int64 v28; // rcx
  struct _KPROCESS *v29; // rdx
  unsigned int i; // ebx
  DXGSHAREDVMOBJECT *v31; // rcx
  unsigned int v32; // [rsp+50h] [rbp-B0h]
  _QWORD v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD **ProcessDxgProcess; // [rsp+68h] [rbp-98h]
  DXGSHAREDVMOBJECT *v35; // [rsp+70h] [rbp-90h]
  _BYTE v36[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[24]; // [rsp+88h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  char v39; // [rsp+D0h] [rbp-30h]
  struct _KAPC_STATE v40; // [rsp+D8h] [rbp-28h] BYREF
  char v41; // [rsp+108h] [rbp+8h]
  DXGSHAREDVMOBJECT *v42[16]; // [rsp+110h] [rbp+10h] BYREF
  void *v43[16]; // [rsp+190h] [rbp+90h] BYREF
  int v44; // [rsp+210h] [rbp+110h] BYREF
  int BundleObjectCallback; // [rsp+214h] [rbp+114h]
  unsigned int v46[2]; // [rsp+218h] [rbp+118h] BYREF

  if ( a3 < 0xC )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 35;
    return v5;
  }
  v7 = (int)a2[2];
  v8 = a2[2] - 1;
  if ( !v8 )
  {
    if ( a3 != 88 )
    {
      v5 = -1073741811;
      WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
      WdLogGlobalForLineNumber = 50;
      return v5;
    }
    CurrentProcess = PsGetCurrentProcess(v7);
    v13 = *((_QWORD *)this + 3);
    if ( CurrentProcess != v13 && (unsigned __int8)PsGetProcessExitProcessCalled(v13) )
    {
      v5 = -1073741558;
      WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
      WdLogGlobalForLineNumber = 60;
      return v5;
    }
    v14 = a2[1];
    v44 = 1869901170;
    *(_QWORD *)v46 = 2LL;
    BundleObjectCallback = v14;
    memset(v43, 0, sizeof(v43));
    v15 = a2[4];
    if ( v15 > 0x10 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 74;
      return v5;
    }
    v16 = a2[5];
    if ( v16 >= 2 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 81;
      return v5;
    }
    ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    memset(v42, 0, sizeof(v42));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v36);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v37, ProcessDxgProcess);
    v17 = (a2[3] >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)ProcessDxgProcess + 74) )
    {
      v18 = *((_DWORD *)ProcessDxgProcess[35] + 4 * v17 + 2);
      if ( ((a2[3] >> 25) & 0x60) == (*((_BYTE *)ProcessDxgProcess[35] + 16 * v17 + 8) & 0x60)
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0 )
      {
        v19 = ProcessDxgProcess[35];
        if ( (*((_BYTE *)v19 + 16 * v17 + 8) & 0x1F) == 0xC )
        {
          v20 = (_DWORD *)*((_QWORD *)v19 + 2 * v17);
          if ( v20 )
          {
            DXGPROCESS::AcquireReference((DXGPROCESS *)v20);
            v27 = (DXGPROCESS *)v20;
            if ( (a2[5] & 1) != 0 )
            {
              v21 = 0;
              v32 = 0;
              if ( a2[4] )
              {
                while ( 1 )
                {
                  v33[0] = v27;
                  v22 = (a2[v21 + 6] >> 6) & 0xFFFFFF;
                  if ( v22 >= *((_DWORD *)ProcessDxgProcess + 74) )
                    break;
                  v23 = *((_DWORD *)ProcessDxgProcess[35] + 4 * v22 + 2);
                  if ( ((a2[v21 + 6] >> 25) & 0x60) != (v23 & 0x60) || (v23 & 0x2000) != 0 || (v23 & 0x1F) == 0 )
                    break;
                  v24 = ProcessDxgProcess[35];
                  if ( (*((_BYTE *)v24 + 16 * v22 + 8) & 0x1F) != 0xD )
                  {
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 318;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Handle type mismatch",
                      318LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v21 = v32;
                    break;
                  }
                  v35 = (DXGSHAREDVMOBJECT *)*((_QWORD *)v24 + 2 * v22);
                  if ( !v35 )
                    break;
                  v25 = v35;
                  if ( (unsigned int)Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline() )
                  {
                    DXGSHAREDVMOBJECT::AddReference(v35);
                    v26 = v32;
                    v42[v32] = v35;
                  }
                  else
                  {
                    v26 = v32;
                  }
                  v43[v26] = (void *)*((_QWORD *)v25 + 1);
                  v28 = v26;
                  v21 = v26 + 1;
                  v32 = v21;
                  a2[v28 + 6] = *(_DWORD *)v25;
                  if ( v21 >= a2[4] )
                    goto LABEL_47;
                  v27 = (DXGPROCESS *)v33[0];
                }
                WdLogSingleEntry2(3LL, a2[v21 + 6], -1073741811LL);
                WdLogGlobalForLineNumber = 142;
                BundleObjectCallback = -1073741811;
                DXGPROCESS::ReleaseReference(v27);
                v20 = 0LL;
              }
            }
            goto LABEL_47;
          }
LABEL_29:
          WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
          WdLogGlobalForLineNumber = 110;
          BundleObjectCallback = -1073741811;
LABEL_47:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
          if ( v20 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)(v20 + 26), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
            if ( (v20[102] & 0x100) != 0 && v20[10] == 1 )
            {
              v29 = (struct _KPROCESS *)*((_QWORD *)this + 3);
              v41 = 0;
              CPROCESSATTACHHELPER::Attach(&v40, v29);
              CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                (CEnsureCurrentDxgProcess *)&ApcState,
                (struct DXGPROCESS *)v20,
                0);
              if ( ApcState.ApcListHead[0].Blink )
              {
                BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                         this,
                                         a2[4],
                                         a2 + 6,
                                         v43,
                                         &v46[1]);
              }
              else
              {
                WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                WdLogGlobalForLineNumber = 175;
                BundleObjectCallback = -1073741811;
              }
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&ApcState);
              CPROCESSATTACHHELPER::Detach(&v40);
            }
            else
            {
              WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
              WdLogGlobalForLineNumber = 183;
              BundleObjectCallback = -1073741811;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
          }
          if ( (unsigned int)Feature_MSRC99074_58170326__private_IsEnabledNoReportingNoInline() )
          {
            for ( i = 0; i < a2[4]; ++i )
            {
              v31 = v42[i];
              if ( v31 )
              {
                DXGSHAREDVMOBJECT::ReleaseReference(v31);
                v42[i] = 0LL;
              }
            }
          }
          if ( v20 )
          {
            DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v20);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
          }
          goto LABEL_63;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v20 = 0LL;
    goto LABEL_29;
  }
  if ( v8 != 2 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 250;
    return v5;
  }
  if ( a3 != 16 )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 218;
    return v5;
  }
  v9 = PsGetCurrentProcess(v7);
  v10 = *((_QWORD *)this + 3);
  if ( v9 != v10 && (unsigned __int8)PsGetProcessExitProcessCalled(v10) )
  {
    v5 = -1073741558;
    WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
    WdLogGlobalForLineNumber = 228;
    return v5;
  }
  v11 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  *(_QWORD *)v46 = 4LL;
  v44 = 1869901170;
  v39 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v11);
  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  CPROCESSATTACHHELPER::Detach(&ApcState);
LABEL_63:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), &v44, 16LL);
  return 0LL;
}
