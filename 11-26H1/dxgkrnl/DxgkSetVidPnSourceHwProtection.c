/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1401B8D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x14000F1D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(void *Src)
{
  struct _KTHREAD **Current; // rsi
  struct DXGADAPTER *v3; // rbx
  unsigned __int64 v4; // rdx
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-E0h]
  char v21; // [rsp+60h] [rbp-D8h]
  DXGADAPTER *v22[2]; // [rsp+68h] [rbp-D0h] BYREF
  struct DXGADAPTER *v23; // [rsp+78h] [rbp-C0h] BYREF
  unsigned int v24[2]; // [rsp+80h] [rbp-B8h] BYREF
  int v25; // [rsp+88h] [rbp-B0h]
  _BYTE v26[144]; // [rsp+90h] [rbp-A8h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11380;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 11380LL, 0LL, 0LL, 0LL, 0LL);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  *(_QWORD *)v24 = 0LL;
  v25 = 0;
  RtlCopyFromUser(v24, Src, 0xCuLL);
  v23 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v22, v24[0], Current, &v23, 1);
  v3 = v23;
  if ( !v23 )
  {
    WdLogSingleEntry2(2LL, Current, v24[0]);
    WdLogGlobalForLineNumber = 11404;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v24[0],
      0LL,
      0LL,
      0LL);
LABEL_34:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v4);
    goto LABEL_35;
  }
  if ( !*((_QWORD *)v23 + 395) )
  {
    WdLogSingleEntry2(3LL, v23, -1073741811LL);
    WdLogGlobalForLineNumber = 11413;
    goto LABEL_34;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v23, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v26, (unsigned int)(v5 + 1));
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v24[1] >= *(_DWORD *)(*((_QWORD *)v3 + 395) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v24[1], -1073741811LL);
      WdLogGlobalForLineNumber = 11433;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      goto LABEL_34;
    }
    if ( (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 )
    {
      *(_BYTE *)(4024LL * v24[1] + *(_QWORD *)(*((_QWORD *)v3 + 395) + 128LL) + 1160) = v25 != 0;
      v13 = *((_QWORD *)v3 + 395);
      if ( v25 )
      {
        *(_BYTE *)(v13 + 476) = 1;
      }
      else
      {
        *(_BYTE *)(v13 + 476) = 0;
        v14 = 0;
        v15 = *((_QWORD *)v3 + 395);
        while ( v14 < *(_DWORD *)(v15 + 96) )
        {
          if ( *(_BYTE *)(4024LL * v14 + *(_QWORD *)(v15 + 128) + 1160) )
          {
            *(_BYTE *)(v15 + 476) = 1;
            break;
          }
          ++v14;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v16);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11440;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v11);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
      return 3221225506LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11424;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return (unsigned int)v7;
  }
}
