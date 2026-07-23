/*
 * XREFs of RtlGuardCheckImageBase @ 0x180036950
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C2BE0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x180110594 (LdrIsEnclaveAddress.c)
 */

void __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    v5 = 0LL;
    v4 = 0LL;
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801DF450 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801DF460 )
    {
      RtlpxLookupFunctionTable(BaseAddress, (char **)&v4);
    }
    else
    {
      v4 = xmmword_1801DF450;
    }
    if ( *((PVOID *)&v4 + 1) != BaseAddress && (!a2 || !(unsigned __int8)LdrIsEnclaveAddress(BaseAddress)) )
      __fastfail(0x18u);
  }
}
