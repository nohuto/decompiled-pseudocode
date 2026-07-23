/*
 * XREFs of PiForEachDriverQueryRoutine @ 0x1409B55F4
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlULongSub @ 0x1404CF71C (RtlULongSub.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, ULONG a3, __int64 a4, __int64 *a5)
{
  ULONG v5; // r10d
  const WCHAR *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // rsi
  __int64 v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG pulResult; // [rsp+70h] [rbp+18h] BYREF

  pulResult = a3;
  v5 = a3;
  v6 = a2;
  DestinationString = 0LL;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return guard_dispatch_icall_no_overrides(*a5, (__int64)&DestinationString);
    }
    else
    {
      v8 = a5;
      while ( *v6 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v6[v9] );
        if ( RtlULongSub(v5, 2 * v9 + 2, &pulResult) < 0 )
          return 0LL;
        RtlInitUnicodeString(&DestinationString, v6);
        result = guard_dispatch_icall_no_overrides(*v8, (__int64)&DestinationString);
        if ( (int)result < 0 )
          return result;
        v5 = pulResult;
        if ( pulResult < 2 )
          return result;
        v6 += v9 + 1;
      }
    }
  }
  return result;
}
