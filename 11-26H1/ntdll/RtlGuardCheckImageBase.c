/*
 * XREFs of RtlGuardCheckImageBase @ 0x18004C3D0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800C5420 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x180110A04 (LdrIsEnclaveAddress.c)
 */

void __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 )
  {
    v5 = 0LL;
    v4 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E0450 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
    {
      RtlpxLookupFunctionTable(a1, (__int64)&v4);
    }
    else
    {
      v4 = xmmword_1801E0450;
    }
    if ( *((_QWORD *)&v4 + 1) != a1 && (!a2 || !(unsigned __int8)LdrIsEnclaveAddress(a1)) )
      __fastfail(0x18u);
  }
}
