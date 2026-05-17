/*
 * XREFs of RtlGrowFunctionTable @ 0x1800ED2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 */

struct _TEB *__fastcall RtlGrowFunctionTable(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // edi
  struct _TEB *result; // rax
  __int64 v7; // rdx
  int v8; // ecx

  if ( *(_DWORD *)(a1 + 80) != 3 || a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v4);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_14;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(a1 + 84) = a2;
  result = (struct _TEB *)LdrControlFlowGuardEnforced();
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v7);
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  v8 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v8;
  if ( !v8 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
