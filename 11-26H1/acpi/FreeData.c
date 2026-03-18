/*
 * XREFs of FreeData @ 0x1400075B0
 * Callers:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  const void *ObjectTypeName; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(_DWORD **)(a1 + 32));
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
          break;
        case 5:
        case 0x83:
          v5 = **(_QWORD **)(a1 + 32);
          goto LABEL_17;
        case 9:
          PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
          HeapFree(*(_QWORD *)(a1 + 32));
          goto LABEL_3;
        case 0x82:
        case 0x84:
          v6 = **(_QWORD **)(a1 + 32);
          if ( v6 )
            DereferenceObjectEx(v6);
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
LABEL_17:
          if ( v5 )
            DereferenceObjectEx(v5);
          break;
        default:
          LogError(-1072431101);
          AcpiDiagTraceAmlError(0LL, -1072431101);
          ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
          PrintDebugMessage(0x36u, ObjectTypeName, 0LL, 0LL, 0LL);
          goto LABEL_3;
      }
    }
    HeapFree(*(_QWORD *)(a1 + 32));
  }
LABEL_3:
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
