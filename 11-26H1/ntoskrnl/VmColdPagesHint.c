/*
 * XREFs of VmColdPagesHint @ 0x1404B79D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     VmpLogColdHint @ 0x1406C6924 (VmpLogColdHint.c)
 *     ZwUnlockVirtualMemory @ 0x14072BBA0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, struct _LIST_ENTRY *a3)
{
  unsigned int v3; // ebx
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  KIRQL v9; // al
  struct _LIST_ENTRY *v10; // rdx
  KIRQL v11; // r8
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  ULONG_PTR RegionSize[2]; // [rsp+20h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  RegionSize[0] = 0LL;
  BaseAddress = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( Blink )
  {
    if ( Blink[7].Blink == a3 )
    {
      v6 = (struct _LIST_ENTRY *)(a1 >> 12);
      v7 = (a1 >> 12) + a2 - 1;
      v8 = 0LL;
      while ( 1 )
      {
        v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)Blink);
        v10 = Blink[2].Blink;
        v11 = v9;
        if ( !v10 || v6 > v10[3].Blink || v6 < v10[3].Flink )
        {
          v16 = (unsigned __int64)Blink->Blink;
          if ( ((__int64)Blink[1].Flink & 1) != 0 )
          {
            if ( v16 )
              v16 ^= (unsigned __int64)&Blink->Blink;
            else
              v16 = 0LL;
          }
          while ( v16 )
          {
            if ( (unsigned __int64)v6 > *(_QWORD *)(v16 + 32) )
            {
              v17 = *(_QWORD *)(v16 + 8);
            }
            else
            {
              if ( (unsigned __int64)v6 >= *(_QWORD *)(v16 + 24) )
                break;
              v17 = *(_QWORD *)v16;
            }
            if ( ((__int64)Blink[1].Flink & 1) != 0 && v17 )
              v16 ^= v17;
            else
              v16 = v17;
          }
          if ( !v16 )
            break;
          v10 = (struct _LIST_ENTRY *)(v16 - 24);
          Blink[2].Blink = (struct _LIST_ENTRY *)(v16 - 24);
          if ( v16 == 24 )
            break;
        }
        BaseAddress = v10[1].Flink[1].Blink;
        BaseAddress = (char *)v6 + (_QWORD)BaseAddress - (unsigned __int64)v10[3].Flink;
        v12 = (unsigned __int64)v10[3].Blink;
        if ( v12 >= v7 )
          v12 = v7;
        RegionSize[0] = v12 - (_QWORD)v6 + 1;
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)Blink, v11);
        v13 = RegionSize[0];
        v8 += RegionSize[0];
        v6 = (struct _LIST_ENTRY *)((char *)v6 + RegionSize[0]);
        if ( stru_140F06A28.InitialStack )
        {
          if ( *(_DWORD *)stru_140F06A28.InitialStack )
          {
            if ( (*((_BYTE *)stru_140F06A28.InitialStack + 16) & 4) != 0 )
            {
              v15 = *((_QWORD *)stru_140F06A28.InitialStack + 3);
              if ( (v15 & 4) == v15 )
              {
                VmpLogColdHint(v15, v6, BaseAddress, RegionSize[0]);
                v13 = RegionSize[0];
              }
            }
          }
        }
        BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
        RegionSize[0] = v13 << 12;
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 1u);
        if ( v8 >= a2 )
          return v3;
      }
      __int2c();
      v3 = -1073741688;
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)Blink, v11);
    }
    else
    {
      __int2c();
      return (unsigned int)-1073741558;
    }
  }
  else
  {
    __int2c();
    return (unsigned int)-1073741503;
  }
  return v3;
}
