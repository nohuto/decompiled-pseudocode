/*
 * XREFs of ParseFieldList @ 0x140010940
 * Callers:
 *     Field @ 0x1400102A0 (Field.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 */

__int64 __fastcall ParseFieldList(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v9; // r15
  unsigned int v10; // r14d
  _BYTE v12[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = a4;
  v5 = 0;
  v13 = 0;
  v12[0] = 0;
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("{");
    ++dword_14008EC34;
  }
  v14 = 0LL;
  while ( *(_QWORD *)(a1 + 120) < a2 )
  {
    v5 = ParseField(a1, a3, (unsigned int)&v15, (unsigned int)&v13, (__int64)v12, (__int64)&v14);
    if ( v5 )
      break;
    v9 = **(_QWORD **)(a3 + 96);
    if ( (gDebugger & 0xD0) != 0 && *(_QWORD *)(a1 + 120) < a2 )
      ConPrintf(",");
    if ( a5 != -1 )
    {
      v10 = v13 + 7;
      if ( (unsigned int)(v13 + 7) >> 3 > a5 && *(_BYTE *)(*(_QWORD *)(v9 + 96) + 12LL) != 6 )
      {
        v5 = -1072431100;
        LogError(-1072431100);
        AcpiDiagTraceAmlError(a1, -1072431100);
        PrintDebugMessage(0x7Fu, (const void *)((unsigned __int64)v10 >> 3), (const void *)a5, 0LL, 0LL);
        break;
      }
    }
  }
  if ( v14 )
    HeapFree(v14);
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_14008EC34;
    PrintIndent(a1);
    ConPrintf("}");
  }
  return v5;
}
