/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800DEFA0
 * Callers:
 *     ?DisablePumpBackupTimer@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800B03E4 (-DisablePumpBackupTimer@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
