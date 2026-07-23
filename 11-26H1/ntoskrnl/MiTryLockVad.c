/*
 * XREFs of MiTryLockVad @ 0x1404CF304
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // edi
  struct _KTHREAD *v6; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = *(_DWORD *)(a1 + 1448);
  if ( (v4 & 0x80u) != 0 )
    return 0LL;
  v6 = (struct _KTHREAD *)(a2 + 40);
  v7 = 1;
  v8 = KeAbPreAcquire(a2 + 40, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64(&v6->Header.Lock, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v6, v8, v9, v10);
    return 0;
  }
  else
  {
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v8 + 33) |= 2u;
      else
        *(_BYTE *)(v8 + 10) = 1;
    }
    *(_DWORD *)(a1 + 1448) = v4 | 0x80;
  }
  return v7;
}
