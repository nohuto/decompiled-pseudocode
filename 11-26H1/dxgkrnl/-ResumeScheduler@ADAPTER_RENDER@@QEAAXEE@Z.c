/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14030EB8C
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x14030FA84 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  int v10; // eax

  v4 = (_QWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 189) )
  {
    if ( *(_QWORD *)(*v4 + 3160LL) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 1024LL))(*((_QWORD *)this + 93));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&ResumeSchedulerForVidPnSource);
    }
    *((_DWORD *)this + 189) = 0;
  }
  v7 = *((_QWORD *)this + 93);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 92) + 8LL);
    v9 = *(__int64 (__fastcall **)(__int64, __int64))(v8 + 792);
    LOBYTE(v8) = a3;
    v10 = v9(v7, v8);
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 19LL, *v4, v10, 0LL);
      WdLogGlobalForLineNumber = 3217;
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, a2, a3);
  }
}
