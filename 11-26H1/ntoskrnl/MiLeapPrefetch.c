/*
 * XREFs of MiLeapPrefetch @ 0x1403164F4
 * Callers:
 *     MiPrefetchJumpVad @ 0x140316388 (MiPrefetchJumpVad.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rbp
  __int64 v7; // rdx
  char v8; // r9
  __int64 NextVad; // r8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx

  v2 = a2;
  if ( a2 )
  {
LABEL_16:
    v13 = a1[1];
    v14 = *(_QWORD *)(v13 + 16LL * a1[3]) & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 < v14
      || v2 >= v14
             + (((*(_DWORD *)(v13 + 16LL * a1[3]) & 0xFFF) + *(_QWORD *)(v13 + 16LL * a1[3] + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      goto LABEL_18;
    }
    a1[4] = (v2 - v14) >> 12;
  }
  else
  {
    v4 = (a1[4] << 12) + *(_QWORD *)(a1[1] + 16LL * a1[3]);
    if ( v4 < 0x7FFFFFFF0000LL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( ((__int64)CurrentThread[1].Queue & 0x4080) == 0 && ((__int64)CurrentThread[1].Queue & 3) == 0 )
      {
        Process = CurrentThread->ApcState.Process;
        v8 = MiLockVadTree(0LL);
        if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0
          || (NextVad = *(_QWORD *)&Process[3].Header.Lock) == 0 )
        {
          v15 = 0;
LABEL_24:
          LOBYTE(v7) = v8;
          MiUnlockVadTree(0LL, v7);
          return v15;
        }
        v10 = v4 >> 12;
        while ( 1 )
        {
          v7 = *(unsigned int *)(NextVad + 24);
          if ( v10 < (v7 | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) )
          {
            v11 = *(_QWORD *)NextVad;
          }
          else
          {
            if ( v10 <= (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
            {
              v15 = 1;
              goto LABEL_24;
            }
            v11 = *(_QWORD *)(NextVad + 8);
          }
          if ( !v11 )
            break;
          NextVad = v11;
        }
        v12 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
        if ( v12 >= v10 || (NextVad = MiGetNextVad(NextVad)) != 0 )
        {
          LOBYTE(v12) = v8;
          v2 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
          MiUnlockVadTree(0LL, v12);
          goto LABEL_16;
        }
        LOBYTE(v12) = v8;
        MiUnlockVadTree(0LL, v12);
LABEL_18:
        v15 = 1;
        a1[4] = 0LL;
        ++a1[3];
        return v15;
      }
    }
  }
  return 1LL;
}
