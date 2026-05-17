/*
 * XREFs of TpTrimPools @ 0x1800E86D0
 * Callers:
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x18015FA90 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

struct _TEB *__fastcall TpTrimPools(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // r14
  _UNKNOWN **v3; // rbx
  volatile signed __int64 *v4; // rbp
  __int64 v5; // rdx
  volatile signed __int64 *v6; // r15
  char v7; // r13
  unsigned int v8; // r8d
  int v9; // r9d
  int v10; // eax
  _QWORD *v11; // rsi
  __int64 Heap_0; // r12
  __int64 v13; // r15
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // r10d
  __int64 v24; // rbx
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v31; // [rsp+80h] [rbp+18h]

  v29 = 0;
  v30 = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock, a2);
  v2 = (_UNKNOWN **)TppPoolpList;
  while ( v2 != &TppPoolpList )
  {
    v3 = v2;
    v2 = (_UNKNOWN **)*v2;
    v4 = (volatile signed __int64 *)(v3 - 2);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v3 - 2);
    if ( *((_BYTE *)v3 - 7) )
      goto LABEL_4;
    v6 = (volatile signed __int64 *)(v3 - 39);
    v31 = (volatile signed __int64 *)(v3 - 39);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v3 - 39, v5);
    v29 = 0;
    v7 = 1;
    if ( (int)NtSetInformationWorkerFactory(*(v3 - 41), 12LL, &v29, 4LL) >= 0 && v29 )
    {
      v8 = *((_DWORD *)v3 + 13) & 0xFFFFF001 | (2 * (v29 & 0x7FF));
      v9 = 0;
      for ( *((_DWORD *)v3 + 13) = v8; ((v8 >> 11) & 0xFFE) < (v8 & 0xFFE); v9 = v10 )
      {
        if ( v9 == 258 )
          break;
        v10 = RtlSleepConditionVariableSRW((signed __int64 *)v3 + 8, (signed __int64)(v3 - 39), (__int64)&v30, 0);
        v8 = *((_DWORD *)v3 + 13);
      }
      if ( (v8 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v3 + 13) = v8 & 0xFFFFF001;
        goto LABEL_34;
      }
      v11 = v3 + 9;
      Heap_0 = RtlAllocateHeap_0();
      if ( !Heap_0 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)*v11;
          if ( (_QWORD *)*v11 == v11 )
            break;
          v27 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v28 = (_QWORD *)v26[1], (_QWORD *)*v28 != v26) )
LABEL_21:
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          NtClose((HANDLE)v26[2]);
          RtlFreeHeap_0();
        }
        *((_DWORD *)v3 + 13) &= 0xFF800001;
        goto LABEL_34;
      }
      v13 = RtlAllocateHeap_0();
      if ( v13 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          v15 = (_QWORD *)*v11;
          if ( (_QWORD *)*v11 == v11 )
            break;
          *(_QWORD *)(Heap_0 + 8 * v14) = v15[2];
          *(_QWORD *)(v13 + 8 * v14) = v15;
          v16 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 )
            goto LABEL_21;
          v17 = (_QWORD *)v15[1];
          if ( (_QWORD *)*v17 != v15 )
            goto LABEL_21;
          *v17 = v16;
          v14 = (unsigned int)(v14 + 1);
          *(_QWORD *)(v16 + 8) = v17;
        }
        *((_DWORD *)v3 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3 - 39);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v3 - 2);
        v7 = 0;
        v21 = 0;
        do
        {
          v22 = v21 << 6;
          if ( (unsigned int)v22 >= (unsigned int)v14 )
            break;
          v23 = (int)v22 + 64 <= (unsigned int)v14 ? 64 : v14 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v23, Heap_0 + 8 * v22, 0LL, 0LL, &v30) == 258 )
            break;
          ++v21;
        }
        while ( v21 <= (unsigned int)v14 >> 6 );
        if ( (_DWORD)v14 )
        {
          v24 = v13;
          do
          {
            NtClose(*(HANDLE *)(v24 + Heap_0 - v13));
            RtlFreeHeap_0();
            v24 += 8LL;
            --v14;
          }
          while ( v14 );
        }
        RtlFreeHeap_0();
      }
      else
      {
        while ( 1 )
        {
          v18 = (_QWORD *)*v11;
          if ( (_QWORD *)*v11 == v11 )
            break;
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 )
            goto LABEL_21;
          v20 = (_QWORD *)v18[1];
          if ( (_QWORD *)*v20 != v18 )
            goto LABEL_21;
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          NtClose((HANDLE)v18[2]);
          RtlFreeHeap_0();
        }
        *((_DWORD *)v3 + 13) &= 0xFF800001;
      }
      RtlFreeHeap_0();
      if ( v7 )
      {
        v6 = v31;
        goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      RtlReleaseSRWLockExclusive(v6);
LABEL_4:
      RtlReleaseSRWLockShared(v4);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
