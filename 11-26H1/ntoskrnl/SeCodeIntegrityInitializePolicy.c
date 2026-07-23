/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140CE336C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SepInitializeDebugOptions @ 0x140CE3440 (SepInitializeDebugOptions.c)
 *     SeSecureBootRegisterPolicy @ 0x140CE41A8 (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  __int64 v3; // rbx
  ULONG_PTR v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = 0;
  v3 = 0LL;
  v6 = 0LL;
  if ( !v1
    || (v3 = *(_QWORD *)(v1 + 2904)) == 0
    || (v4 = *(unsigned int *)(v3 + 64), !(_DWORD)v4)
    || (v2 = SeSecureBootRegisterPolicy(v3 + *(unsigned int *)(v3 + 60) + 128LL, v4), v2 >= 0) )
  {
    SepInitializeDebugOptions();
    if ( *(_QWORD *)&SepRmCapTableLock.ReservedPreviousReadyTimeValue )
    {
      v2 = guard_dispatch_icall_no_overrides(v3, (__int64)&v6);
      if ( v2 >= 0 )
      {
        SeCiStateElements = v6;
        SeCiStateElementCount = 0;
      }
    }
  }
  return (unsigned int)v2;
}
