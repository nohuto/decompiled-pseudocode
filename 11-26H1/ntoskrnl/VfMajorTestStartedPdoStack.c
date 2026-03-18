/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140C31568
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x1404F5C14 (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C31030 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 __fastcall VfMajorTestStartedPdoStack(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  result = IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && (VfRuleClasses & 0x400000) == 0 )
  {
    v4 = &unk_140FF2630;
    v5 = 28LL;
    do
    {
      if ( *v4 )
        guard_dispatch_icall_no_overrides(a1, v3);
      v4 += 12;
      --v5;
    }
    while ( v5 );
    result = qword_140FF30B0;
    if ( qword_140FF30B0 )
      return guard_dispatch_icall_no_overrides(a1, v3);
  }
  return result;
}
