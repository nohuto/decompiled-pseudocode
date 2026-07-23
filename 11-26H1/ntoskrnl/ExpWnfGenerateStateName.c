/*
 * XREFs of ExpWnfGenerateStateName @ 0x1409CB070
 * Callers:
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1409CB178 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(unsigned __int64 *a1, int a2, int a3, char a4)
{
  unsigned __int8 v4; // di
  __int64 v8; // rax
  volatile signed __int64 *CurrentServerSiloGlobals; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  signed __int64 v12; // rdx
  __int64 result; // rax
  signed __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v14[0] = 0LL;
  if ( (unsigned int)(a3 - 4) > 1 )
  {
    PsGetCurrentServerSilo();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v8 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(v8);
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(v11, v14, v10, CurrentServerSiloGlobals);
    if ( (int)result < 0 )
      return result;
    v12 = v14[0];
  }
  else
  {
    do
      v12 = _InterlockedIncrement64(CurrentServerSiloGlobals + 116);
    while ( !v12 );
  }
  if ( (v12 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (v12 << 11) | (a4 != 0 ? 0x400 : 0) | (16 * (_BYTE)a2) & 0x30 ^ (unsigned __int64)((v4 << 6) & 0x3C0) ^ 1;
  return 0LL;
}
