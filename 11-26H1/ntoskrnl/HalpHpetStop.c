/*
 * XREFs of HalpHpetStop @ 0x14059B5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHpetStop(int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = a1[8] & 0xFFFFFFFB;
  result = *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock;
  *(_DWORD *)(32 * (*a1 + 8LL) + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.Timer.Header.Lock) = v1;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  a1[8] = v1;
  a1[2] = 0;
  return result;
}
