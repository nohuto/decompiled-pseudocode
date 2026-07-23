/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140319EF0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v5; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  char v7; // r14
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 ProtoPteAddress; // rax
  __int64 v16; // rbx
  bool v17; // zf
  __int64 PrototypePteDirect; // rax
  __int64 v19; // r8
  unsigned int *v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v7 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3);
  LOBYTE(v8) = v7;
  if ( v5 != (unsigned __int64 *)MiGetNextPageTable((_DWORD)v5, (_DWORD)v5, v8, 0, (__int64)&v20) )
  {
    v13 = 3;
    goto LABEL_6;
  }
  v10 = ((unsigned __int64)v5 >> 9) & 0x7FFFFFFFF8LL;
  v11 = *v5;
  v12 = v10 - 0x98000000000LL;
  if ( !v11 )
  {
    v13 = 2;
    goto LABEL_4;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8u, &v20);
  v13 = 1;
  if ( (v11 & 1) != 0 )
  {
    v16 = (v11 >> 12) & 0xFFFFFFFFFFLL;
    v9 = 0xFFFFDE0000000000uLL;
    if ( *(__int64 *)(48 * v16 - 0x220000000000LL + 40) < 0 )
    {
      v17 = (*(_QWORD *)(48 * v16 - 0x220000000000LL + 8) | 0x8000000000000000uLL) == ProtoPteAddress;
      goto LABEL_10;
    }
LABEL_11:
    v13 = 0;
    goto LABEL_4;
  }
  if ( (v11 & 0x400) == 0 )
    goto LABEL_11;
  if ( !(unsigned int)MiIsPrototypePteVadLookup(v11) )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v11);
    v17 = v19 == PrototypePteDirect;
LABEL_10:
    if ( v17 )
      goto LABEL_4;
    goto LABEL_11;
  }
LABEL_4:
  if ( v12 )
    MiUnlockPageTableInternal((__int64)p_Blink, v12);
LABEL_6:
  LOBYTE(v9) = v7;
  MiUnlockWorkingSetShared((__int64)p_Blink, v9);
  return v13;
}
