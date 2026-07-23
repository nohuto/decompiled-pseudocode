/*
 * XREFs of KiFreezeSingleThread @ 0x14020908C
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeFreezeProcess @ 0x140208F70 (KeFreezeProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 */

void __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v6; // rbp
  unsigned __int8 v7; // cl
  char v8; // di
  char v9; // si

  if ( a3 || (*(_DWORD *)(a2 + 116) & 0x200000) == 0 )
  {
    v6 = (volatile signed __int32 *)(a2 + 736);
    KiAcquireKobjectLockSafe(a2 + 736);
    v7 = *(_BYTE *)(a2 + 794);
    v8 = v7 >> 2;
    v9 = v7 >> 1;
    *(_BYTE *)(a2 + 794) = v7 | (a3 != 0 ? 4 : 2);
    if ( (v7 & 2) == 0 && (v7 & 4) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !(unsigned __int8)KiSuspendThread(a2, a1, 0LL) )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
        *(_BYTE *)(a2 + 794) ^= (*(_BYTE *)(a2 + 794) ^ (4 * v8)) & 4 ^ (*(_BYTE *)(a2 + 794) ^ (*(_BYTE *)(a2 + 794) ^ (4 * v8)) & 4 ^ (2 * v9)) & 2;
      }
    }
    _InterlockedAnd(v6, 0xFFFFFF7F);
  }
}
