/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800C5D7C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C5930 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C6170 (LdrpFindLoadedDllByAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C70E4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114 (RtlpGuardGrantSuppressedCallAccess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, v12, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v12[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v12[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v12[0] + 48);
    LdrpDereferenceModule(v12[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                         AvrfpAPILookupCallbackRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 && LdrControlFlowGuardEnforced() && (unsigned __int8)RtlpGuardIsSuppressedAddress(a3) == 1 )
      RtlpGuardGrantSuppressedCallAccess(a3, 1LL);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
