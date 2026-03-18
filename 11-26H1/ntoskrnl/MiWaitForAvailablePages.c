/*
 * XREFs of MiWaitForAvailablePages @ 0x1404D6948
 * Callers:
 *     MiDelayFaultingThread @ 0x1405053C4 (MiDelayFaultingThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 */

NTSTATUS __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  volatile LONG *v3; // rbx
  KIRQL v7; // di
  unsigned __int64 v8; // rax
  int v9; // ebp
  PVOID *p_Object; // rsi
  ULONG v12; // r14d
  __int64 v13; // rbp
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]

  v3 = (volatile LONG *)(a1 + 16576);
  v15 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16576));
  v8 = *(_QWORD *)(a1 + 22464);
  v9 = a3 & 2;
  if ( v9 )
    v8 += *(_QWORD *)(a1 + 22080);
  if ( v8 < 0x420 )
  {
    Object = (PVOID)(a1 + 16648);
    if ( v9 )
      v15 = a1 + 22120;
    p_Object = &Object;
    v12 = (v9 != 0) + 1;
    v13 = v12;
    do
    {
      KeResetEvent((PRKEVENT)*p_Object++);
      --v13;
    }
    while ( v13 );
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v7);
    return KeWaitForMultipleObjects(v12, &Object, WaitAny, WrFreePage, 0, 0, a2, 0LL);
  }
  else
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v7);
    return -1;
  }
}
