/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1403AF3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400305C0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400306B0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140042470 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1403B01CC (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(DXGPROCESS **a1, const struct _DXGKWIN32KENG_INTERFACE_HEADER *const a2, char a3)
{
  DXGPROCESS *v6; // rbx
  __int64 v7; // rcx
  int v9; // esi
  DXGPROCESS *v10; // rcx
  const struct _DXGKWIN32KENG_INTERFACE *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[256]; // [rsp+80h] [rbp-80h] BYREF
  DXGPROCESS *v21; // [rsp+1B8h] [rbp+B8h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2000);
  if ( a3 != 1 )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v6 = *a1;
    if ( *a1 )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
      *((_DWORD *)v6 + 102) |= 0x800u;
      DXGPROCESS::AcquireReference(v6);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
      DXGPROCESS::DestroyDxgProcess(v6);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      DXGPROCESS::ReleaseReference(v6);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
    }
    *a1 = 0LL;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  if ( *(_WORD *)a2 )
  {
    if ( *(_WORD *)a2 == 480 && *((_WORD *)a2 + 1) == 12 )
      goto LABEL_15;
  }
  else if ( !*((_WORD *)a2 + 1) )
  {
LABEL_15:
    v21 = 0LL;
    v9 = DXGPROCESS::CreateDxgProcess(&v21, 0LL, 0LL, 0, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v21;
      v11 = (const struct _DXGKWIN32KENG_INTERFACE *)&gDxgkWin32kEngInterface;
      *a1 = v21;
      if ( *(_WORD *)a2 )
        v11 = a2;
      DXGPROCESS::SetWin32kInterface(v10, v11);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return (unsigned int)v9;
  }
  WdLogSingleEntry4(1LL, *((unsigned __int16 *)a2 + 1), *(unsigned __int16 *)a2, 12LL, 480LL);
  v15 = *(unsigned __int16 *)a2;
  v14 = *((unsigned __int16 *)a2 + 1);
  WdLogGlobalForLineNumber = 349;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Interface mismatch between Win32k (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
    v14,
    v15,
    12LL,
    480LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
