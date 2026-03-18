/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x14030A230
 * Callers:
 *     ADAPTER_RENDER_DdiBuildPagingBuffer @ 0x14003DB70 (ADAPTER_RENDER_DdiBuildPagingBuffer.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x14030A6A0 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(ADAPTER_RENDER *this, struct _DXGKARG_BUILDPAGINGBUFFER *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  ReferenceCounted *v6; // rbx
  int v7; // edi
  __int64 v8; // rbp
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // rcx
  char *v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  KIRQL v15; // al
  ReferenceCounted *v16; // [rsp+50h] [rbp-88h] BYREF
  int v17; // [rsp+58h] [rbp-80h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h]
  char v19; // [rsp+68h] [rbp-70h]
  char v20[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 5016);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_25;
  v16 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v16) < 0 )
    goto LABEL_25;
  v6 = v16;
  if ( v16 )
  {
LABEL_8:
    v7 = *((_DWORD *)v6 + 12);
    goto LABEL_9;
  }
  v12 = (char *)ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
  v6 = (ReferenceCounted *)v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 3) = 0LL;
    *(_QWORD *)v12 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *((_DWORD *)v12 + 2) = 1;
    *(_QWORD *)v12 = &DXGTHREAD::`vftable';
    *((_QWORD *)v12 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
    strcpy(v12 + 32, "DxgT");
    *((_QWORD *)v12 + 6) = 0LL;
    *((_DWORD *)v12 + 14) = -1;
    *((_QWORD *)v12 + 2) = KeGetCurrentThread();
    v13 = PsTlsSetValue(g_DxgkThreadTlsId, v12);
    v14 = v13;
    if ( v13 >= 0 )
    {
      ++dword_140168C48;
      ++dword_140168C40;
      goto LABEL_24;
    }
    ReferenceCounted::Release(v6);
    WdLogSingleEntry2(2LL, v6, v14);
    WdLogGlobalForLineNumber = 531;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
      (__int64)v6,
      v14,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 514;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
      (__int64)KeGetCurrentThread(),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = 0LL;
LABEL_24:
  v16 = v6;
  if ( v6 )
    goto LABEL_8;
LABEL_25:
  v7 = 0;
LABEL_9:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v20,
    *((struct DXGADAPTER **)this + 2));
  v8 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 544LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v15);
    WdLogGlobalForLineNumber = 2071;
  }
  if ( v6 )
  {
    v9 = (ADAPTER_RENDER *)*((int *)v6 + 12);
    if ( (_DWORD)v9 != v7 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v6 + 12), v7, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4852LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v9, v8, a2);
  if ( (_DWORD)v8 && (_DWORD)v8 != -1071775743 && (_DWORD)v8 != -1071775486 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2076;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
