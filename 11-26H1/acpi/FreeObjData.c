/*
 * XREFs of FreeObjData @ 0x14000C970
 * Callers:
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006D900 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x14006DCFC (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  _QWORD *v2; // rcx
  const void *ObjectTypeName; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *(_WORD *)(a1 + 2) != 2 )
  {
    switch ( *(_WORD *)(a1 + 2) )
    {
      case 3:
      case 4:
      case 7:
      case 8:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xE:
        goto LABEL_7;
      case 5:
      case 0x83:
        v4 = **(_QWORD **)(a1 + 32);
        goto LABEL_10;
      case 9:
        PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
        HeapFree(*(_QWORD **)(a1 + 32));
        return;
      case 0x82:
      case 0x84:
        v5 = **(_QWORD **)(a1 + 32);
        if ( v5 )
          DereferenceObjectEx(v5);
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
LABEL_10:
        if ( v4 )
        {
          DereferenceObjectEx(v4);
          v2 = *(_QWORD **)(a1 + 32);
        }
        else
        {
LABEL_7:
          v2 = *(_QWORD **)(a1 + 32);
        }
        goto LABEL_3;
      default:
        LogError(-1072431101);
        AcpiDiagTraceAmlError(0LL, -1072431101);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
        PrintDebugMessage(0x36u, ObjectTypeName, 0LL, 0LL, 0LL);
        return;
    }
  }
  v2 = *(_QWORD **)(a1 + 32);
LABEL_3:
  HeapFree(v2);
}
