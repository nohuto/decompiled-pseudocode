/*
 * XREFs of ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x14041D830
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401FC7C0 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     DxgkCreateBundleObjectInternal @ 0x14041DAC8 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // rdx
  int BundleObjectInternal; // ebx
  void *v15; // rsi
  __int64 v16; // rax
  DXGSHAREDVMOBJECT *v17; // rdi
  unsigned int v18; // eax
  _DWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  _QWORD v27[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[128]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v29[768]; // [rsp+150h] [rbp+50h] BYREF

  memset(v27, 0, sizeof(v27));
  memset(v29, 0, sizeof(v29));
  LODWORD(v27[0]) = a2;
  v20[1] = 0;
  v24 = 0;
  v27[1] = a3;
  memset(v28, 0, sizeof(v28));
  if ( a2 )
  {
    v10 = *((_QWORD *)this + 5);
    v11 = v28;
    v12 = &v29[8];
    v9 = a2;
    v13 = v29;
    do
    {
      *v11 = v13;
      v13 += 48;
      *((_DWORD *)v12 - 2) = 48;
      ++v11;
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 4) = 0;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 3) = v10;
      *((_QWORD *)v12 + 4) = 0LL;
      v12 += 48;
      --v9;
    }
    while ( v9 );
  }
  v27[2] = v28;
  LOBYTE(v9) = 1;
  v25 = *((_QWORD *)this + 4);
  v20[0] = 48;
  v27[4] = v20;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v26 = 0LL;
  LODWORD(v27[5]) = 0x10000000;
  BundleObjectInternal = DxgkCreateBundleObjectInternal(0, 0, v9, 0, v27, (__int64)a4);
  if ( BundleObjectInternal >= 0 )
  {
    v15 = (void *)v27[9];
    v16 = operator new(0x20uLL, 0x4B677844u, 256LL);
    v17 = (DXGSHAREDVMOBJECT *)v16;
    if ( v16 )
    {
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_DWORD *)(v16 + 24) = 1;
      *(_DWORD *)v16 = 16;
      *(_QWORD *)(v16 + 16) = v15;
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              v16,
              13LL);
      if ( v18 )
      {
        *a5 = v18;
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 375;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate NT shared object handle",
          375LL,
          0LL,
          0LL,
          0LL,
          0LL);
        BundleObjectInternal = -1073741801;
        DXGSHAREDVMOBJECT::ReleaseReference(v17);
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 364;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
        364LL,
        0LL,
        0LL,
        0LL,
        0LL);
      BundleObjectInternal = -1073741801;
      if ( v15 )
        ObCloseHandle(v15, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 348;
  }
  return (unsigned int)BundleObjectInternal;
}
