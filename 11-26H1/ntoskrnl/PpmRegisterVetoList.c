/*
 * XREFs of PpmRegisterVetoList @ 0x1407CA1F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterVetoList(unsigned int *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _DWORD *Pool2; // rax
  _OWORD *v8; // rdx
  __int64 v9; // r9
  __int128 *v10; // r8
  __int128 v11; // xmm0

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, a2, a3, a4);
  v5 = 0;
  if ( stru_140E66FF0.IptSaveArea )
  {
    v5 = -1073741431;
  }
  else
  {
    v6 = *a1;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      if ( (_DWORD)v6 )
      {
        v8 = Pool2 + 4;
        v9 = v6;
        v10 = (__int128 *)(a1 + 2);
        do
        {
          v11 = *v10++;
          *v8 = v11;
          v8 = (_OWORD *)((char *)v8 + 24);
          --v9;
        }
        while ( v9 );
      }
      *Pool2 = v6;
      Pool2[1] = v6;
      stru_140E66FF0.IptSaveArea = Pool2;
    }
    else
    {
      v5 = -1073741670;
    }
  }
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
  return v5;
}
