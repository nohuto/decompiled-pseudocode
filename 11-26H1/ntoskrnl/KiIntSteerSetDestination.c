/*
 * XREFs of KiIntSteerSetDestination @ 0x140432CA8
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x140256710 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x140432D34 (KiIntSteerVerifyDestination.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerSetDestination(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (int)KiIntSteerVerifyDestination(a1, a2, a1, a2) < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, v2, BugCheckParameter4);
  result = *(unsigned int *)(v2 + 128);
  if ( (_DWORD)result == 1 || (_DWORD)result == 3 )
    return guard_dispatch_icall_no_overrides(v2 + 40, BugCheckParameter4);
  if ( (_DWORD)result == 2 )
  {
    v5 = *(_QWORD *)(v2 + 200);
    *(_WORD *)(v5 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
    result = *(_QWORD *)BugCheckParameter4;
    *(_QWORD *)v5 = *(_QWORD *)BugCheckParameter4;
  }
  return result;
}
