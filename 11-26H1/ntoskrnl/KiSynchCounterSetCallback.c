/*
 * XREFs of KiSynchCounterSetCallback @ 0x140A74D70
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwDereferenceSpinLockCounters @ 0x140832AC0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140832B20 (EtwReferenceSpinLockCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A768D4 (ExpPcwDisabledStatus.c)
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
