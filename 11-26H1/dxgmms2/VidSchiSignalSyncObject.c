/*
 * XREFs of VidSchiSignalSyncObject @ 0x140008708
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140008000 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // edx
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned int *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 8LL * a1);
  if ( !a5 )
    goto LABEL_18;
  v8 = *(_DWORD *)(v7 + 48);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v18 = *(_DWORD *)(v7 + 72);
      if ( v18 >= *(_DWORD *)(v7 + 68) )
      {
        WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
        WdLogGlobalForLineNumber = 26559;
      }
      else
      {
        *(_DWORD *)(v7 + 72) = v18 + 1;
      }
      goto LABEL_18;
    }
    if ( v8 == 2 )
    {
      if ( !*(_BYTE *)(v7 + 28) )
      {
        v19 = *(_QWORD *)(v7 + 72);
        v20 = *(_QWORD *)(a4 + 8LL * a1);
        if ( v19 >= v20 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v19, v20);
          WdLogGlobalForLineNumber = 26594;
        }
        else
        {
          *(_QWORD *)(v7 + 72) = v20;
        }
        goto LABEL_18;
      }
LABEL_26:
      v15 = *(_QWORD *)(v7 + 344);
      v16 = *(_QWORD *)(a4 + 8LL * a1);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 8), &LockHandle);
      v17 = *(_QWORD *)(v15 + 40);
      if ( v17 >= v16 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v17, v16);
        WdLogGlobalForLineNumber = 6247;
      }
      else
      {
        *(_QWORD *)(v15 + 40) = v16;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_18;
    }
    if ( (v8 == 4 || (unsigned int)(v8 - 5) <= 1) && !*(_BYTE *)(v7 + 29) )
    {
      if ( !*(_BYTE *)(v7 + 28) )
      {
        if ( (a3 & 4) != 0 )
        {
LABEL_10:
          v9 = *(_QWORD *)(a4 + 8 * v6);
          if ( *(_BYTE *)(v7 + 28) )
          {
            v21 = *(_QWORD *)(v7 + 344);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 8), &LockHandle);
            v22 = *(_QWORD *)(v21 + 40);
            if ( v22 >= v9 )
            {
              WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v22, v9);
              WdLogGlobalForLineNumber = 6247;
            }
            else
            {
              *(_QWORD *)(v21 + 40) = v9;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            v10 = *(_DWORD *)(v7 + 48);
            if ( v10 == 2 )
            {
              *(_QWORD *)(v7 + 72) = v9;
            }
            else if ( v10 == 6 )
            {
              *(_QWORD *)(v7 + 200) = v9;
            }
            else
            {
              *(_QWORD *)(v7 + 96) = v9;
            }
          }
LABEL_14:
          if ( *(_DWORD *)(v7 + 48) == 6 )
          {
            v12 = *(_QWORD *)(*(unsigned int *)(v7 + 80) + *(_QWORD *)(*(_QWORD *)(v7 + 64) + 192LL));
          }
          else
          {
            v11 = *(unsigned int **)(v7 + 72);
            if ( *(_BYTE *)(v7 + 30) )
              v12 = *(_QWORD *)v11;
            else
              v12 = *v11;
          }
          WdLogSingleEntry4(4LL, v7, v12, *(_QWORD *)(a4 + 8 * v6), *(unsigned __int8 *)(v7 + 29));
          WdLogGlobalForLineNumber = 26634;
          goto LABEL_18;
        }
        v13 = *(_QWORD *)(a4 + 8LL * a1);
        if ( v8 == 6 )
          v14 = *(_QWORD *)(v7 + 200);
        else
          v14 = *(_QWORD *)(v7 + 96);
        if ( *(_BYTE *)(v7 + 30) )
        {
          if ( v13 >= v14 )
          {
            if ( v13 == v14 )
            {
              WdLogSingleEntry1(3LL, *(_QWORD *)(a4 + 8 * v6));
              WdLogGlobalForLineNumber = 6028;
            }
            goto LABEL_10;
          }
          WdLogSingleEntry2(3LL, *(_QWORD *)(a4 + 8 * v6), v14);
          WdLogGlobalForLineNumber = 6019;
        }
        else
        {
          if ( (int)v14 - (int)v13 <= 0 )
          {
            if ( (_DWORD)v14 == (_DWORD)v13 )
            {
              WdLogSingleEntry1(3LL, (unsigned int)v13);
              WdLogGlobalForLineNumber = 6047;
            }
            goto LABEL_10;
          }
          WdLogSingleEntry2(3LL, (unsigned int)v13, (unsigned int)v14);
          WdLogGlobalForLineNumber = 6038;
        }
        if ( *(_BYTE *)(v7 + 28) )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v7 + 344) + 40LL);
        }
        else
        {
          v23 = *(_DWORD *)(v7 + 48);
          if ( v23 == 2 )
          {
            v24 = *(_QWORD *)(v7 + 72);
          }
          else if ( v23 == 6 )
          {
            v24 = *(_QWORD *)(v7 + 200);
          }
          else
          {
            v24 = *(_QWORD *)(v7 + 96);
          }
        }
        WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v24, *(_QWORD *)(a4 + 8 * v6));
        WdLogGlobalForLineNumber = 26626;
        goto LABEL_14;
      }
      goto LABEL_26;
    }
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 72) )
    {
      WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
      WdLogGlobalForLineNumber = 26545;
    }
    *(_QWORD *)(v7 + 72) = 0LL;
  }
LABEL_18:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
}
