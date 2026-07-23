/*
 * XREFs of IvtAllocateScalableModePasidTables @ 0x1405034FC
 * Callers:
 *     IvtAllocateTranslationStructures @ 0x140503418 (IvtAllocateTranslationStructures.c)
 *     IvtGrowPasidTable @ 0x1405A9220 (IvtGrowPasidTable.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140BF68FC (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14059A394 (ExtEnvAllocatePhysicalMemory.c)
 *     IvtExtendScalableModePasidTables @ 0x1405A8BA0 (IvtExtendScalableModePasidTables.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtAllocateScalableModePasidTables(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        size_t *a8,
        _QWORD *Size)
{
  _QWORD *v9; // r12
  int v12; // r13d
  _DWORD *v13; // rbx
  int v14; // esi
  __int64 v15; // rcx
  size_t v16; // rdi
  _QWORD *v17; // r14
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // r13
  size_t *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  void **v25; // r14
  __int64 v26; // rbp
  char *v27; // rbx
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  size_t v32; // [rsp+A8h] [rbp+10h]
  unsigned int v34; // [rsp+B8h] [rbp+20h]

  v9 = Size;
  v29 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !Size )
  {
    if ( a2 )
      goto LABEL_27;
LABEL_5:
    v12 = -1;
    goto LABEL_6;
  }
  if ( !a2 )
  {
    *Size = 0LL;
    goto LABEL_5;
  }
  *Size = *(_QWORD *)(a2 + 80);
LABEL_27:
  v12 = **(_DWORD **)(a2 + 72);
LABEL_6:
  Size = 0LL;
  v32 = 0LL;
  v13 = 0LL;
  v14 = -1073741823;
  if ( a4 >= 0x100000 )
    goto LABEL_52;
  if ( a5 >= 0x100000 )
    goto LABEL_52;
  if ( a5 < a4 )
    goto LABEL_52;
  v15 = a5 & 0xFFFFFFC0;
  v34 = v15 + 64;
  if ( (a4 & 0xFFFFFFC0) > 0xFFFC0 )
    goto LABEL_52;
  if ( (unsigned int)v15 > 0xFFFC0 )
    goto LABEL_52;
  v14 = ExtEnvAllocateMemory(v15, 8 * (((unsigned int)(v15 + 64) >> 6) & 0x3FFF) + 64, &Size);
  if ( v14 < 0 )
    goto LABEL_52;
  v16 = (size_t)Size;
  Size[1] = Size;
  v17 = (_QWORD *)(v16 + 16);
  *(_QWORD *)v16 = v16;
  *(_QWORD *)(v16 + 24) = v16 + 16;
  *(_QWORD *)(v16 + 16) = v16 + 16;
  *(_DWORD *)(v16 + 40) = v12;
  *(_DWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 36) = v34;
  *(_DWORD *)(v16 + 44) = a3;
  *(_DWORD *)(v16 + 48) = a6;
  v18 = *(unsigned int *)(a1 + 272);
  LODWORD(Size) = (8 * ((*(_DWORD *)(v16 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000;
  v14 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, __int64, __int64 *, size_t))ExtEnvAllocatePhysicalMemory)(
          &v29,
          (unsigned int)Size,
          4096LL,
          v18,
          &v29,
          v16 + 56);
  if ( v14 >= 0 )
  {
    memset_0(*(void **)(v16 + 56), 0, (unsigned int)Size);
    v14 = IvtExtendScalableModePasidTables(a1);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v19) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v19, 15LL);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  if ( !a2 )
    goto LABEL_29;
  v13 = *(_DWORD **)(a2 + 80);
  if ( !v13 || a3 != v13[11] )
  {
    v13 = 0LL;
    goto LABEL_29;
  }
  if ( v34 > v13[9] || a4 >= v13[8] )
    v13 = 0LL;
  if ( !v13 )
  {
LABEL_29:
    if ( v14 < 0 )
      goto LABEL_46;
    if ( a2 && *(_QWORD *)v16 == v16 )
    {
      v21 = (size_t *)(a1 + 56);
      v22 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(v22 + 8) != a1 + 56 )
        goto LABEL_36;
      *(_QWORD *)v16 = v22;
      *(_QWORD *)(v16 + 8) = v21;
      *(_QWORD *)(v22 + 8) = v16;
      *v21 = v16;
    }
    if ( (_QWORD *)*v17 != v17 )
      goto LABEL_38;
    v23 = (_QWORD *)(a1 + 88);
    v24 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(v24 + 8) == a1 + 88 )
    {
      *v17 = v24;
      *(_QWORD *)(v16 + 24) = v23;
      *(_QWORD *)(v24 + 8) = v17;
      *v23 = v17;
      goto LABEL_38;
    }
LABEL_36:
    __fastfail(3u);
  }
  v32 = v16;
  v14 = 0;
  v16 = (size_t)v13;
LABEL_38:
  if ( a6 != *(_DWORD *)(v16 + 48) )
    *(_DWORD *)(v16 + 48) = 1;
  if ( v13 && (_DWORD *)v16 != v13 && *(_DWORD *)(v16 + 44) == v13[11] && ((v13[8] >> 6) & 0x3FFF) != 0 )
  {
    v25 = (void **)(v16 + 64);
    v26 = (v13[8] >> 6) & 0x3FFF;
    v27 = (char *)v13 - v16;
    do
    {
      memmove(*v25, *(const void **)&v27[(_QWORD)v25], 0x1000uLL);
      ++v25;
      --v26;
    }
    while ( v26 );
  }
LABEL_46:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v32 )
    IvtFreeScalableModePasidTables(a1, v32);
  if ( v14 >= 0 )
  {
    *a8 = v16;
    return (unsigned int)v14;
  }
LABEL_52:
  *a8 = 0LL;
  if ( v9 )
    *v9 = 0LL;
  return (unsigned int)v14;
}
