/*
 * XREFs of CarLiveDumpCallBack @ 0x140650830
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHashUnicodeString @ 0x140A43AE0 (RtlHashUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarLiveDumpCallBack(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  wchar_t *Pool2; // rdi
  unsigned int v12; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF

  v14 = CAR_LIVEDUMP_REPORT_TYPE;
  DestinationString = 0LL;
  if ( !a8 )
    return 3221225485LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    RtlStringCchPrintfW(
      Pool2,
      0x37uLL,
      L"%lS %lu %lu",
      a8 + 4,
      *(_DWORD *)(a8 + 68),
      a4,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      v14);
    RtlInitUnicodeString(&DestinationString, Pool2);
    RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)(a8 + 84));
    v12 = guard_dispatch_icall_no_overrides(a1, &v14);
    ExFreePoolWithTag(Pool2, 0x4E726143u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
