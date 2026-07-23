/*
 * XREFs of MiProtectAwePrepare @ 0x14087F400
 * Callers:
 *     MiProtectAweRegion @ 0x140706C04 (MiProtectAweRegion.c)
 * Callees:
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x140471ED0 (MiPageSizeToPteLevel.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiGetVadCacheAttribute @ 0x1404DBCAC (MiGetVadCacheAttribute.c)
 *     MiUnlockAweVadsShared @ 0x1404F3F68 (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     MiGetAweNode @ 0x1405289D4 (MiGetAweNode.c)
 */

__int64 __fastcall MiProtectAwePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 PteAddress; // rax
  unsigned __int64 v4; // rcx
  __int64 AweNode; // r14
  __int64 v6; // rcx
  unsigned int VadFlags; // eax
  __int64 v8; // rbp
  unsigned int v9; // ebx
  ULONG_PTR v10; // r11
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int VadCacheAttribute; // r9d
  int v15; // r10d
  int v16; // eax
  unsigned int v17; // r9d
  unsigned __int64 AweViewPageSize; // r10
  unsigned __int64 v19; // r11
  int v20; // eax
  int v21; // r9d
  unsigned __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rcx

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 104) = (char *)CurrentThread->ApcState.Process + 1024;
  PteAddress = MiGetPteAddress(*(_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = PteAddress;
  *(_QWORD *)(a1 + 24) = MiGetPteAddress(v4);
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(*(_QWORD *)a1);
  v6 = *(_QWORD *)(AweNode + 40);
  *(_QWORD *)(a1 + 48) = v6;
  *(_BYTE *)(AweNode + 72) = 0;
  VadFlags = MiReadVadFlags(v6);
  v8 = *(_QWORD *)(AweNode + 48);
  v9 = VadFlags;
  MiUnlockAweVadsShared((__int64)CurrentThread, v10);
  v11 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = v8;
  if ( v11 != 24 )
  {
    v12 = v11 & 7;
    if ( v12 != 1 && v12 != 4 )
      return 3221225496LL;
    VadCacheAttribute = MiGetVadCacheAttribute(v9);
    if ( VadCacheAttribute )
    {
      v16 = 0;
      if ( VadCacheAttribute == 2 )
        v16 = v15;
    }
    else
    {
      v16 = 8;
    }
    v11 = v16 | v13;
    *(_DWORD *)(a1 + 32) = v11;
  }
  if ( (*(_DWORD *)(v8 + 8) & 1) == 0 )
  {
    *(_DWORD *)(a1 + 36) = (v9 >> 5) & 0x1F;
    if ( ((v9 >> 5) & 7) != 1 || (v11 & 7) == 1 )
      goto LABEL_13;
    return 3221225496LL;
  }
  *(_DWORD *)(a1 + 36) = 4;
LABEL_13:
  if ( (v9 & 0x180000) == 0x180000 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v17 = 0;
  }
  else
  {
    v17 = 0x80000000;
  }
  *(_DWORD *)(a1 + 64) = v17;
  MiPageChainCount(v8);
  AweViewPageSize = MiGetAweViewPageSize(AweNode);
  if ( !AweViewPageSize )
    AweViewPageSize = v19;
  *(_QWORD *)(a1 + 88) = AweViewPageSize;
  v20 = MiPageSizeToPteLevel(AweViewPageSize);
  if ( v20 < 1 )
  {
    v24 = v23;
  }
  else
  {
    v24 = 1LL;
    *(_DWORD *)(a1 + 64) = v21 | 0x4000000;
  }
  *(_QWORD *)(a1 + 72) = v24;
  *(_DWORD *)(a1 + 60) = v20;
  if ( v23 != 1
    && (((*(_DWORD *)(a1 + 16) >> 3) & 0x1FFu) % v22
     || (((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3) + 1) % v22) )
  {
    return 3221225496LL;
  }
  *(_QWORD *)(a1 + 80) = v23;
  return 0LL;
}
