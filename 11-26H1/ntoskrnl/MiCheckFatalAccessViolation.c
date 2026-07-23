/*
 * XREFs of MiCheckFatalAccessViolation @ 0x14049A444
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // r10

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFDFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 1532) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, a3, 0LL);
    result = MiIsStoreProcess(a4);
    if ( (_DWORD)result )
      KeBugCheckEx(0x1Au, 0x4478uLL, v6, v5, 0LL);
  }
  return result;
}
