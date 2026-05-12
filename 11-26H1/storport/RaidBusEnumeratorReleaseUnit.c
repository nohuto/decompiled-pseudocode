/*
 * XREFs of RaidBusEnumeratorReleaseUnit @ 0x140033D50
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B5E24 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidBusEnumeratorReleaseUnit(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  KIRQL v5; // r15
  __int64 v6; // rdi
  unsigned int i; // esi
  __int64 (__fastcall *v8)(_QWORD *); // r12
  __int64 (__fastcall *v9)(__int64, unsigned __int64); // r13
  unsigned int v10; // edi
  unsigned __int64 v11; // rbp
  _QWORD **v12; // rsi
  _QWORD *j; // rdi
  __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // edi
  struct _KINTERRUPT *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  PKINTERRUPT *v23; // rbp
  struct _KINTERRUPT *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KINTERRUPT **v26; // [rsp+80h] [rbp+8h]
  __int64 v27; // [rsp+88h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *a1;
  v27 = v3;
  if ( *(_BYTE *)(a2 + 92) )
  {
    v5 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_BYTE *)(v4 + 4433) )
    {
      v6 = *(_QWORD *)(v4 + 4416);
      v5 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v6 + 24));
      if ( *(_DWORD *)(v4 + 4400) == 2 )
      {
        for ( i = 1; i < *(_DWORD *)(v6 + 4); ++i )
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v6 + 48LL * i + 24));
        v3 = v27;
      }
      v26 = (struct _KINTERRUPT **)(v4 + 864);
    }
    else
    {
      v24 = *(struct _KINTERRUPT **)(v4 + 864);
      v26 = (struct _KINTERRUPT **)(v4 + 864);
      if ( v24 )
      {
        v5 = KeAcquireInterruptSpinLock(v24);
        v26 = (struct _KINTERRUPT **)(v4 + 864);
      }
    }
    v8 = *(__int64 (__fastcall **)(_QWORD *))(v4 + 192);
    v9 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v4 + 200);
    v10 = *(_DWORD *)(v4 + 172);
    v11 = (unsigned __int8)BYTE2(*(_DWORD *)(v3 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v3 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v3 + 104))) << 8);
    v12 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(v4 + 208))(v11) % v10)
                    + *(_QWORD *)(v4 + 184));
    for ( j = *v12; ; j = (_QWORD *)*j )
    {
      if ( j == v12 )
        goto LABEL_13;
      v14 = v8(j);
      v15 = v9(v14, v11);
      if ( !v15 )
        break;
      if ( v15 < 0 )
        goto LABEL_13;
    }
    v16 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j )
      goto LABEL_33;
    v17 = (_QWORD *)j[1];
    if ( (_QWORD *)*v17 != j )
      goto LABEL_33;
    *v17 = v16;
    v16[1] = v17;
    --*(_DWORD *)(v4 + 168);
LABEL_13:
    if ( *(_BYTE *)(v4 + 4433) )
    {
      v18 = *(_QWORD *)(v4 + 4416);
      if ( *(_DWORD *)(v4 + 4400) == 2 )
      {
        v19 = *(_DWORD *)(v18 + 4) - 1;
        if ( *(_DWORD *)(v18 + 4) != 1 )
        {
          v23 = (PKINTERRUPT *)(v18 + 48LL * v19 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v23, *(_BYTE *)v18);
            v23 -= 6;
            --v19;
          }
          while ( v19 );
        }
      }
      v20 = *(struct _KINTERRUPT **)(v18 + 24);
    }
    else
    {
      v20 = *v26;
      if ( !*v26 )
        goto LABEL_18;
    }
    KeReleaseInterruptSpinLock(v20, v5);
LABEL_18:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &LockHandle);
    v21 = *(_QWORD *)(v27 + 64);
    if ( *(_QWORD *)(v21 + 8) == v27 + 64 )
    {
      v22 = *(_QWORD **)(v27 + 72);
      if ( *v22 == v27 + 64 )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        --*(_DWORD *)(v4 + 160);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeCancelTimer((PKTIMER)(v27 + 1184));
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 744LL) = 0;
        return;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
}
