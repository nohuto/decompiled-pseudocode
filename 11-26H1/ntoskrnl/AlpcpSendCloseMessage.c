/*
 * XREFs of AlpcpSendCloseMessage @ 0x1408F0FC8
 * Callers:
 *     AlpcpClosePort @ 0x1408F0B10 (AlpcpClosePort.c)
 *     AlpcpDeletePort @ 0x1408F0D70 (AlpcpDeletePort.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpDispatchCloseMessage @ 0x1408EF2B0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  ULONG_PTR v4; // rbx
  _KPROCESS *Process; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8[6]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-18h]

  memset_0(v8, 0, 0x40uLL);
  result = *(unsigned int *)(a1 + 416);
  v3 = *(_DWORD *)(a1 + 416) & 6;
  if ( v3 != 2 && (result & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v3 == 4) )
  {
    result = *(_QWORD *)(a1 + 16);
    v4 = _InterlockedExchange64((volatile __int64 *)(result + 72), 0LL);
    if ( v4 )
    {
      AlpcpLockForCachedReferenceBlob(v4);
      --*(_WORD *)(v4 - 30);
      *(_DWORD *)(v4 + 264) &= ~0x80000000;
      *(_DWORD *)(v4 + 240) = 3145736;
      *(_BYTE *)(v4 + 244) = 5;
      *(_WORD *)(v4 + 246) = 0;
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v4 + 280) = Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v4 + 248) = 0LL;
      *(_QWORD *)(v4 + 256) = 0LL;
      v8[0] = a1;
      v8[1] = v4;
      v9 = 65538;
      result = AlpcpDispatchCloseMessage(v8, (__int64)Process, v6, v7);
      if ( (int)result < 0 )
        return AlpcpUnlockMessage(v4);
    }
  }
  return result;
}
