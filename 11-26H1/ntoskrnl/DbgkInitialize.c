/*
 * XREFs of DbgkInitialize @ 0x140CBBBC0
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     DbgkpInitializePhase1SiloState @ 0x14078D0F8 (DbgkpInitializePhase1SiloState.c)
 *     DbgkpGetServerSiloState @ 0x140B1F0AC (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0 @ 0x140CBBC48 (DbgkpInitializePhase0.c)
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
    LODWORD(EmpParseLock.TrapFrame) = 0;
    EmpParseLock.FirstArgument = (void *)0x200000258LL;
    DbgkpWerInitialized = 1;
  }
  return result;
}
