/*
 * XREFs of VerifierMmMapIoSpace @ 0x140C457B0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = 4;
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"MmMapIoSpace", a2) )
  {
    return 0LL;
  }
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    if ( a3 != 1 )
    {
      v3 = 516;
      if ( a3 == 2 )
        v3 = 1028;
    }
    v8 = MmMapIoSpaceEx(a1, a2, v3);
  }
  else
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2);
  }
  v9 = v8;
  if ( v8 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 216LL, 0xE0u, a2);
  }
  return v9;
}
