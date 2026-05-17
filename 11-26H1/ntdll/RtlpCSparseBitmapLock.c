/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800E8F60
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144390 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 */

unsigned __int64 __fastcall RtlpCSparseBitmapLock(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int64 *v5; // rcx
  int v6; // edi
  unsigned __int64 result; // rax

  v5 = (volatile signed __int64 *)(a1 + 24);
  v6 = a2;
  if ( (_DWORD)a2 == 1 )
    result = RtlAcquireSRWLockExclusive(v5, a2);
  else
    result = RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v6;
  return result;
}
