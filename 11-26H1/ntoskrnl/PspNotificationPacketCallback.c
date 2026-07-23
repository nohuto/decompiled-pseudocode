/*
 * XREFs of PspNotificationPacketCallback @ 0x140AEDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoSetIoCompletionEx @ 0x140266E50 (IoSetIoCompletionEx.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 */

void __fastcall PspNotificationPacketCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int32 v8; // eax
  int v9; // ett
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(a2, (__int64)CurrentThread);
  LODWORD(v4) = *(_DWORD *)(a2 + 1552);
  do
  {
    v5 = 0LL;
    v6 = v4;
    if ( (v4 & 0x4000) != 0 && (v6 = v4 & 0xFFFFBFFF, (*(_DWORD *)(a2 + 1104) & 0x800) != 0) )
    {
      v5 = 11LL;
    }
    else if ( (v6 & 0x10000) != 0 && (v6 &= ~0x10000u, (*(_DWORD *)(a2 + 1104) & 0x1000) != 0) )
    {
      v5 = 12LL;
    }
    else if ( (v6 & 0x8000) != 0 )
    {
      v6 &= ~0x8000u;
      if ( (*(_BYTE *)(a2 + 1104) & 0x10) != 0 )
        v5 = 4LL;
    }
    v7 = v6 & 0xFFFFFFF7;
    if ( (_DWORD)v5 )
      v7 = v6;
    v9 = v4;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1552), v7, v4);
    v4 = v8;
  }
  while ( v9 != v8 );
  v10 = *(_QWORD *)(a2 + 552) != 0LL ? v5 : 0;
  if ( v10 )
  {
    IoSetIoCompletionEx(*(_QWORD *)(a2 + 552), *(_QWORD *)(a2 + 560), 0LL, 0, v10, 0, *(_QWORD *)(a2 + 1232));
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 568));
  }
  PspUnlockJobExclusive(a2, (__int64)CurrentThread, v5, v4);
  if ( !v10 )
    ObfDereferenceObjectWithTag((PVOID)a2, 0x624A7350u);
}
