/*
 * XREFs of MiAllocateInPageSupport @ 0x1403732B0
 * Callers:
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140398FF0 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x1403991AC (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiAllocateInPageSupport(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 *a4,
        volatile signed __int64 *a5)
{
  __int64 v5; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // ebp
  __int64 v11; // r12
  PSLIST_ENTRY v12; // rax
  PSLIST_ENTRY v13; // r14
  __int64 v14; // rdx
  signed __int64 v15; // r8
  volatile signed __int64 *v16; // r12
  volatile signed __int64 *v17; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  struct _KLOCK_ENTRIES *v20; // r9
  unsigned __int64 v21; // rax
  volatile signed __int64 *v23; // r13
  struct _KTHREAD *v24; // rcx
  unsigned int v25; // eax
  struct _KLOCK_ENTRIES *v26; // r9
  unsigned __int64 v27; // rax
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  __int64 v31; // [rsp+70h] [rbp+18h]

  v5 = 0LL;
  if ( a4 )
    v31 = *a4;
  else
    v31 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9 & 1;
  v11 = 16LL * !(v9 & 1);
  v12 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v11 + 39392));
  v13 = v12;
  if ( a4 )
  {
    if ( v12 || (v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v11 + 39424))) != 0LL )
    {
      v16 = a5;
      *v13 = 0LL;
      BYTE3(v13[2].Next) = 0;
      *((_BYTE *)&v13[3].Next + 11) = 0;
      v17 = a5;
      memset_0(&v13[5], 0, 0x60uLL);
      memset_0((char *)&v13[11].Next + 4, 0, 0x8CuLL);
      LOWORD(v13[2].Next) = 0;
      BYTE2(v13[2].Next) = 6;
      HIDWORD(v13[2].Next) = 0;
      v13[3].Next = (PSLIST_ENTRY)((char *)v13 + 40);
      *((_QWORD *)&v13[2].Next + 1) = (char *)v13 + 40;
      *((_WORD *)&v13[3].Next + 4) = 0;
      *((_BYTE *)&v13[3].Next + 10) = 6;
      *((_DWORD *)&v13[3].Next + 3) = 0;
      *((_QWORD *)&v13[4].Next + 1) = v13 + 4;
      v13[4].Next = v13 + 4;
      LODWORD(v13[11].Next) = 1;
      *((_QWORD *)&v13[1].Next + 1) = v13 + 1;
      v13[1].Next = v13 + 1;
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v13[9].Next + 1) = CurrentThread;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
      if ( EffectivePagePriorityThread > 5 )
      {
        LOBYTE(EffectivePagePriorityThread) = 5;
        LOBYTE(v5) = 5;
      }
      else
      {
        LODWORD(v14) = v14 | 0x100000;
        if ( EffectivePagePriorityThread )
          LOBYTE(v5) = EffectivePagePriorityThread - 1;
      }
      *((_DWORD *)&v13[11].Next + 3) = v14 | ((EffectivePagePriorityThread & 7 | (8 * (v5 & 7))) << 11);
      if ( (v9 & 2) != 0 )
      {
        v21 = KeAbPreAcquire((__int64)v13, 0LL, 0LL, v20);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *(_BYTE *)(v21 + 33) |= 2u;
          else
            *(_BYTE *)(v21 + 10) = 1;
          v17 = (volatile signed __int64 *)v13;
        }
      }
      else if ( a5 )
      {
        v15 = _InterlockedExchangeAdd64(a5, v15) + 1;
        if ( v15 <= 1 )
          __fastfail(0xEu);
      }
      v13[14].Next = (_SLIST_ENTRY *)v17;
      v5 = (__int64)v13;
    }
    else
    {
      v16 = a5;
    }
    v10 = v9 & 1;
  }
  else
  {
    if ( v12 || (v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v11 + 39424))) != 0LL )
    {
      v16 = a5;
      *v13 = 0LL;
      BYTE3(v13[2].Next) = 0;
      *((_BYTE *)&v13[3].Next + 11) = 0;
      v23 = a5;
      memset_0(&v13[5], 0, 0x60uLL);
      memset_0((char *)&v13[11].Next + 4, 0, 0x8CuLL);
      LOWORD(v13[2].Next) = 0;
      BYTE2(v13[2].Next) = 6;
      HIDWORD(v13[2].Next) = 0;
      v13[3].Next = (PSLIST_ENTRY)((char *)v13 + 40);
      *((_QWORD *)&v13[2].Next + 1) = (char *)v13 + 40;
      *((_WORD *)&v13[3].Next + 4) = 0;
      *((_BYTE *)&v13[3].Next + 10) = 6;
      *((_DWORD *)&v13[3].Next + 3) = 0;
      *((_QWORD *)&v13[4].Next + 1) = v13 + 4;
      v13[4].Next = v13 + 4;
      LODWORD(v13[11].Next) = 1;
      *((_QWORD *)&v13[1].Next + 1) = v13 + 1;
      v13[1].Next = v13 + 1;
      v24 = KeGetCurrentThread();
      *((_QWORD *)&v13[9].Next + 1) = v24;
      v25 = MiGetEffectivePagePriorityThread(v24);
      if ( v25 > 5 )
      {
        LOBYTE(v25) = 5;
        LOBYTE(v5) = 5;
      }
      else
      {
        LODWORD(v14) = v14 | 0x100000;
        if ( v25 )
          LOBYTE(v5) = v25 - 1;
      }
      *((_DWORD *)&v13[11].Next + 3) = v14 | ((v25 & 7 | (8 * (v5 & 7))) << 11);
      if ( (v9 & 2) != 0 )
      {
        v27 = KeAbPreAcquire((__int64)v13, 0LL, 0LL, v26);
        if ( v27 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            *(_BYTE *)(v27 + 33) |= 2u;
            v13[14].Next = v13;
            v5 = (__int64)v13;
            goto LABEL_20;
          }
          *(_BYTE *)(v27 + 10) = 1;
          v23 = (volatile signed __int64 *)v13;
        }
      }
      else if ( a5 )
      {
        v15 = _InterlockedExchangeAdd64(a5, v15) + 1;
        if ( v15 <= 1 )
          __fastfail(0xEu);
      }
      v13[14].Next = (_SLIST_ENTRY *)v23;
      v5 = (__int64)v13;
      goto LABEL_20;
    }
    if ( (v9 & 4) != 0 )
    {
      v16 = a5;
    }
    else
    {
      v28 = (struct _KTHREAD *)MiAllocateInPageSupportBlock(!(v9 & 1), 1LL);
      v16 = a5;
      v5 = (__int64)v28;
      if ( v28 )
        MiInitializeInPageSupport(v28);
    }
  }
LABEL_20:
  if ( v5 )
    return v5;
  if ( a4 )
  {
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(v31, v14, v15);
  }
  else
  {
    if ( !v10 )
      return 0LL;
    v9 &= ~1u;
    *a3 = 16;
  }
  v5 = MiGetInPageSupportBlock(v9, v16);
  if ( v5 )
    goto LABEL_48;
  if ( (v9 & 1) == 0 )
    return v5;
  *a3 = 16;
  v5 = MiGetInPageSupportBlock(v9 & 0xFFFFFFFE, v16);
  if ( v5 )
  {
LABEL_48:
    if ( !a4 )
      return v5;
    v29 = MiLockProtoPoolPage(a1, 0LL);
    if ( v29 )
    {
      *a4 = v29;
      return v5;
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v5);
  }
  return 0LL;
}
