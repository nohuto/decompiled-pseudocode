/*
 * XREFs of ACPIWriteGpeStatusRegister @ 0x14002D678
 * Callers:
 *     ACPIGpeClearRegisters @ 0x14002D4CC (ACPIGpeClearRegisters.c)
 *     ACPIVectorClear @ 0x14006AC10 (ACPIVectorClear.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIWriteGpeStatusRegister(unsigned int a1, char a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = a1;
  v3 = *(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a1 < *((unsigned __int16 *)AcpiInformation + 43) )
  {
    result = v3(6LL);
    if ( (int)result < 0 )
      return result;
    v5 = 6LL;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             v5,
             v2,
             &v6,
             1LL,
             0LL);
  }
  result = v3(7LL);
  if ( (int)result >= 0 )
  {
    v5 = 7LL;
    v2 -= *((unsigned __int16 *)AcpiInformation + 43);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             v5,
             v2,
             &v6,
             1LL,
             0LL);
  }
  return result;
}
