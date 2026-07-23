/*
 * XREFs of ExpCapturePoolTrackTables @ 0x140529B0C
 * Callers:
 *     ExGetPoolTagInfo2 @ 0x14083DAC8 (ExGetPoolTagInfo2.c)
 *     ExGetPoolTagInfo @ 0x140B5A170 (ExGetPoolTagInfo.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAllocatePoolTrackTableSnapshot @ 0x140530FF8 (ExpAllocatePoolTrackTableSnapshot.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCapturePoolTrackTables(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  char *StackLimit; // rdi
  __int64 v4; // rsi
  ULONG v5; // ebp
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  char *i; // rbp
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r8
  char *v14; // r11
  unsigned __int64 *v15; // rbx
  char *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  PVOID v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  StackLimit = (char *)stru_140EFF2C0.StackLimit;
  v4 = PoolTrackTableExpansionSize;
  v5 = ActiveProcessorCount;
  if ( (void *volatile)((unsigned __int64)stru_140EFF2C0.StackLimit + PoolTrackTableExpansionSize) < stru_140EFF2C0.StackLimit )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v6 = 64LL;
    if ( !PoolTrackTableExpansionSize )
      v6 = 256LL;
    v7 = ExpAllocatePoolTrackTableSnapshot(v6, (char *)stru_140EFF2C0.StackLimit + PoolTrackTableExpansionSize, &P);
    if ( v7 < 0 )
    {
      v20 = P;
    }
    else
    {
      v8 = v5;
      v9 = 0LL;
      for ( i = (char *)P; v9 < v8; ++v9 )
      {
        v11 = *(&stru_140EFF2C0.ThreadLock + v9);
        if ( v11 && StackLimit )
        {
          v12 = i + 24;
          v13 = v11 - (_QWORD)i;
          v14 = StackLimit;
          do
          {
            if ( !*((_DWORD *)v12 - 4) )
              *((_DWORD *)v12 - 4) = *(_DWORD *)((char *)v12 + v13 - 24);
            *(v12 - 1) += *(_QWORD *)((char *)v12 + v13 - 16);
            *v12 += *(_QWORD *)((char *)v12 + v13 - 8);
            v12[1] += *(_QWORD *)((char *)v12 + v13);
            v12[2] += *(_QWORD *)((char *)v12 + v13 + 8);
            v12[3] += *(_QWORD *)((char *)v12 + v13 + 16);
            v12[4] += *(_QWORD *)((char *)v12 + v13 + 24);
            v12 += 10;
            --v14;
          }
          while ( v14 );
        }
      }
      if ( StackLimit )
      {
        v15 = (unsigned __int64 *)(i + 32);
        v16 = StackLimit;
        while ( 1 )
        {
          if ( !*((_DWORD *)v15 - 6) )
          {
            memset_0(v15 - 3, 0, 0x50uLL);
            goto LABEL_27;
          }
          v17 = *(v15 - 1);
          if ( v17 <= *v15 )
            break;
          if ( (__int64)*(v15 - 2) <= 0 )
          {
            *v15 = v17;
            goto LABEL_21;
          }
LABEL_22:
          v18 = v15[3];
          v19 = v15[2];
          if ( v19 <= v18 )
          {
            v15[2] = v18;
LABEL_26:
            v15[1] = 0LL;
            goto LABEL_27;
          }
          if ( (__int64)v15[1] <= 0 )
          {
            v15[3] = v19;
            goto LABEL_26;
          }
LABEL_27:
          v15 += 10;
          if ( !--v16 )
            goto LABEL_28;
        }
        *(v15 - 1) = *v15;
LABEL_21:
        *(v15 - 2) = 0LL;
        goto LABEL_22;
      }
LABEL_28:
      if ( v4 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        memmove(&i[80 * (_QWORD)StackLimit + 8], (const void *)PoolTrackTableExpansion, 80 * v4);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v20 = 0LL;
      *a1 = i;
      v7 = 0;
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  return (unsigned int)v7;
}
