/*
 * XREFs of RaidAdapterRemoveUnit @ 0x1400373E8
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitConvertToZombieUnit @ 0x1400A70D4 (RaidUnitConvertToZombieUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterRemoveUnit(__int64 a1, __int64 a2)
{
  KIRQL v2; // bp
  __int64 v5; // rbx
  unsigned int i; // esi
  __int64 (__fastcall *v7)(_QWORD *); // r12
  __int64 (__fastcall *v8)(__int64, unsigned __int64); // r13
  unsigned int v9; // ebx
  unsigned __int64 v10; // r14
  _QWORD **v11; // rsi
  _QWORD *j; // rbx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // ebx
  struct _KINTERRUPT *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  PKINTERRUPT *v22; // r14
  struct _KINTERRUPT *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 4433) )
  {
    v5 = *(_QWORD *)(a1 + 4416);
    v2 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 24));
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v5 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * i + 24));
    }
  }
  else
  {
    v23 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( v23 )
      v2 = KeAcquireInterruptSpinLock(v23);
  }
  v7 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
  v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
  v9 = *(_DWORD *)(a1 + 172);
  v10 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 104)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a2 + 104) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 104))) << 8);
  v11 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v10) % v9)
                  + *(_QWORD *)(a1 + 184));
  for ( j = *v11; ; j = (_QWORD *)*j )
  {
    if ( j == v11 )
      goto LABEL_10;
    v13 = v7(j);
    v14 = v8(v13, v10);
    if ( !v14 )
      break;
    if ( v14 < 0 )
      goto LABEL_10;
  }
  v15 = (_QWORD *)*j;
  if ( *(_QWORD **)(*j + 8LL) != j || (v16 = (_QWORD *)j[1], (_QWORD *)*v16 != j) )
LABEL_29:
    __fastfail(3u);
  *v16 = v15;
  v15[1] = v16;
  --*(_DWORD *)(a1 + 168);
LABEL_10:
  if ( *(_BYTE *)(a1 + 4433) )
  {
    v17 = *(_QWORD *)(a1 + 4416);
    if ( *(_DWORD *)(a1 + 4400) == 2 )
    {
      v18 = *(_DWORD *)(v17 + 4) - 1;
      if ( *(_DWORD *)(v17 + 4) != 1 )
      {
        v22 = (PKINTERRUPT *)(v17 + 48LL * v18 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v22, *(_BYTE *)v17);
          v22 -= 6;
          --v18;
        }
        while ( v18 );
      }
    }
    v19 = *(struct _KINTERRUPT **)(v17 + 24);
  }
  else
  {
    v19 = *(struct _KINTERRUPT **)(a1 + 864);
    if ( !v19 )
      goto LABEL_15;
  }
  KeReleaseInterruptSpinLock(v19, v2);
LABEL_15:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v20 = *(_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(v20 + 8) != a2 + 64 )
    goto LABEL_29;
  v21 = *(_QWORD **)(a2 + 72);
  if ( *v21 != a2 + 64 )
    goto LABEL_29;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  --*(_DWORD *)(a1 + 160);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
