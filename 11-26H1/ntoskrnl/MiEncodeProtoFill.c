/*
 * XREFs of MiEncodeProtoFill @ 0x1404939D0
 * Callers:
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  char v10; // r15
  __int64 v11; // rax
  char v13; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = a2 >> 9;
  v6 = 0LL;
  v7 = 0LL;
  v8 = v4 + 8 * v5;
  v13 = MiLockWorkingSetShared((__int64)&unk_140E37200, v5, a3);
  v10 = v13;
  if ( v4 >= v8 )
    goto LABEL_15;
  do
  {
    if ( v7 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_5;
      MiUnlockPageTableInternal((__int64)&unk_140E37200, v7);
    }
    v7 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((signed __int64)&unk_140E37200, v7, 0);
LABEL_5:
    v11 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 1) != 0 )
      break;
    if ( qword_140E2D8C0 )
    {
      if ( (v11 & 0x10) != 0 )
        LOWORD(v11) = v11 & 0xFFEF;
      else
        LOWORD(v11) = qword_140E2D8C8 & v11;
    }
    if ( (v11 & 0x400) != 0 )
      break;
    if ( (v11 & 0x800) != 0 )
      break;
    if ( (v11 & 8) != 0 )
      break;
    *(_QWORD *)v4 = a3;
    v6 += 512LL;
    v4 += 8LL;
  }
  while ( v4 < v8 );
  v10 = v13;
  if ( v7 )
    MiUnlockPageTableInternal((__int64)&unk_140E37200, v7);
LABEL_15:
  LOBYTE(v9) = v10;
  MiUnlockWorkingSetShared((__int64)&unk_140E37200, v9);
  return v6;
}
