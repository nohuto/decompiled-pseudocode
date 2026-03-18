/*
 * XREFs of BankField @ 0x140030DC0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall BankField(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 72LL));
    if ( !NameSpaceObject )
    {
      if ( MEMORY[0x42] == 10 )
      {
        NameSpaceObject = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(0xFu, *(const void **)(*(_QWORD *)(a2 + 80) + 72LL), 0LL, 0LL, 0LL);
      }
      else
      {
        NameSpaceObject = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(0xFu, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
