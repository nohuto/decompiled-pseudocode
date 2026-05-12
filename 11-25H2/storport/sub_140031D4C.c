/*
 * XREFs of sub_140031D4C @ 0x140031D4C
 * Callers:
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_14009E2A8 @ 0x14009E2A8 (sub_14009E2A8.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140031D4C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  KIRQL v6; // bp
  __int64 v7; // rbx
  unsigned int i; // esi
  __int64 (__fastcall *v9)(__int64 *); // r12
  __int64 *v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64); // r13
  unsigned int (__fastcall *v12)(__int64); // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 *j; // r14
  __int64 **v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // ebx
  struct _KINTERRUPT *v19; // rcx
  PKINTERRUPT *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  struct _KINTERRUPT *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v4 = *(_QWORD **)(a1 + 152);
  v5 = a2 + 8;
  if ( *v4 != a1 + 144 )
    goto LABEL_28;
  *v5 = a1 + 144;
  a2[9] = v4;
  v6 = 0;
  *v4 = v5;
  *(_QWORD *)(a1 + 152) = v5;
  ++*(_DWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 4369) )
  {
    v7 = *(_QWORD *)(a1 + 4352);
    v6 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 24));
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v7 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 48LL * i + 24));
    }
  }
  else
  {
    v24 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v24 )
      v6 = KeAcquireInterruptSpinLock(v24);
  }
  v9 = *(__int64 (__fastcall **)(__int64 *))(a1 + 192);
  v10 = a2 + 10;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 200);
  v12 = *(unsigned int (__fastcall **)(__int64))(a1 + 208);
  v13 = v9(a2 + 10);
  v14 = *(_QWORD *)(a1 + 184) + 16LL * (v12(v13) % *(_DWORD *)(a1 + 172));
  for ( j = *(__int64 **)v14; ; j = (__int64 *)*j )
  {
    if ( j == (__int64 *)v14 )
    {
      ++*(_DWORD *)(a1 + 168);
      v16 = *(__int64 ***)(v14 + 8);
      if ( *v16 == (__int64 *)v14 )
      {
        *v10 = v14;
        v10[1] = (__int64)v16;
        *v16 = v10;
        *(_QWORD *)(v14 + 8) = v10;
        goto LABEL_9;
      }
LABEL_28:
      __fastfail(3u);
    }
    v21 = v9(v10);
    v22 = v9(j);
    v23 = v11(v22, v21);
    if ( !v23 )
      goto LABEL_9;
    if ( v23 < 0 )
      break;
  }
  *v10 = (__int64)j;
  v10[1] = j[1];
  j[1] = (__int64)v10;
  *(_QWORD *)v10[1] = v10;
  ++*(_DWORD *)(a1 + 168);
LABEL_9:
  if ( *(_BYTE *)(a1 + 4369) )
  {
    v17 = *(_QWORD *)(a1 + 4352);
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v18 = *(_DWORD *)(v17 + 4) - 1;
      if ( *(_DWORD *)(v17 + 4) != 1 )
      {
        v20 = (PKINTERRUPT *)(v17 + 48LL * v18 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v20, *(_BYTE *)v17);
          v20 -= 6;
          --v18;
        }
        while ( v18 );
      }
    }
    v19 = *(struct _KINTERRUPT **)(v17 + 24);
LABEL_13:
    KeReleaseInterruptSpinLock(v19, v6);
  }
  else
  {
    v19 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v19 )
      goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
