/*
 * XREFs of VmpAccessFaultBatch @ 0x1406C45B0
 * Callers:
 *     VmpAccessFault @ 0x1408224C4 (VmpAccessFault.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     VmpFaultEntryInsert @ 0x1406C4A08 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1406C4B14 (VmpFaultEntryRemove.c)
 *     VmpProcessUpdateSlat @ 0x1406C5468 (VmpProcessUpdateSlat.c)
 *     VmpAccessFaultBatchResolve @ 0x140822998 (VmpAccessFaultBatchResolve.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  const signed __int64 *v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  PEX_SPIN_LOCK v12; // rbp
  int updated; // ebx
  KIRQL v14; // r12
  int v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx

  v8 = a4;
  v9 = (const signed __int64 *)(a2 + 32);
  LODWORD(v10) = a3;
  v11 = a2;
  v12 = SpinLock;
  while ( 1 )
  {
    VmpFaultEntryInsert(v12, v11, (unsigned int)v10);
    updated = VmpAccessFaultBatchResolve((_DWORD)v12, v11, v10, v8, a5, a6, a7);
    if ( updated < 0 )
      break;
    v14 = ExAcquireSpinLockShared(v12);
    if ( *((_QWORD *)v12 + 15) != a8 )
    {
      updated = -1073741558;
LABEL_25:
      ExReleaseSpinLockShared(v12, v14);
      break;
    }
    v15 = 0;
    v16 = 48LL * (unsigned int)v10;
    v17 = v16 + v11;
    if ( v11 < v16 + v11 )
    {
      v18 = (v16 - 1) / 0x30uLL + 1;
      do
      {
        if ( (*(v9 - 1) & 0x10000000000000LL) != 0 || _bittest64(v9, 0x39u) )
        {
          *v9 |= 0x100000000000000uLL;
          ++v15;
        }
        v9 += 6;
        --v18;
      }
      while ( v18 );
      v11 = a2;
      v12 = SpinLock;
    }
    if ( v15 != (_DWORD)v10 )
    {
      updated = VmpProcessUpdateSlat((_DWORD)v12, v11, v10, a4, a5);
      if ( updated < 0 )
        goto LABEL_25;
    }
    ExReleaseSpinLockShared(v12, v14);
    VmpFaultEntryRemove(v12, v11, (unsigned int)v10);
    if ( !v15 )
      return 0;
    v10 = 0LL;
    if ( v11 >= v17 )
      return 0;
    v9 = (const signed __int64 *)(v11 + 32);
    v19 = (__int64 *)(v11 + 32);
    do
    {
      v20 = *v19;
      if ( (*v19 & 0x100000000000000LL) != 0 )
      {
        if ( (v20 & 0x200000000000000LL) == 0 )
        {
          *(v19 - 1) &= ~0x10000000000000uLL;
          *v19 = v20 & 0xFFFFFFFFFFFFFLL;
          v21 = 6 * v10;
          v10 = (unsigned int)(v10 + 1);
          *(_OWORD *)(v11 + 8 * v21) = *((_OWORD *)v19 - 2);
          *(_OWORD *)(v11 + 8 * v21 + 16) = *((_OWORD *)v19 - 1);
          *(_OWORD *)(v11 + 8 * v21 + 32) = *(_OWORD *)v19;
        }
        if ( !--v15 )
          break;
      }
      v19 += 6;
    }
    while ( (unsigned __int64)(v19 - 4) < v17 );
    v12 = SpinLock;
    if ( !(_DWORD)v10 )
      return 0;
    v8 = a4;
  }
  VmpFaultEntryRemove(v12, v11, (unsigned int)v10);
  return (unsigned int)updated;
}
