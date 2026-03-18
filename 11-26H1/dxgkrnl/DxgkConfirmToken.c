/*
 * XREFs of DxgkConfirmToken @ 0x1403F6A60
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAJIII@Z @ 0x14005BE70 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAJIII@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkConfirmToken(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v10; // rcx
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  char v18; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v8 = (unsigned int)a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2095;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2095);
  v19 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v10);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v20, v8, Current, &v19, 1);
  v12 = v19;
  if ( v19 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v19, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(3LL, v12, v13);
      WdLogGlobalForLineNumber = 2518;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v20, v15);
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 396) + 736LL)
                                                                                          + 8LL)
                                                                              + 408LL))(
      *(_QWORD *)(*((_QWORD *)v12 + 396) + 744LL),
      a2,
      a3,
      a4,
      a5,
      a6);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
  }
  else
  {
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 2506;
  }
  if ( v20[0] )
    DXGADAPTER::ReleaseReference(v20[0]);
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
  }
}
