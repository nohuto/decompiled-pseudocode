/*
 * XREFs of sub_140031FD4 @ 0x140031FD4
 * Callers:
 *     sub_14009281C @ 0x14009281C (sub_14009281C.c)
 *     sub_14009E2E0 @ 0x14009E2E0 (sub_14009E2E0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140031FD4(__int64 a1, __int64 a2)
{
  KIRQL v2; // bp
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 (__fastcall *v7)(_QWORD *); // r12
  __int64 (__fastcall *v8)(__int64, unsigned __int64); // r13
  unsigned __int64 v9; // r14
  _QWORD **v10; // rsi
  _QWORD *j; // rdi
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // edi
  struct _KINTERRUPT *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  PKINTERRUPT *v21; // r14
  struct _KINTERRUPT *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 4369) )
  {
    v5 = *(_QWORD *)(a1 + 4352);
    v2 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
    }
  }
  else
  {
    v22 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( v22 )
      v2 = KeAcquireInterruptSpinLock(v22);
  }
  v7 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
  v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
  v9 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 104)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a2 + 104) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 104))) << 8);
  v10 = (_QWORD **)(*(_QWORD *)(a1 + 184)
                  + 16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v9) % *(_DWORD *)(a1 + 172)));
  for ( j = *v10; ; j = (_QWORD *)*j )
  {
    if ( j == v10 )
      goto LABEL_10;
    v12 = v7(j);
    v13 = v8(v12, v9);
    if ( !v13 )
      break;
    if ( v13 < 0 )
      goto LABEL_10;
  }
  v14 = (_QWORD *)*j;
  if ( *(_QWORD **)(*j + 8LL) != j || (v15 = (_QWORD *)j[1], (_QWORD *)*v15 != j) )
LABEL_29:
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  --*(_DWORD *)(a1 + 168);
LABEL_10:
  if ( *(_BYTE *)(a1 + 4369) )
  {
    v16 = *(_QWORD *)(a1 + 4352);
    if ( *(_DWORD *)(a1 + 4336) == 2 )
    {
      v17 = *(_DWORD *)(v16 + 4) - 1;
      if ( *(_DWORD *)(v16 + 4) != 1 )
      {
        v21 = (PKINTERRUPT *)(v16 + 48LL * v17 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v21, *(_BYTE *)v16);
          v21 -= 6;
          --v17;
        }
        while ( v17 );
      }
    }
    v18 = *(struct _KINTERRUPT **)(v16 + 24);
  }
  else
  {
    v18 = *(struct _KINTERRUPT **)(a1 + 848);
    if ( !v18 )
      goto LABEL_15;
  }
  KeReleaseInterruptSpinLock(v18, v2);
LABEL_15:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v19 = *(_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(v19 + 8) != a2 + 64 )
    goto LABEL_29;
  v20 = *(_QWORD **)(a2 + 72);
  if ( *v20 != a2 + 64 )
    goto LABEL_29;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  --*(_DWORD *)(a1 + 160);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
