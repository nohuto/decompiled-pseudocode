/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800C353C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C30F0 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C3930 (LdrpFindLoadedDllByAddress.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800C48A4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C48D4 (RtlpGuardGrantSuppressedCallAccess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdi
  int v11; // eax
  PVOID BaseAddress[3]; // [rsp+30h] [rbp-18h] BYREF

  BaseAddress[0] = 0LL;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)LdrpNtDllDataTableEntry && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    LdrpDereferenceModule((char *)BaseAddress[0]);
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
    if ( v10 != a3 )
    {
      LOBYTE(v11) = LdrControlFlowGuardEnforced();
      if ( v11 )
      {
        if ( (unsigned __int8)RtlpGuardIsSuppressedAddress(a3) == 1 )
          RtlpGuardGrantSuppressedCallAccess(a3, 1LL);
      }
    }
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
