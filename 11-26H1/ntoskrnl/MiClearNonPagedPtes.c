/*
 * XREFs of MiClearNonPagedPtes @ 0x140365158
 * Callers:
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140700AB8 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiDeleteNonPagedPoolTail @ 0x140364AB0 (MiDeleteNonPagedPoolTail.c)
 *     MiFinishDeleteNonPagedPtes @ 0x1403650CC (MiFinishDeleteNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 *     MiClearNonPagedPtesSlow @ 0x140365970 (MiClearNonPagedPtesSlow.c)
 *     MiBeginDeleteNonPagedPtes @ 0x140365A2C (MiBeginDeleteNonPagedPtes.c)
 *     MiGetPteBounds @ 0x14049D9E0 (MiGetPteBounds.c)
 */

__int64 __fastcall MiClearNonPagedPtes(__int64 *a1)
{
  unsigned __int64 LeafVa; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbx
  bool v4; // bp
  unsigned __int8 CurrentIrql; // al
  char v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r8d
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]

  LeafVa = *a1;
  v2 = 0LL;
  v3 = 0LL;
  v18 = 0LL;
  v4 = 0;
  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v7 = 17;
  v8 = (a1[1] << 12) + LeafVa - 1;
  while ( 1 )
  {
    if ( !v3 )
      v3 = MiBeginDeleteNonPagedPtes(0, (_DWORD)a1, (unsigned int)&unk_140E375C0, v7, LeafVa, v8);
    DWORD2(v19) = MiFastLockLeafPageTable(*(_QWORD *)(v3 + 32), LeafVa, 0);
    if ( !DWORD2(v19) )
      break;
    MiGetPteBounds(LeafVa, v8, &v18);
    v9 = v18;
    if ( (unsigned __int64)v18 <= *((_QWORD *)&v18 + 1) )
    {
      v10 = DWORD2(v19);
      do
      {
        MiDeleteNonPagedPoolPte(v3, v9, (unsigned int)(v10 - 1));
        v11 = (unsigned int)(*(_DWORD *)(v3 + 12) + 1);
        *(_DWORD *)(v3 + 12) = 0;
        v9 += 8 * v11;
      }
      while ( v9 <= *((_QWORD *)&v18 + 1) );
      *(_QWORD *)&v18 = v9;
    }
    MiDeleteNonPagedPoolTail(v3);
    v12 = v19;
    if ( !v4 )
    {
      PteShadow = *(_QWORD *)v19;
      if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v19, *(_QWORD *)v19);
      if ( (*(_DWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 36) & 0x4000000) != 0 )
        v14 = *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 36;
      else
        v14 = *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16) >> 17;
      v4 = (v14 & 0x3FF) == 0;
    }
    MiUnlockPageTableInternal(*(_QWORD *)(v3 + 32), v12);
    LeafVa = MiGetLeafVa(v9);
    if ( LeafVa > v8 )
      break;
    if ( (unsigned __int8)v7 < 2u && KeShouldYieldProcessor() )
    {
      v2 += MiFinishDeleteNonPagedPtes(a1, v3, 1);
      v3 = 0LL;
    }
  }
  v15 = MiFinishDeleteNonPagedPtes(a1, v3, 1) + v2;
  if ( LeafVa <= v8 || v4 )
  {
    LOBYTE(v16) = v7;
    v15 += MiClearNonPagedPtesSlow((_DWORD)a1, (unsigned int)&unk_140E375C0, v16, *a1, v8);
  }
  return v15;
}
