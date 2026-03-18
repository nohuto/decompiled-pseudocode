/*
 * XREFs of ?AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z @ 0x140205B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGSWAPCHAIN::AsyncCloseNtHandle(void *a1)
{
  bool v1; // zf
  NTSTATUS v3; // eax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4) == 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( v1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3300;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pWorkItem->pNtProcess != nullptr",
      3300LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeStackAttachProcess(*((PRKPROCESS *)a1 + 4), &ApcState);
  v3 = ObCloseHandle(*((HANDLE *)a1 + 5), 1);
  if ( v3 < 0 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a1 + 5), v3);
    WdLogGlobalForLineNumber = 3311;
  }
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObject(*((PVOID *)a1 + 4));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
