/*
 * XREFs of sub_140042038 @ 0x140042038
 * Callers:
 *     sub_140041EA0 @ 0x140041EA0 (sub_140041EA0.c)
 * Callees:
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140033DA4 @ 0x140033DA4 (sub_140033DA4.c)
 *     sub_140033E20 @ 0x140033E20 (sub_140033E20.c)
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 *     sub_1400AFCB4 @ 0x1400AFCB4 (sub_1400AFCB4.c)
 *     sub_1400AFD68 @ 0x1400AFD68 (sub_1400AFD68.c)
 *     sub_1400AFDF4 @ 0x1400AFDF4 (sub_1400AFDF4.c)
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

void __fastcall sub_140042038(unsigned __int16 a1)
{
  __int16 v2; // r14
  __int16 v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *i; // r12
  _QWORD *v9; // rbx
  int v10; // eax
  _QWORD *j; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  __int64 v13; // rcx
  _QWORD *k; // rdi
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  __int16 v18; // [rsp+C0h] [rbp+48h]
  __int16 v19; // [rsp+C8h] [rbp+50h]
  _QWORD *v20; // [rsp+D0h] [rbp+58h]
  _QWORD *v21; // [rsp+D8h] [rbp+60h]

  v2 = a1 & 0xC3;
  v3 = a1 & 0x1FC;
  v18 = v2;
  v19 = a1 & 0x1FC;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v16, 0, sizeof(v16));
  memset(&v15, 0, sizeof(v15));
  v4 = sub_140033DA4();
  v21 = (_QWORD *)v4;
  v5 = (_QWORD *)v4;
  if ( !v4 )
    return;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 24), &LockHandle);
  v6 = (_QWORD *)v5[1];
  v20 = v5 + 1;
  if ( v6 == v5 + 1 )
    goto LABEL_35;
  do
  {
    KeAcquireInStackQueuedSpinLock(v6 + 7, &v16);
    v7 = v6 + 4;
    for ( i = (_QWORD *)v6[4]; i != v7; i = (_QWORD *)*i )
    {
      v9 = i - 8;
      v10 = *((_DWORD *)i - 16);
      if ( v10 == 1094997074 )
      {
        if ( (int)sub_140033D74((__int64)(i - 8)) < 0 )
          continue;
        if ( v2 )
          sub_1400AFDF4(i - 8, a1);
        if ( v3 )
        {
          KeAcquireInStackQueuedSpinLock(v9 + 17, &v15);
          for ( j = (_QWORD *)v9[18]; j != v9 + 18; j = (_QWORD *)*j )
            sub_14003E780((__int64)(j - 8), a1);
          KeReleaseInStackQueuedSpinLock(&v15);
          v2 = v18;
          v7 = v6 + 4;
        }
        if ( (a1 & 0x20) != 0 )
          *((_DWORD *)v9 + 1337) = 0;
        if ( (a1 & 0x40) != 0 )
          v9[669] = 0LL;
        v12 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v9[42];
        goto LABEL_30;
      }
      if ( v10 == 1314275652 && (int)sub_1400CA35C(i - 8) >= 0 )
      {
        if ( v2 )
          sub_1400AFD68(i - 8, a1);
        v13 = v9[142];
        if ( v13 )
        {
          sub_1400AFCB4(v13, a1);
        }
        else if ( (v9[52] & 0x40) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v9 + 147), 1u);
          for ( k = (_QWORD *)v9[161]; k != v9 + 161; k = (_QWORD *)*k )
            sub_1400AFCB4(k - 14, a1);
          ExReleaseResourceLite((PERESOURCE)(v9 + 147));
          KeLeaveCriticalRegion();
          v2 = v18;
          v7 = v6 + 4;
          v3 = v19;
        }
        v12 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v9[19];
LABEL_30:
        ExReleaseRundownProtectionCacheAware(v12);
        continue;
      }
    }
    KeReleaseInStackQueuedSpinLock(&v16);
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != v20 );
  v5 = v21;
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  sub_140033E20(v5);
}
