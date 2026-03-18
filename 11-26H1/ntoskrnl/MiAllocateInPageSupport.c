/*
 * XREFs of MiAllocateInPageSupport @ 0x140371500
 * Callers:
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x1403701DC (MiResolvePageFileFault.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140397270 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x14039742C (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  volatile signed __int64 *v14; // r12
  volatile signed __int64 *v15; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v18; // edx
  unsigned __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  unsigned __int64 v21; // rax
  volatile signed __int64 *v23; // r13
  struct _KTHREAD *v24; // rcx
  unsigned int v25; // eax
  int v26; // edx
  unsigned __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  unsigned __int64 v29; // rax
  struct _KTHREAD *v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+70h] [rbp+18h]

  v5 = 0LL;
  if ( a4 )
    v33 = *a4;
  else
    v33 = 0LL;
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
      v14 = a5;
      *v13 = 0LL;
      BYTE3(v13[2].Next) = 0;
      *((_BYTE *)&v13[3].Next + 11) = 0;
      v15 = a5;
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
        v18 |= 0x100000u;
        if ( EffectivePagePriorityThread )
          LOBYTE(v5) = EffectivePagePriorityThread - 1;
      }
      *((_DWORD *)&v13[11].Next + 3) = v18 | ((EffectivePagePriorityThread & 7 | (8 * (v5 & 7))) << 11);
      if ( (v9 & 2) != 0 )
      {
        v21 = KeAbPreAcquire((__int64)v13, 0LL, 0LL, v20);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            *(_BYTE *)(v21 + 33) |= 2u;
          else
            *(_BYTE *)(v21 + 10) = 1;
          v15 = (volatile signed __int64 *)v13;
        }
      }
      else if ( a5 && _InterlockedExchangeAdd64(a5, v19) + 1 <= 1 )
      {
        __fastfail(0xEu);
      }
      v13[14].Next = (_SLIST_ENTRY *)v15;
      v5 = (__int64)v13;
    }
    else
    {
      v14 = a5;
    }
    v10 = v9 & 1;
  }
  else
  {
    if ( v12 || (v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v11 + 39424))) != 0LL )
    {
      v14 = a5;
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
        v26 |= 0x100000u;
        if ( v25 )
          LOBYTE(v5) = v25 - 1;
      }
      *((_DWORD *)&v13[11].Next + 3) = v26 | ((v25 & 7 | (8 * (v5 & 7))) << 11);
      if ( (v9 & 2) != 0 )
      {
        v29 = KeAbPreAcquire((__int64)v13, 0LL, 0LL, v28);
        if ( v29 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            *(_BYTE *)(v29 + 33) |= 2u;
            v13[14].Next = v13;
            v5 = (__int64)v13;
            goto LABEL_20;
          }
          *(_BYTE *)(v29 + 10) = 1;
          v23 = (volatile signed __int64 *)v13;
        }
      }
      else if ( a5 && _InterlockedExchangeAdd64(a5, v27) + 1 <= 1 )
      {
        __fastfail(0xEu);
      }
      v13[14].Next = (_SLIST_ENTRY *)v23;
      v5 = (__int64)v13;
      goto LABEL_20;
    }
    if ( (v9 & 4) != 0 )
    {
      v14 = a5;
    }
    else
    {
      v30 = (struct _KTHREAD *)MiAllocateInPageSupportBlock(!(v9 & 1), 1LL);
      v14 = a5;
      v5 = (__int64)v30;
      if ( v30 )
        MiInitializeInPageSupport(v30);
    }
  }
LABEL_20:
  if ( v5 )
    return v5;
  if ( a4 )
  {
    MiUnlockProtoPoolPage(v33, 0x11u);
  }
  else
  {
    if ( !v10 )
      return 0LL;
    v9 &= ~1u;
    *a3 = 16;
  }
  v5 = MiGetInPageSupportBlock(v9, v14);
  if ( v5 )
    goto LABEL_48;
  if ( (v9 & 1) == 0 )
    return v5;
  *a3 = 16;
  v5 = MiGetInPageSupportBlock(v9 & 0xFFFFFFFE, v14);
  if ( v5 )
  {
LABEL_48:
    if ( !a4 )
      return v5;
    v31 = MiLockProtoPoolPage(a1, 0LL);
    if ( v31 )
    {
      *a4 = v31;
      return v5;
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v5);
  }
  return 0LL;
}
