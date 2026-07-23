/*
 * XREFs of IoRetryAsMiniDump @ 0x1405C9D24
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 * Callees:
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoRetryAsMiniDump(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 result; // rax

  if ( qword_140E66020 )
    guard_dispatch_icall_no_overrides(10LL, 0LL);
  result = IoWriteCrashDump(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( !(_BYTE)result )
    return IoSetBugCheckProgressFlag(0x2000000);
  return result;
}
