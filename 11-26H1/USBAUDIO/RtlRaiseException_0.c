/*
 * XREFs of RtlRaiseException_0 @ 0x14001C665
 * Callers:
 *     RaiseException @ 0x14001C060 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001C170 (_raise_exc_ex.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlRaiseException_0(PEXCEPTION_RECORD ExceptionRecord)
{
  RtlRaiseException(ExceptionRecord);
}
