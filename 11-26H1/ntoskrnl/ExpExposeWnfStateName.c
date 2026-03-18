/*
 * XREFs of ExpExposeWnfStateName @ 0x14094FB04
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x14083F2A8 (ExpNtDeleteWnfStateData.c)
 *     NtCreateWnfStateName @ 0x14094F1A0 (NtCreateWnfStateName.c)
 *     ExpWnfPopulateStateData @ 0x140950088 (ExpWnfPopulateStateData.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 */

void __fastcall ExpExposeWnfStateName(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rcx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 ^ 0x41C64E6DA3BC0074LL;
  Src = v3;
  if ( a3 )
    RtlWriteULong64ToUser(a2, v3);
  else
    RtlCopyVolatileMemory(a2, &Src, 8uLL);
}
