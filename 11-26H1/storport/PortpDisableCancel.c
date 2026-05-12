/*
 * XREFs of PortpDisableCancel @ 0x14003B174
 * Callers:
 *     PortpAsyncCompletion @ 0x14003B140 (PortpAsyncCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall PortpDisableCancel(__int64 a1)
{
  char v2; // dl
  __int64 v4; // rax
  __int64 v5; // rbx
  KIRQL Irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  if ( _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = 0LL;
  }
  else
  {
    Irql = 0;
    IoAcquireCancelSpinLock(&Irql);
    v4 = *(_QWORD *)(a1 + 184);
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    return v5 == 0;
  }
  return v2;
}
