/*
 * XREFs of NdisMAllocatePort @ 0x14006A150
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisAddPortToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_BLOCK@@@Z @ 0x1400AA954 (-ndisAddPortToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_BLOCK@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  int v2; // ebp
  PNDIS_PORT_CHARACTERISTICS v3; // rsi
  int v5; // edx
  NDIS_STATUS v6; // edi
  __int64 Pool2; // rax
  __int64 v8; // r14
  _BYTE *v9; // r13
  unsigned int v10; // r12d
  size_t v11; // rdi
  __int64 i; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // r8
  char v15; // dl
  unsigned int j; // ecx
  unsigned int v17; // r12d
  KIRQL v18; // dl
  _BYTE *v19; // rax
  _BYTE *v20; // r15
  KIRQL v21; // dl
  unsigned int Flags; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  NDIS_STATUS v26; // eax
  KIRQL v27; // dl
  KSPIN_LOCK *v28; // rcx
  unsigned __int8 v30; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  v30 = 0;
  v3 = PortCharacteristics;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PortCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PortCharacteristics,
      23,
      10,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)NdisMiniportHandle);
  }
  if ( !(unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u) )
  {
    v6 = -1073676286;
    goto LABEL_37;
  }
  Pool2 = ExAllocatePool2(64LL, 88LL, 1869628494LL);
  v8 = Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
    goto LABEL_35;
  }
  *(_DWORD *)(Pool2 + 16) = 1;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, &v30);
  if ( (unsigned int)(*((_DWORD *)NdisMiniportHandle + 687) + 1) > 0x2AAAAAA )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
LABEL_9:
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v30);
    v6 = -1073741670;
    goto LABEL_35;
  }
  v9 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
  v10 = *((_DWORD *)NdisMiniportHandle + 686);
  v11 = v10;
  if ( v9 )
  {
    for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
    {
      v13 = v9[i];
      v14 = (unsigned int)i;
      if ( v13 != 0xFF )
      {
        v15 = 1;
        for ( j = 0; j < 8; ++j )
        {
          if ( (v13 & (unsigned __int8)v15) == 0 )
          {
            v9[v14] = v15 | v13;
            v2 += j;
            goto LABEL_30;
          }
          v15 *= 2;
        }
        break;
      }
      v2 += 8;
    }
  }
  if ( 8 * v10 + 1 >= 0x1000000 )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    goto LABEL_9;
  }
  v17 = v10 + 1;
  if ( 8 * v17 + 1 >= (unsigned int)v11 )
  {
    v19 = (_BYTE *)ExAllocatePool2(66LL, v17, 1869628494LL);
    v20 = v19;
    if ( v19 )
    {
      if ( v9 )
      {
        memmove(v19, v9, v11);
        v20[v11] = 1;
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        *v19 = 3;
        v2 = 1;
      }
      *((_QWORD *)NdisMiniportHandle + 342) = v20;
      *((_DWORD *)NdisMiniportHandle + 686) = v17;
LABEL_30:
      Flags = v3->Flags;
      v3->PortNumber = v2;
      v23 = *(_OWORD *)&v3->MediaConnectState;
      *(_OWORD *)(v8 + 24) = *(_OWORD *)&v3->Header.Type;
      v24 = *(_OWORD *)&v3->RcvLinkSpeed;
      *(_OWORD *)(v8 + 40) = v23;
      v25 = *(_OWORD *)&v3->RcvControlState;
      *(_OWORD *)(v8 + 56) = v24;
      *(_OWORD *)(v8 + 72) = v25;
      if ( (Flags & 1) != 0 )
      {
        *(_DWORD *)(v8 + 68) = *((_DWORD *)NdisMiniportHandle + 826);
        *(_DWORD *)(v8 + 72) = *((_DWORD *)NdisMiniportHandle + 827);
        *(_DWORD *)(v8 + 76) = *((_DWORD *)NdisMiniportHandle + 828);
        *(_DWORD *)(v8 + 80) = *((_DWORD *)NdisMiniportHandle + 829);
      }
      v26 = ndisAddPortToList((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, (struct _NDIS_PORT_BLOCK *)v8);
      v27 = v30;
      v6 = v26;
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      v28 = (KSPIN_LOCK *)((char *)NdisMiniportHandle + 96);
      if ( !v26 )
      {
        *(_DWORD *)(v8 + 16) = 2;
        KeReleaseSpinLock(v28, v27);
        goto LABEL_37;
      }
      KeReleaseSpinLock(v28, v27);
    }
    else
    {
      v21 = v30;
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v21);
      v6 = -1073741670;
    }
  }
  else
  {
    v18 = v30;
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v18);
    v6 = -1073676267;
  }
LABEL_35:
  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u);
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0);
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x17u,
      0xBu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)NdisMiniportHandle,
      v6,
      v2);
  return v6;
}
