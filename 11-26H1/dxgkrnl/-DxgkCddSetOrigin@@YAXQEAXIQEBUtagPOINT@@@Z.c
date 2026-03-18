/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1403EDD50
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x14005FB00 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402AD220 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v3; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 x; // r10
  __int64 y; // r11
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rbx
  struct tagRECT v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  char v25; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v26; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[144]; // [rsp+80h] [rbp-80h] BYREF

  v3 = a2;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 3014);
  v26 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v26, (unsigned __int64 *)&v22, 0);
  if ( PairingAdapters < 0 )
  {
    v21 = PairingAdapters;
    WdLogSingleEntry3(2LL, a1, v3, PairingAdapters);
    WdLogGlobalForLineNumber = 2461;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddSetOrigin (ntSt"
                "atus = 0x%I64x).",
      (__int64)a1,
      v3,
      v21,
      0LL,
      0LL);
  }
  else
  {
    v7 = (ADAPTER_DISPLAY **)v26;
    if ( !v26 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2466;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2466LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v27, 1LL);
    if ( v8 < 0 )
    {
      WdLogSingleEntry5(4LL, v8, v3, v7, a3->x, a3->y);
      WdLogGlobalForLineNumber = 2514;
    }
    else
    {
      if ( !v7[395] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2477;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2477LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v7[395], (unsigned int)v3, v9, v10);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      x = a3->x;
      y = a3->y;
      v14 = 4024 * v3;
      v15 = *((_QWORD *)v7[395] + 16);
      v22.left = a3->x;
      v22.top = y;
      v16 = *(int *)(4024 * v3 + v15 + 672);
      if ( (_DWORD)v16 == 2 || (_DWORD)v16 == 4 )
      {
        v19 = *(_DWORD *)(v14 + v15 + 648);
        v20 = *(_DWORD *)(v14 + v15 + 644);
        v22.right = x + v19;
        v22.bottom = y + v20;
      }
      else
      {
        v22.right = x + *(_DWORD *)(v14 + v15 + 644);
        v22.bottom = y + *(_DWORD *)(v14 + v15 + 648);
      }
      WdLogSingleEntry5(4LL, v3, v7, x, y, v16);
      v17 = v7[395];
      WdLogGlobalForLineNumber = 2506;
      ADAPTER_DISPLAY::SetContentRect(v17, v3, &v22);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  }
}
