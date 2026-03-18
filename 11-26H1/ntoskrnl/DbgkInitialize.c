/*
 * XREFs of DbgkInitialize @ 0x140CB5B80
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1SiloState @ 0x14078A5C8 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140B1CE9C (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0 @ 0x140CB5C08 (DbgkpInitializePhase0.c)
 */

__int64 DbgkInitialize()
{
  char *ServerSiloState; // rax
  __int64 result; // rax

  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  result = DbgkpInitializePhase1SiloState((__int64)ServerSiloState);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    EmpParseLock.ReadyTime = 0;
    LODWORD(EmpParseLock.FirstArgument) = 2;
    EmpParseLock.SystemCallNumber = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
