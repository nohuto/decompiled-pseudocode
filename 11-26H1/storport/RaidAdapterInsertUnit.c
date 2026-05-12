/*
 * XREFs of RaidAdapterInsertUnit @ 0x1400350E8
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitConvertToNormalUnit @ 0x1400A709C (RaidUnitConvertToNormalUnit.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterInsertUnit(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  KIRQL v6; // bp
  __int64 v7; // rbx
  unsigned int i; // edi
  __int64 (__fastcall *v9)(__int64 *); // r12
  __int64 *v10; // r14
  __int64 (__fastcall *v11)(__int64, __int64); // r13
  unsigned int (__fastcall *v12)(__int64); // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 *j; // rdi
  __int64 **v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  struct _KINTERRUPT *v20; // rcx
  PKINTERRUPT *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  struct _KINTERRUPT *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v4 = *(_QWORD **)(a1 + 152);
  v5 = a2 + 8;
  if ( *v4 != a1 + 144 )
    goto LABEL_15;
  *v5 = a1 + 144;
  a2[9] = v4;
  v6 = 0;
  *v4 = v5;
  *(_QWORD *)(a1 + 152) = v5;
  ++*(_DWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 4433) )
  {
    v7 = *(_QWORD *)(a1 + 4416);
    v6 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 24));
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v7 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 48LL * i + 24));
    }
  }
  else
  {
    v25 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( v25 )
      v6 = KeAcquireInterruptSpinLock(v25);
  }
  v9 = *(__int64 (__fastcall **)(__int64 *))(a1 + 192);
  v10 = a2 + 10;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 200);
  v12 = *(unsigned int (__fastcall **)(__int64))(a1 + 208);
  v13 = *(_DWORD *)(a1 + 172);
  v14 = v9(v10);
  v15 = 16LL * (v12(v14) % v13) + *(_QWORD *)(a1 + 184);
  for ( j = *(__int64 **)v15; ; j = (__int64 *)*j )
  {
    if ( j == (__int64 *)v15 )
    {
      ++*(_DWORD *)(a1 + 168);
      v17 = *(__int64 ***)(v15 + 8);
      if ( *v17 == (__int64 *)v15 )
      {
        *v10 = v15;
        v10[1] = (__int64)v17;
        *v17 = v10;
        *(_QWORD *)(v15 + 8) = v10;
        goto LABEL_9;
      }
LABEL_15:
      __fastfail(3u);
    }
    v22 = v9(v10);
    v23 = v9(j);
    v24 = v11(v23, v22);
    if ( !v24 )
      goto LABEL_9;
    if ( v24 < 0 )
      break;
  }
  *v10 = (__int64)j;
  v10[1] = j[1];
  j[1] = (__int64)v10;
  *(_QWORD *)v10[1] = v10;
  ++*(_DWORD *)(a1 + 168);
LABEL_9:
  if ( *(_BYTE *)(a1 + 4433) )
  {
    v18 = *(_QWORD *)(a1 + 4416);
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      v19 = *(_DWORD *)(v18 + 4) - 1;
      if ( *(_DWORD *)(v18 + 4) != 1 )
      {
        v21 = (PKINTERRUPT *)(v18 + 48LL * v19 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v21, *(_BYTE *)v18);
          v21 -= 6;
          --v19;
        }
        while ( v19 );
      }
    }
    v20 = *(struct _KINTERRUPT **)(v18 + 24);
LABEL_13:
    KeReleaseInterruptSpinLock(v20, v6);
  }
  else
  {
    v20 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( v20 )
      goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
