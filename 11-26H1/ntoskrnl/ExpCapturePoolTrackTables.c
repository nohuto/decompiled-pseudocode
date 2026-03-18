/*
 * XREFs of ExpCapturePoolTrackTables @ 0x14052749C
 * Callers:
 *     ExGetPoolTagInfo2 @ 0x140837888 (ExGetPoolTagInfo2.c)
 *     ExGetPoolTagInfo @ 0x140B5721C (ExGetPoolTagInfo.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAllocatePoolTrackTableSnapshot @ 0x14052EAD8 (ExpAllocatePoolTrackTableSnapshot.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCapturePoolTrackTables(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // rdi
  void *InitialStack; // rsi
  ULONG v5; // ebp
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  char *i; // rbp
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned __int64 *v15; // rbx
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  PVOID v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  P = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = PoolTrackTableSize;
  InitialStack = stru_140EFEF90.InitialStack;
  v5 = ActiveProcessorCount;
  if ( (char *)stru_140EFEF90.InitialStack + PoolTrackTableSize < (void *)PoolTrackTableSize )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v6 = 64LL;
    if ( !stru_140EFEF90.InitialStack )
      v6 = 256LL;
    v7 = ExpAllocatePoolTrackTableSnapshot(v6, (char *)stru_140EFEF90.InitialStack + PoolTrackTableSize, &P);
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
        v11 = *((_QWORD *)&stru_140EFEF90.CurrentRunTime + v9);
        if ( v11 && v3 )
        {
          v12 = i + 24;
          v13 = v11 - (_QWORD)i;
          v14 = v3;
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
      if ( v3 )
      {
        v15 = (unsigned __int64 *)(i + 32);
        v16 = v3;
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
      if ( InitialStack )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Blink, &LockHandle);
        memmove(&i[80 * v3 + 8], (const void *)stru_140EFEF90.ThreadLock, 80LL * (_QWORD)InitialStack);
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
