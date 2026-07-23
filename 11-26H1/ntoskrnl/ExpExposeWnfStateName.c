/*
 * XREFs of ExpExposeWnfStateName @ 0x1409CB444
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 *     ExpWnfPopulateStateData @ 0x1409CB9C8 (ExpWnfPopulateStateData.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
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
