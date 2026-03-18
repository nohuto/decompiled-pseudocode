/*
 * XREFs of ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1401A9704
 * Callers:
 *     DxgkResumeMemorySegments @ 0x1401AA694 (DxgkResumeMemorySegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::PageInAllDevices(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  __int64 v3; // rbp
  char *i; // rbx
  char *v5; // rax
  char *v6; // rdx

  v2 = (char *)this + 144;
  v3 = 2LL;
  do
  {
    for ( i = *(char **)v2; ; i = *(char **)i )
    {
      v5 = 0LL;
      if ( i != v2 )
        v5 = i;
      if ( !v5 )
        break;
      v6 = i;
      if ( i == v2 )
        v6 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 824LL))(
             *((_QWORD *)this + 96),
             *((_QWORD *)v6 + 99)) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3337;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 3337LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v2 = (char *)this + 160;
    --v3;
  }
  while ( v3 );
}
