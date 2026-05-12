/*
 * XREFs of sub_140033A28 @ 0x140033A28
 * Callers:
 *     sub_1400330B8 @ 0x1400330B8 (sub_1400330B8.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140033DA4 @ 0x140033DA4 (sub_140033DA4.c)
 *     sub_140033E20 @ 0x140033E20 (sub_140033E20.c)
 */

__int64 __fastcall sub_140033A28(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  KSPIN_LOCK *v12; // rdi
  KSPIN_LOCK *v13; // rax
  __int64 *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ecx
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+38h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+C0h] [rbp+50h]
  __int64 v22; // [rsp+C8h] [rbp+58h]

  v4 = 0LL;
  v6 = a1;
  memset(&v18, 0, sizeof(v18));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v17, 0, sizeof(v17));
  if ( !a1 )
    *a2 = 0;
  v7 = sub_140033DA4(
         a1,
         a2,
         a3,
         a4,
         v17.LockQueue.Next,
         v17.LockQueue.Lock,
         *(_QWORD *)&v17.OldIrql,
         v18.LockQueue.Next,
         v18.LockQueue.Lock);
  v22 = v7;
  v8 = v7;
  if ( v7 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 24), &LockHandle);
    v10 = *(_QWORD **)(v8 + 8);
    v21 = (_QWORD *)(v8 + 8);
    if ( v10 == (_QWORD *)(v8 + 8) )
    {
LABEL_23:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      sub_140033E20(v8);
      if ( v6 )
        *a2 = v4;
      return 0LL;
    }
    v11 = (_QWORD *)(v8 + 8);
LABEL_7:
    KeAcquireInStackQueuedSpinLock(v10 + 7, &v18);
    v12 = (KSPIN_LOCK *)v10[4];
    if ( v12 == v10 + 4 )
      goto LABEL_21;
    v13 = v10 + 4;
    while ( 1 )
    {
      if ( *((_DWORD *)v12 - 16) == 1094997074 )
      {
        if ( (int)sub_140033D74(v12 - 8) >= 0 )
        {
          KeAcquireInStackQueuedSpinLock(v12 + 9, &v17);
          v14 = (__int64 *)v12[10];
          if ( v14 != (__int64 *)(v12 + 10) )
          {
            v15 = a1;
            do
            {
              v16 = *a2;
              if ( v15 )
              {
                if ( (unsigned int)v4 >= v16 )
                  goto LABEL_16;
                if ( (int)sub_1400066C0((__int64)(v14 - 8), 0LL, 0) >= 0 )
                {
                  *(_QWORD *)(a1 + 8 * v4) = v14 - 8;
                  v4 = (unsigned int)(v4 + 1);
                }
              }
              else
              {
                *a2 = v16 + 1;
              }
              v15 = a1;
LABEL_16:
              v14 = (__int64 *)*v14;
            }
            while ( v14 != (__int64 *)(v12 + 10) );
          }
          KeReleaseInStackQueuedSpinLock(&v17);
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[34]);
        }
        v13 = v10 + 4;
      }
      v12 = (KSPIN_LOCK *)*v12;
      if ( v12 == v13 )
      {
        v11 = v21;
LABEL_21:
        KeReleaseInStackQueuedSpinLock(&v18);
        v10 = (_QWORD *)*v10;
        if ( v10 == v11 )
        {
          v8 = v22;
          v6 = a1;
          goto LABEL_23;
        }
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
