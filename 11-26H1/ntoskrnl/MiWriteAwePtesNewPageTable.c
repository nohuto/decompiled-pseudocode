/*
 * XREFs of MiWriteAwePtesNewPageTable @ 0x140707B34
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 */

__int64 __fastcall MiWriteAwePtesNewPageTable(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  int v6; // edx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 LeafVa; // rax
  unsigned int v10; // r9d
  __int64 v11; // r10
  char v12; // al
  bool v13; // cc
  ULONG_PTR v14; // rax
  __int64 result; // rax

  v3 = (_DWORD *)(a1 + 20);
  v4 = a2;
  if ( *(_QWORD *)a1 )
  {
    MiFinishPteChangesInPageTable((__int64 **)a1);
  }
  else if ( (*v3 & 4) != 0 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 256);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 40), a2);
  }
  *v3 &= ~8u;
  v6 = *v3 | 4;
  *(_DWORD *)(a1 + 260) = 0;
  v7 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = v6 | 2u;
  *(_QWORD *)a1 = v7;
  *v3 = v8;
  if ( (v8 & 1) != 0 && (*(_DWORD *)(a1 + 268) & 8) != 0 )
  {
    LeafVa = MiGetLeafVa(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = (v11 | ((unsigned __int64)v10 << 32)) << 12;
    if ( LeafVa >= v8 )
    {
      a3 = MiGetLeafVa(*(_QWORD *)a1 + 8LL) - 1;
      v8 = ((*(unsigned int *)(*(_QWORD *)(a1 + 48) + 28LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 33LL) << 32)) << 12) | 0xFFF;
      if ( a3 <= v8 )
        *v3 &= ~2u;
    }
  }
  v12 = MiLockWorkingSetShared(*(_QWORD *)(a1 + 40), v8, a3);
  v13 = *(_DWORD *)(a1 + 236) < 1;
  *(_BYTE *)(a1 + 256) = v12;
  if ( !v13 )
  {
    v14 = MiGetLeafVa(v4);
    result = MiFastLockLeafPageTable(*(_QWORD *)(a1 + 40), v14, 8u);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result - 1 == *(_DWORD *)(a1 + 236) )
        return result;
      if ( (_DWORD)result != 1 )
      {
        while ( 1 )
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 40), ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
  }
  return MiMakeSystemAddressValid(v4, *(_DWORD *)(a1 + 304), *(_BYTE *)(a1 + 256), 0);
}
