/*
 * XREFs of LkmdTelCreateReport @ 0x1408B1AA4
 * Callers:
 *     WheapReportLiveDump @ 0x14084FACC (WheapReportLiveDump.c)
 * Callees:
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlCaptureContext @ 0x140536E40 (RtlCaptureContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     LkmdTelpFreeMem @ 0x1408B1DA0 (LkmdTelpFreeMem.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall LkmdTelCreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *PoolWithTag; // rbx
  PVOID v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  _CONTEXT ContextRecord; // [rsp+58h] [rbp-B0h] BYREF

  memset_0(&ContextRecord, 0, sizeof(ContextRecord));
  v16 = 0LL;
  LODWORD(v15) = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x88uLL, 0x74614454u);
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40000uLL, 0x74614454u);
    *PoolWithTag = v9;
    if ( v9 && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)PoolWithTag + 52, 0x20uLL, L"%ws", L"WHEA") >= 0 )
    {
      LODWORD(v15) = 1;
      v10 = WerLiveKernelCreateReport(PoolWithTag + 13, &v15, &v16);
      if ( v10 >= 0 )
      {
        if ( (_DWORD)v15 )
        {
          PoolWithTag[12] = v16;
          RtlCaptureContext(&ContextRecord);
          v14 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, a3, a4, a5, a6, *PoolWithTag);
          if ( v14 )
          {
            *((_DWORD *)PoolWithTag + 2) = v14;
            return PoolWithTag;
          }
        }
        else
        {
          DbgPrintEx(5u, 1u, "LKMDTEL: WerPolicy is WerLiveKernelPolicyNoDump, no dump is allowed.\n");
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "LKMDTEL: WerLiveKernelCreateReport failed with status 0x%X\n", v10);
      }
    }
    if ( *PoolWithTag )
      LkmdTelpFreeMem(*PoolWithTag);
    LkmdTelpFreeMem(PoolWithTag);
    PoolWithTag = 0LL;
  }
  if ( v16 )
  {
    v11 = WerLiveKernelCancelReport();
    if ( v11 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v11);
    v12 = WerLiveKernelCloseHandle(v16);
    if ( v12 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v12);
  }
  return PoolWithTag;
}
