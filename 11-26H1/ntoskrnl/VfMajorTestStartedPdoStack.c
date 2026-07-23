/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140C37578
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x1404EF1D4 (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C37040 (IovUtilIsVerifiedDeviceStack.c)
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
    v4 = &unk_140FF3630;
    v5 = 28LL;
    do
    {
      if ( *v4 )
        guard_dispatch_icall_no_overrides(a1, v3);
      v4 += 12;
      --v5;
    }
    while ( v5 );
    result = qword_140FF40B0;
    if ( qword_140FF40B0 )
      return guard_dispatch_icall_no_overrides(a1, v3);
  }
  return result;
}
