/*
 * XREFs of EtwpInitializeProviderInfoBuffer @ 0x140B474C0
 * Callers:
 *     EtwpSendDbgId @ 0x140832980 (EtwpSendDbgId.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140A14478 (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14021919C (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1404AE3D4 (EtwpInitializeBufferHeader.c)
 */

__int64 __fastcall EtwpInitializeProviderInfoBuffer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  EtwpInitializeBufferHeader((__int16 *)a1, (_DWORD *)a2);
  *(_DWORD *)a2 = a3;
  EtwpResetBufferHeader(a2, 7);
  *(_DWORD *)(a2 + 44) = 3;
  *(_WORD *)(a2 + 52) = 1;
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 304);
  result = *(unsigned int *)(a1 + 200);
  v7 = result ^ (*(_QWORD *)(a2 + 32) ^ result) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 32) = v7;
  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 1:
      goto LABEL_4;
    case 3:
      result = v7 & 7 | (8LL * HIDWORD(stru_140F03830.CycleTime));
      *(_QWORD *)(a2 + 32) = result;
      return result;
    case 4:
LABEL_4:
      result = 8LL * *(_QWORD *)&stru_140F03830.CurrentRunTime;
      *(_QWORD *)(a2 + 32) = (8LL * *(_QWORD *)&stru_140F03830.CurrentRunTime) | v7 & 7;
      break;
  }
  return result;
}
