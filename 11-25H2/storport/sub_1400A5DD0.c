/*
 * XREFs of sub_1400A5DD0 @ 0x1400A5DD0
 * Callers:
 *     sub_140059080 @ 0x140059080 (sub_140059080.c)
 * Callees:
 *     sub_1400A65CC @ 0x1400A65CC (sub_1400A65CC.c)
 */

__int64 __fastcall sub_1400A5DD0(__int64 a1, int a2, __int64 a3)
{
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  char v7; // r12
  unsigned int v8; // r14d
  __int64 i; // rdx
  _QWORD *v10; // rcx
  __int64 j; // rsi
  __int64 v12; // rdi
  _QWORD **v13; // r15
  _QWORD *v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  ULONGLONG v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  ULONGLONG v26; // [rsp+80h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v26 = UnbiasedInterruptTime;
  v7 = 0;
  v8 = 0;
  if ( (unsigned int)sub_1400A65CC(v5) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 968); i = (unsigned int)(i + 1) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(v5 + 960) + 264LL + 320 * i);
      if ( (_QWORD *)*v10 != v10 )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL); j = (unsigned int)(j + 1) )
        {
          v12 = a1 + 320 * j;
          v13 = (_QWORD **)(v12 + 264);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v12, &LockHandle);
          v14 = *(_QWORD **)(v12 + 264);
          v15 = a2;
          do
          {
            if ( v14 == v13 )
              break;
            v16 = v14[3];
            if ( (*(_BYTE *)(v16 + 506) & 2) == 0 )
            {
              v17 = *(v14 - 2);
              if ( v17 == -1LL || v17 >= v26 )
                break;
              if ( !v7 )
              {
                v5 = *(_QWORD *)(v16 + 24);
                v7 = 1;
                v8 = sub_1400A65CC(v5);
              }
            }
            v18 = *v14;
            if ( *(_QWORD **)(*v14 + 8LL) != v14 )
              goto LABEL_23;
            v19 = (_QWORD *)v14[1];
            if ( (_QWORD *)*v19 != v14 )
              goto LABEL_23;
            *v19 = v18;
            *(_QWORD *)(v18 + 8) = v19;
            v20 = v14[2] + 120LL;
            v21 = *(_QWORD *)v20;
            if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
            {
              v22 = *(_QWORD **)(v14[2] + 128LL);
              if ( *v22 == v20 )
              {
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
                --*(_DWORD *)(v12 + 24);
                v23 = *(_QWORD **)(a3 + 8);
                if ( *v23 == a3 )
                  continue;
              }
            }
LABEL_23:
            __fastfail(3u);
            *v14 = a3;
            ++v6;
            v14[1] = v23;
            *v23 = v14;
            *(_QWORD *)(a3 + 8) = v14;
            v14 = *v13;
          }
          while ( v6 != v15 );
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v6 == a2 )
            break;
        }
        if ( v7 )
        {
          if ( v8 > *(_DWORD *)(v5 + 5348) )
            *(_DWORD *)(v5 + 5348) = v8;
        }
        return v6;
      }
    }
  }
  return 0LL;
}
