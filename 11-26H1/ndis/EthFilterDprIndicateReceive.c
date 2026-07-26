/*
 * XREFs of EthFilterDprIndicateReceive @ 0x140098150
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x140033720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1400612F0 (-ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z.c)
 *     ?ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1400B4314 (-ethFilterReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall EthFilterDprIndicateReceive(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  unsigned int Number; // r13d
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rbp
  int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // ebx
  int v35; // eax
  __int64 v36; // r14
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-44h]

  Number = KeGetPcr()->Prcb.Number;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v38 = Number;
  v12 = a1;
  if ( a1 && (*(_DWORD *)(a1[37] + 120) & 0x20000000) != 0 )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
    v13 = v12[41];
    if ( v13 && *(_BYTE *)(*(_QWORD *)(v13 + 24) + 56LL) < 6u )
    {
      if ( a5 >= 0xE && a8 || (v12[38] & 0xA0) != 0 )
      {
        ethFilterReceivePacketStats((struct _NDIS_MINIPORT_BLOCK *)v12[37], (unsigned __int8 *)a3, a8);
        v15 = v12[41];
        if ( v15 )
        {
          *(_BYTE *)((Number << 12) + *(_QWORD *)(v15 + 720)) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, int))(v15 + 128))(
            *(_QWORD *)(v15 + 32),
            a2,
            a4,
            a5,
            a6,
            a7,
            v14);
        }
      }
      goto LABEL_56;
    }
    if ( a5 >= 0xE && a8 )
    {
      if ( (*(_BYTE *)a3 & 1) == 0 )
      {
        v16 = *(_QWORD *)(v12[37] + 3152);
        if ( v16 )
        {
          v17 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v17 + v16 + 32);
        }
        v18 = *(_QWORD *)(v12[37] + 3152);
        if ( v18 )
        {
          v19 = 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v19 + v18 + 8) += a8;
          *(_QWORD *)(v19 + v18) += a8;
        }
        v20 = 0;
        if ( (v12[38] & 0xA4) != 0
          && (*(_DWORD *)((char *)v12 + 338) != *(_DWORD *)(a3 + 2) || *((_WORD *)v12 + 168) != *(_WORD *)a3) )
        {
          v20 = 1;
        }
        v21 = *v12;
        if ( *v12 )
        {
          do
          {
            v22 = *(_DWORD *)(v21 + 432);
            v23 = *(_QWORD *)(v21 + 424);
            if ( (v22 & 0xA0) != 0 || !v20 && (v22 & 1) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v21 + 128))(
                *(_QWORD *)(v21 + 32),
                a2,
                a4,
                a5,
                a6,
                a7,
                a8);
              *(_BYTE *)((Number << 12) + *(_QWORD *)(v21 + 720)) = 1;
            }
            v21 = v23;
          }
          while ( v23 );
LABEL_55:
          v12 = a1;
        }
        goto LABEL_56;
      }
      if ( *(_BYTE *)a3 == 0xFF
        && *(_BYTE *)(a3 + 1) == 0xFF
        && *(_BYTE *)(a3 + 2) == 0xFF
        && *(_BYTE *)(a3 + 3) == 0xFF
        && *(_BYTE *)(a3 + 4) == 0xFF
        && *(_BYTE *)(a3 + 5) == 0xFF )
      {
        v24 = 8;
        v25 = *(_QWORD *)(v12[37] + 3152);
        if ( v25 )
        {
          v26 = 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v26 + v25 + 16) += a8;
          *(_QWORD *)(v26 + v25) += a8;
        }
        v27 = *(_QWORD *)(v12[37] + 3152);
        if ( v27 )
        {
          v28 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v28 + v27 + 48);
        }
      }
      else
      {
        v24 = 2;
        v29 = *(_QWORD *)(v12[37] + 3152);
        if ( v29 )
        {
          v30 = 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v30 + v29 + 24) += a8;
          *(_QWORD *)(v30 + v29) += a8;
        }
        v31 = *(_QWORD *)(v12[37] + 3152);
        if ( v31 )
        {
          v32 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v32 + v31 + 40);
        }
      }
    }
    else
    {
      v24 = 32;
    }
    v33 = *v12;
    if ( !*v12 )
    {
LABEL_56:
      NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v12[36], &LockState);
      return;
    }
    v34 = v38;
    while ( 1 )
    {
      v35 = *(_DWORD *)(v33 + 432);
      v36 = *(_QWORD *)(v33 + 424);
      if ( (v35 & 0xA0) == 0 )
      {
        if ( v24 == 8 )
        {
          if ( (v35 & 8) == 0 )
            goto LABEL_54;
        }
        else if ( v24 != 2
               || (v35 & 4) == 0
               && ((v35 & 2) == 0
                || !ethFindMulticast(
                      *(_DWORD *)(v33 + 456),
                      *(struct _ETH_MULTICAST_WRAPPER **)(v33 + 448),
                      0LL,
                      (unsigned __int8 *const)a3)) )
        {
          goto LABEL_54;
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v33 + 128))(
        *(_QWORD *)(v33 + 32),
        a2,
        a4,
        a5,
        a6,
        a7,
        a8);
      *(_BYTE *)((v34 << 12) + *(_QWORD *)(v33 + 720)) = 1;
LABEL_54:
      v33 = v36;
      if ( !v36 )
        goto LABEL_55;
    }
  }
}
