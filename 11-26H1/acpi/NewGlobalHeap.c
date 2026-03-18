/*
 * XREFs of NewGlobalHeap @ 0x14006F800
 * Callers:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     PushCall @ 0x140003230 (PushCall.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)gdwGlobalHeapBlkSize, 1215065409LL);
  *a1 = Pool2;
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(Pool2, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(0x6Eu, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
