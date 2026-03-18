/*
 * XREFs of KiSynchCounterSetCallback @ 0x140A67DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwDereferenceSpinLockCounters @ 0x14082C880 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14082C8E0 (EtwReferenceSpinLockCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A69904 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall KiSynchCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  __int64 v3; // rbp
  ULONG ActiveProcessorCount; // esi
  ULONG i; // edi
  __int64 v6; // rcx
  int v7; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  DestinationString = 0LL;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( (unsigned int)(v2 - 1) <= 1 )
      {
        v3 = *(_QWORD *)(a2 + 24);
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        for ( i = 0; i < ActiveProcessorCount; ++i )
        {
          RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u", i);
          RtlInitUnicodeString(&DestinationString, pszDest);
          if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
          {
            v7 = guard_dispatch_icall_no_overrides(v3, (__int64)&DestinationString);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
          }
          else
          {
            v7 = ExpPcwDisabledStatus(v6);
          }
          if ( v7 < 0 )
            return (unsigned int)v7;
        }
      }
    }
    else
    {
      EtwDereferenceSpinLockCounters();
    }
  }
  else
  {
    EtwReferenceSpinLockCounters();
  }
  return 0LL;
}
