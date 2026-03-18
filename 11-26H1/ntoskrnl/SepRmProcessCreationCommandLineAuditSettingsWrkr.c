/*
 * XREFs of SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x14063BCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall SepRmProcessCreationCommandLineAuditSettingsWrkr(__int64 a1, __int64 a2)
{
  char result; // al

  *(_DWORD *)(a2 + 40) = 0;
  result = *(_BYTE *)(a1 + 44);
  LOBYTE(SepRmCapTableLock.Header.WaitListHead.Flink) = result;
  HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) = 1;
  return result;
}
