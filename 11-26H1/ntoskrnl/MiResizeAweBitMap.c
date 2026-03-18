/*
 * XREFs of MiResizeAweBitMap @ 0x1408791F8
 * Callers:
 *     MiAllocateUserPhysicalPagesAddMdl @ 0x140877984 (MiAllocateUserPhysicalPagesAddMdl.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140315540 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403155B4 (LOCK_ADDRESS_SPACE.c)
 *     RtlCopyBitMapEx @ 0x14044B020 (RtlCopyBitMapEx.c)
 *     MiLockAwePagesShared @ 0x1404F0690 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404FA958 (MiUnlockAweVadsShared.c)
 *     MiLockAwePagesExclusive @ 0x140701D48 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x140702BEC (MiUnlockAwePagesExclusive.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiCreateAweInfoBitMap @ 0x140878888 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x140878E00 (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(char *Src)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR Process; // rdi
  ULONG_PTR v4; // rbx
  int AweInfoBitMap; // r15d
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __m128i *v9; // rbx
  char v10; // al
  __m128i v11; // xmm6
  __m128i v12; // xmm0
  _BYTE v13[24]; // [rsp+68h] [rbp+0h] BYREF

  memset_0((void *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x80uLL);
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)Src + 2) & 1) != 0 )
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v4 = MiLockAwePagesShared((__int64)Src, (__int64)CurrentThread);
  RtlCopyVolatileMemory((void *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL), Src, 0x80uLL);
  AweInfoBitMap = MiCreateAweInfoBitMap((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL);
  MiUnlockAweVadsShared((__int64)CurrentThread, v4);
  if ( AweInfoBitMap < 0 )
    return (unsigned int)AweInfoBitMap;
  v9 = (__m128i *)(Src + 24);
  if ( Process )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v6, v7);
    if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      MiDeleteAweBitMap((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL, Process);
      return 3221225738LL;
    }
  }
  MiLockAwePagesExclusive((__int64)Src, (__int64)CurrentThread);
  if ( *(_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) > v9->m128i_i64[0] )
  {
    RtlCopyBitMapEx((unsigned __int64 *)Src + 3, (_QWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 24), 0LL);
    v10 = *(_BYTE *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    v11 = *v9;
    *(_BYTE *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = Src[56];
    v12 = *(__m128i *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    Src[56] = v10;
    *v9 = v12;
    MiUnlockAwePagesExclusive((__int64)Src, (__int64)CurrentThread);
    if ( Process )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    if ( !_mm_srli_si128(v11, 8).m128i_u64[0] )
      return 0LL;
    *(__m128i *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v11;
  }
  else
  {
    MiUnlockAwePagesExclusive((__int64)Src, (__int64)CurrentThread);
    if ( Process )
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  }
  MiDeleteAweBitMap((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL, Process);
  return 0LL;
}
