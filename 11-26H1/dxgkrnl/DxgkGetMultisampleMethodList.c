/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1401D37F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x14025A284 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(void *Src)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // r15
  __int64 CurrentProcess; // rax
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _D3DDDI_MULTISAMPLINGMETHOD *v8; // r14
  unsigned __int64 v9; // rax
  struct DXGADAPTER *v10; // rsi
  int PairingAdapters; // eax
  struct DXGADAPTER *v12; // rsi
  int v13; // eax
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  unsigned int v17; // esi
  __int64 v18; // rcx
  struct DXGADAPTER *v20; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v21[4]; // [rsp+58h] [rbp-130h] BYREF
  enum _D3DDDIFORMAT v22[4]; // [rsp+68h] [rbp-120h]
  unsigned __int64 v23; // [rsp+78h] [rbp-110h]
  unsigned __int64 v24; // [rsp+80h] [rbp-108h] BYREF
  int v25; // [rsp+88h] [rbp-100h]
  unsigned int v26; // [rsp+8Ch] [rbp-FCh]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v27; // [rsp+90h] [rbp-F8h]
  int v28; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-E8h]
  char v30; // [rsp+A8h] [rbp-E0h]
  struct _KTHREAD **v31; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v32; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v33[2]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v34[144]; // [rsp+D0h] [rbp-B8h] BYREF

  v24 = (unsigned __int64)Src;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v31 = Current;
  if ( Current )
  {
    *(_OWORD *)v21 = 0LL;
    *(_OWORD *)v22 = 0LL;
    v23 = 0LL;
    v5 = 0;
    v8 = 0LL;
    v27 = 0LL;
    RtlCopyFromUser(v21, Src, 0x28uLL);
    if ( *(_QWORD *)&v22[2] && (_DWORD)v23 )
    {
      v9 = 8LL * (unsigned int)v23;
      if ( !is_mul_ok((unsigned int)v23, 8uLL) )
        v9 = -1LL;
      v8 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v9, 0x4B677844u, 256LL);
      v27 = v8;
      if ( !v8 )
      {
        v5 = -1073741801;
        WdLogSingleEntry4(6LL, -1073741801LL, v21[0], v21[1], (unsigned int)v23);
        WdLogGlobalForLineNumber = 6268;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"0x%I64x 0x%I64x 0x%I64x fails to allocate array of 0x%I64d D3DDDI_MULTISAMPLINGMETHOD",
          -1073741801LL,
          v21[0],
          v21[1],
          (unsigned int)v23,
          0LL);
        v25 = -1073741801;
      }
    }
    if ( v5 >= 0 )
    {
      v20 = 0LL;
      DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v33, v21[0], Current, &v20, 1);
      v24 = 0LL;
      v10 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v10, v21[1], 0LL, 0LL, &v20, &v32, 0);
        v5 = PairingAdapters;
        if ( PairingAdapters < 0 )
        {
          WdLogSingleEntry3(3LL, v10, v21[1], PairingAdapters);
          WdLogGlobalForLineNumber = 6367;
        }
        else
        {
          v12 = v20;
          if ( !v20 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6300;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 6300LL, 0LL, 0LL, 0LL, 0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v12, 0LL);
          DXGADAPTER::ReleaseReference(v12);
          v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
          v5 = v13;
          if ( v13 < 0 )
          {
            WdLogSingleEntry4(7LL, v13, Current, v21[0], v12);
            WdLogGlobalForLineNumber = 6359;
          }
          else if ( *(_DWORD *)(*((_QWORD *)v12 + 395) + 96LL) > v21[1] )
          {
            if ( *((_QWORD *)v12 + 396) )
            {
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v12,
                                                              v21[1],
                                                              v21[2],
                                                              v21[3],
                                                              v22[0],
                                                              (unsigned int)v23,
                                                              v8,
                                                              &v24);
              v5 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                WdLogSingleEntry4(3LL, (unsigned int)v23, v21[1], v12, MultisamplingMethodSetFromClientVidPnSource);
                WdLogGlobalForLineNumber = 6345;
                WdLogSingleEntry5(3LL, v21[1], v12, v21[2], v21[3], v22[0]);
                WdLogGlobalForLineNumber = 6352;
              }
            }
            else
            {
              v5 = -1073741637;
              WdLogSingleEntry2(7LL, v12, -1073741637LL);
              WdLogGlobalForLineNumber = 6324;
            }
          }
          else
          {
            v5 = -1073741811;
            WdLogSingleEntry3(3LL, -1073741811LL, v12, v21[1]);
            WdLogGlobalForLineNumber = 6316;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
        }
      }
      else
      {
        v5 = -1073741811;
        WdLogSingleEntry3(3LL, -1073741811LL, Current, v21[0]);
        WdLogGlobalForLineNumber = 6373;
      }
      if ( v5 >= 0 )
      {
        *((_DWORD *)Src + 8) = v24 >> 3;
        if ( v8 )
        {
          v16 = *((_QWORD *)Src + 3);
          v17 = 0;
          v26 = 0;
          while ( v17 < (unsigned int)v23 )
          {
            RtlCopyToUser((void *)(v16 + 12LL * v17), &v8[v17], 8uLL);
            v26 = ++v17;
          }
        }
      }
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v33, v15);
    }
    if ( v8 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6249;
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v7,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return (unsigned int)v5;
}
