/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401FC540
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401FC2B8 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgkExtractBundleObjectInternal @ 0x1401EAE74 (DxgkExtractBundleObjectInternal.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CC54 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        struct _KPROCESS **this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        struct _EPROCESS *a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v10; // rcx
  __int64 result; // rax
  struct DXGFASTMUTEX *v12; // rax
  DXGSHAREDVMOBJECT *v13; // rax
  DXGSHAREDVMOBJECT *v14; // rsi
  struct _KPROCESS *v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  int v18; // edi
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v21; // [rsp+70h] [rbp-90h]
  void **v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-68h] BYREF
  char v26; // [rsp+C8h] [rbp-38h]
  _BYTE v27[64]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a3;
  v8 = a2;
  if ( !a2 || a3 - 1 > 0xF || !a4 )
  {
    WdLogSingleEntry4(3LL, a2, a3, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 572;
    return 3221225485LL;
  }
  CurrentProcess = PsGetCurrentProcess(this);
  v10 = this[3];
  if ( (struct _KPROCESS *)CurrentProcess != v10 && (unsigned __int8)PsGetProcessExitProcessCalled(v10) )
  {
    WdLogSingleEntry2(3LL, this[3], -1073741558LL);
    result = 3221225738LL;
    WdLogGlobalForLineNumber = 584;
    return result;
  }
  v12 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)this[1] + 48LL))(this[1]);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v12, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v13 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(struct _KPROCESS *, _QWORD, __int64))(*(_QWORD *)this[1] + 72LL))(
                               this[1],
                               (unsigned int)v8,
                               13LL);
  v14 = v13;
  if ( !v13 || *(_DWORD *)v13 != 16 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 597;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared object handle: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    return 3221225485LL;
  }
  DXGSHAREDVMOBJECT::AddReference(v13);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  v15 = this[3];
  v26 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v15);
  HIDWORD(v20) = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( (_DWORD)v6 )
  {
    v16 = v6;
    v17 = v27;
    while ( v16 )
    {
      *v17++ = 0x10000000;
      --v16;
    }
  }
  *(_QWORD *)&v20 = *((_QWORD *)v14 + 2);
  DWORD2(v20) = v6;
  v21 = v27;
  v22 = a4;
  v18 = DxgkExtractBundleObjectInternal(0LL, 0, a5, &v20);
  if ( v18 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 641;
  }
  DXGSHAREDVMOBJECT::ReleaseReference(v14);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return (unsigned int)v18;
}
