/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402B86A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x14005D500 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct _KTHREAD **v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGDEVICE **v15; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rbx
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // r14d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  struct DXGCONTEXT *v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGHWQUEUE *v27; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v31[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v33[88]; // [rsp+E8h] [rbp-18h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = 0;
  v10 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 4056;
    v13 = PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v13,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v26[0] = 0LL;
  v27 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, a1, Current, v26, 0, 1);
  v15 = (struct DXGDEVICE **)v26[0];
  if ( v26[0] )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26, a2, v10, &v27, 0, 1);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGGLOBAL *)((char *)Global + 1616), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v17 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 187);
    v18 = DXGGLOBAL::GetGlobal();
    if ( v17 || *((_DWORD *)v18 + 372) != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 401) != 4 )
      {
        v19 = (__int64)v15[2];
        v20 = *(_QWORD *)(v19 + 1896);
        if ( v20 == *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v15[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v19, 1, v21, 0);
          v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
          v23 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry2(4LL, v22, v19);
            WdLogGlobalForLineNumber = 4106;
            COREACCESS::~COREACCESS((COREACCESS *)v33, v24);
            COREACCESS::~COREACCESS((COREACCESS *)v32, v25);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
            v9 = v23;
            goto LABEL_15;
          }
          if ( !*(_BYTE *)(v19 + 1952) )
          {
            VIDSCH_EXPORT::VidSchControlVSyncDevice(
              *(_QWORD *)(*(_QWORD *)(v20 + 3168) + 736LL),
              *(_QWORD *)(v19 + 800),
              3LL,
              1,
              0xFFFFFFFD);
            *(_BYTE *)(v19 + 1952) = 1;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
        }
      }
      v9 = PresentCddShadowBuffer((struct DXGCONTEXT *)v15, v27, a3);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
      goto LABEL_15;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v26);
    v9 = -1073741823;
  }
LABEL_15:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
  return v9;
}
