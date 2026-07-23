/*
 * XREFs of MiReplenishSlabAllocatorByIdentity @ 0x1404FFD48
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiChangeSlabEntryIdentity @ 0x14070A8C8 (MiChangeSlabEntryIdentity.c)
 */

__int64 __fastcall MiReplenishSlabAllocatorByIdentity(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // r13d
  __int64 v4; // rsi
  unsigned int v5; // eax
  bool v6; // al
  int *v7; // rcx
  int v8; // r10d
  int *v9; // r9
  bool v10; // zf
  int *i; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v13; // bp
  KIRQL v14; // r12
  unsigned int v15; // r15d
  unsigned int v16; // edx
  int v17; // r10d
  unsigned int v18; // r9d
  __int64 v19; // r11
  unsigned int v20; // r14d
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 j; // r8
  unsigned int v24; // edx
  __int64 v25; // r10
  __int64 **v26; // rcx
  __int64 v27; // r9
  __int64 *v28; // rdx
  unsigned int v30; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v30 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(56320LL * *(unsigned int *)(a1 + 132) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 56112);
  v5 = *(_DWORD *)(v4 + 314064);
  if ( v5 )
  {
    if ( v5 <= 1 )
    {
      v6 = !_bittest(*(const signed __int32 **)(v4 + 314072), 0);
      goto LABEL_13;
    }
    v7 = *(int **)(v4 + 314072);
    v8 = *v7;
    v9 = &v7[(unsigned __int64)(v5 - 1) >> 5];
    if ( v7 == v9 )
    {
      v10 = ((0xFFFFFFFF >> (32 - v5)) & v8) == 0;
LABEL_12:
      v6 = v10;
LABEL_13:
      if ( v6 )
        return v1;
      goto LABEL_14;
    }
    if ( !v8 )
    {
      for ( i = v7 + 1; i != v9; ++i )
      {
        if ( *i )
          goto LABEL_14;
      }
      v10 = ((0xFFFFFFFF >> ~(v5 - 1)) & *i) == 0;
      goto LABEL_12;
    }
  }
LABEL_14:
  CurrentThread = KeGetCurrentThread();
  v13 = CurrentThread[1].SavedApcStateFill[15];
  if ( v13 == 0xFF || (BYTE2(CurrentThread[1].Queue) & 1) != 0 )
    v13 = BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes);
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
LABEL_18:
  v15 = *(_DWORD *)(v4 + 314064);
  v16 = v15 - 1;
  v17 = (*(_DWORD *)(v4 + 314072) & 4) != 0LL ? 0x20 : 0;
  v18 = v3 < v15 ? v3 : 0;
  v19 = *(_QWORD *)(v4 + 314072) - ((*(_QWORD *)(v4 + 314072) & 4LL) != 0 ? 4 : 0);
  while ( 1 )
  {
    v20 = v17 + v16;
    if ( v16 - v18 != -1 )
      break;
    v21 = 0xFFFFFFFFLL;
LABEL_28:
    if ( !v18 )
      goto LABEL_34;
    v24 = v3 + 1;
    v18 = 0;
    if ( v3 + 1 > v15 )
      v24 = *(_DWORD *)(v4 + 314064);
    v16 = v24 - 1;
  }
  v22 = (_QWORD *)(v19 + 8 * ((unsigned __int64)(v17 + v18) >> 6));
  for ( j = ~*v22 | ((1LL << ((unsigned __int8)v17 + (unsigned __int8)v18)) - 1); j == -1; j = ~*v22 )
  {
    if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)v20 >> 6) )
      goto LABEL_32;
  }
  _BitScanForward64((unsigned __int64 *)&j, ~j);
  v21 = ((unsigned int)(((__int64)v22 - v19) >> 3) << 6) + (unsigned int)j;
  if ( (unsigned int)v21 > v20 )
  {
LABEL_32:
    v21 = 0xFFFFFFFFLL;
    goto LABEL_27;
  }
  if ( (_DWORD)v21 == -1 )
  {
LABEL_27:
    v3 = v30;
    goto LABEL_28;
  }
  v21 = (unsigned int)(v21 - v17);
LABEL_34:
  if ( (_DWORD)v21 != -1 )
  {
    v25 = 16LL * (unsigned int)v21;
    v26 = (__int64 **)(v25 + *(_QWORD *)(a1 + 88));
    v27 = (unsigned int)v21;
    v28 = *v26;
    while ( 1 )
    {
      if ( v28 == (__int64 *)v26 )
      {
        v3 = v21 + 1;
        v30 = v21 + 1;
        *(_BYTE *)(((unsigned __int64)(unsigned int)v21 >> 3) + *(_QWORD *)(v4 + 314072)) &= ~(1 << (v21 & 7));
        goto LABEL_18;
      }
      if ( *((_DWORD *)v28 + 15) == LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3]) )
        break;
      v28 = (__int64 *)*v28;
      v26 = (__int64 **)(v25 + *(_QWORD *)(a1 + 88));
    }
    LOBYTE(v21) = v13;
    MiChangeSlabEntryIdentity(a1, v28 - 3, v21, v27);
    v1 = 1;
  }
  if ( v14 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16), v14);
  return v1;
}
