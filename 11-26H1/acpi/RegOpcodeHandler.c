/*
 * XREFs of RegOpcodeHandler @ 0x14006E7B0
 * Callers:
 *     AMLIRegEventHandler @ 0x140051350 (AMLIRegEventHandler.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FindOpcodeTerm @ 0x1400373D4 (FindOpcodeTerm.c)
 */

__int64 __fastcall RegOpcodeHandler(unsigned int a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v5; // r11d
  __int64 v6; // r10
  __int64 OpcodeTerm; // rax

  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( (_BYTE)a1 == 91 )
    OpcodeTerm = FindOpcodeTerm(a1 >> 8);
  else
    OpcodeTerm = (__int64)*(&OpcodeTable + a1);
  if ( OpcodeTerm )
  {
    if ( *(_QWORD *)(OpcodeTerm + 32) && v6 )
    {
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      PrintDebugMessage(0xA6u, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)-1072431090;
    }
    else
    {
      *(_DWORD *)(OpcodeTerm + 28) |= a4;
      *(_QWORD *)(OpcodeTerm + 32) = v6;
      *(_DWORD *)(OpcodeTerm + 40) = v5;
    }
  }
  else
  {
    LogError(-1072431072);
    AcpiDiagTraceAmlError(0LL, -1072431072);
    PrintDebugMessage(0xA7u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431072;
  }
  return v4;
}
