/*
 * XREFs of LoadMemDDB @ 0x14006D0F8
 * Callers:
 *     Load @ 0x140070B90 (Load.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LoadMemDDB(__int64 Entry, const char *a2, __int64 a3)
{
  int v6; // eax
  const void *v7; // rbp
  unsigned int v8; // ebx

  if ( ghValidateTable && (v6 = ghValidateTable(a2, qword_14008EAC0), (v7 = (const void *)v6) != 0LL) )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError(Entry, -1072431079);
    PrintDebugMessage(0x51u, v7, 0LL, 0LL, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB((char *)Entry, a2, *(_QWORD *)(Entry + 80), a3);
  }
  return v8;
}
