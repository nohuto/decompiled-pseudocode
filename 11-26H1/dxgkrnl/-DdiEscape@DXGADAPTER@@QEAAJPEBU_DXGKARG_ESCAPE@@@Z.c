/*
 * XREFs of ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1402F9A80
 * Callers:
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1403EE454 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140038650 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiEscape(DXGADAPTER *this, const struct _DXGKARG_ESCAPE *a2)
{
  struct DXGGLOBAL *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rdi
  int v8; // ebp
  __int64 v9; // r14
  __int64 PrivateDriverDataSize; // rcx
  unsigned int v11; // edx
  __int64 v12; // rcx
  KIRQL v14; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+58h] [rbp-80h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h]
  char v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5022);
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_BYTE *)Global + 1672)
    && (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)Global + 1668),
                          this) )
  {
    LODWORD(v9) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 1213);
    CurrentIrql = KeGetCurrentIrql();
    v6 = CurrentIrql;
    v7 = 0LL;
    if ( CurrentIrql < 2u
      && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
      && ((v7 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v7 = DxgThread) != 0LL)) )
    {
      v8 = *((_DWORD *)v7 + 12);
    }
    else
    {
      v8 = 0;
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19, this);
    v9 = (*((int (__fastcall **)(_QWORD, const struct _DXGKARG_ESCAPE *))this + 74))(*((_QWORD *)this + 36), a2);
    if ( v19[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v6 != KeGetCurrentIrql() )
    {
      v14 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v14);
      WdLogGlobalForLineNumber = 2538;
    }
    if ( v7 && *((_DWORD *)v7 + 12) != v8 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v8, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1213);
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize <= 4 )
      v11 = 0;
    else
      v11 = *(_DWORD *)a2->pPrivateDriverData;
    WdLogSingleEntry5(4LL, v9, *((_QWORD *)this + 36), a2->hDevice, PrivateDriverDataSize, v11);
    WdLogGlobalForLineNumber = 2545;
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == -1073741823 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 2553;
      }
      else if ( (_DWORD)v9 != -1073741811
             && (_DWORD)v9 != -1073741801
             && (_DWORD)v9 != -1073741795
             && (_DWORD)v9 != -1073741674 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2547;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGADAPTER::ReleaseDdiSync(this);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return (unsigned int)v9;
}
