/*
 * XREFs of VfMajorTestStartedPdoStack @ 0x140B830E0
 * Callers:
 *     PpvUtilTestStartedPdoStack @ 0x1404B476C (PpvUtilTestStartedPdoStack.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B82BB8 (IovUtilIsVerifiedDeviceStack.c)
 */

__int64 __fastcall VfMajorTestStartedPdoStack(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = IovUtilIsVerifiedDeviceStack(a1);
  if ( (_DWORD)result && (VfRuleClasses & 0x400000) == 0 )
  {
    v3 = 0LL;
    do
    {
      if ( *((_QWORD *)&unk_140FFEC60 + 12 * v3) )
        guard_dispatch_icall_no_overrides(a1);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= 0x1B );
    result = qword_140FFF6E0;
    if ( qword_140FFF6E0 )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
