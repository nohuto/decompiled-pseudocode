/*
 * XREFs of MiMakeProtoPrivate @ 0x140313500
 * Callers:
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  _KPROCESS *Process; // rbx
  __int64 CloneAddress; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)a3 >> 12;
  v14 = 0LL;
  v8 = 0LL;
  if ( *(__int64 *)(48 * (v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) <= 0
    || (*(_QWORD *)(48 * (v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0x10000000000LL) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    CloneAddress = MiLocateCloneAddress(
                     Process,
                     *(_QWORD *)(48 * (v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) | 0x8000000000000000uLL);
    v8 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < Process[2].ActiveProcessors[4].StaticBitmap[16]);
  }
  v9 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, -1, 0, (__int64)&v14);
  if ( v9 >= 0 )
  {
    LOBYTE(v4) = v8 != 0;
    return v4;
  }
  else
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v10) = a2;
    MiUnlockWorkingSetShared(a1, v10);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v9, v14);
    return 2LL;
  }
}
