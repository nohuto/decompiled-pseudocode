/*
 * XREFs of VmColdPagesHint @ 0x1404BE180
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     VmpLogColdHint @ 0x1406C2D44 (VmpLogColdHint.c)
 *     ZwUnlockVirtualMemory @ 0x140726FD0 (ZwUnlockVirtualMemory.c)
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
  __int64 v13; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v18 = 0LL;
  v19 = 0LL;
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
        v19 = v10[1].Flink[1].Blink;
        v19 = (struct _LIST_ENTRY *)((char *)v6 + (char *)v19 - (char *)v10[3].Flink);
        v12 = (unsigned __int64)v10[3].Blink;
        if ( v12 >= v7 )
          v12 = v7;
        v18 = v12 - (_QWORD)v6 + 1;
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)Blink, v11);
        v13 = v18;
        v8 += v18;
        v6 = (struct _LIST_ENTRY *)((char *)v6 + v18);
        if ( stru_140F066E8.QuantumTarget )
        {
          if ( *(_DWORD *)stru_140F066E8.QuantumTarget )
          {
            if ( (*(_BYTE *)(stru_140F066E8.QuantumTarget + 16) & 4) != 0 )
            {
              v15 = *(_QWORD *)(stru_140F066E8.QuantumTarget + 24);
              if ( (v15 & 4) == v15 )
              {
                VmpLogColdHint(v15, v6, v19, v18);
                v13 = v18;
              }
            }
          }
        }
        v19 = (struct _LIST_ENTRY *)((_QWORD)v19 << 12);
        v18 = v13 << 12;
        ZwUnlockVirtualMemory(-1LL, &v19, &v18, 1LL);
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
