/*
 * XREFs of BapdpKsrCancelScenario @ 0x1406CE540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BapdpKsrCancelScenario(int a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1 & 0x1000000;
  if ( !(_DWORD)v2 || (a2 & 0x1000000) != 0 || !*(_QWORD *)&ExpSysDbgLock.SavedApcStateFill[40] )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(v2, 0LL);
  if ( (int)result >= 0 )
    ExSoftRebootFlags &= ~4u;
  return result;
}
