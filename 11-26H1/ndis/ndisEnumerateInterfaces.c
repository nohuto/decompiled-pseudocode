/*
 * XREFs of ndisEnumerateInterfaces @ 0x140179810
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x140043800 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(char *a1, size_t Size, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  char *v7; // r13
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rsi
  char *v10; // r14
  KSPIN_LOCK *p_SpinLock; // r12
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v13; // r12d
  unsigned int v14; // edx
  char *v15; // r14
  unsigned int Length; // eax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 result; // rax
  __int128 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  KIRQL v23; // [rsp+88h] [rbp+10h]
  unsigned int v24; // [rsp+90h] [rbp+18h]

  v4 = (unsigned int)Size;
  v21 = 0LL;
  v22 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v21);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x30 )
    return 3221225507LL;
  v24 = v4 - 48;
  v6 = (unsigned int)v4;
  memset(a1, 0, (unsigned int)v4);
  v7 = a1 + 16;
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v9 = ndisMiniDriverList;
  v23 = v8;
  if ( ndisMiniDriverList )
  {
    v10 = &a1[v4];
    do
    {
      p_SpinLock = &v9->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
      MiniportQueue = v9->MiniportQueue;
      if ( MiniportQueue )
      {
        v13 = v24;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient(
                 MiniportQueue->IfBlock->Compartment,
                 (const struct _NDIS_NSI_CLIENT_INFO *)&v21,
                 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v14 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 32;
            *((_DWORD *)a1 + 2) += v14;
            if ( v13 >= v14 )
            {
              ++*(_DWORD *)a1;
              v13 -= v14;
              v15 = &v10[-MiniportQueue->MiniportName.Length];
              *((_QWORD *)v7 + 1) = v15;
              Length = MiniportQueue->MiniportName.Length;
              *(_WORD *)v7 = Length;
              *((_WORD *)v7 + 1) = Length;
              memmove(v15, MiniportQueue->MiniportName.Buffer, Length);
              v17 = 0LL;
              if ( *((_QWORD *)v7 + 1) )
                v17 = *((_QWORD *)v7 + 1) - (_QWORD)a1;
              *((_QWORD *)v7 + 1) = v17;
              v10 = &v15[-MiniportQueue->pAdapterInstanceName->Length];
              *((_QWORD *)v7 + 3) = v10;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v7 + 8) = v18;
              *((_WORD *)v7 + 9) = v18;
              memmove(v10, MiniportQueue->pAdapterInstanceName->Buffer, v18);
              v19 = 0LL;
              if ( *((_QWORD *)v7 + 3) )
                v19 = *((_QWORD *)v7 + 3) - (_QWORD)a1;
              *((_QWORD *)v7 + 3) = v19;
              v7 += 32;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v24 = v13;
        p_SpinLock = &v9->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v9 = v9->NextDriver;
    }
    while ( v9 );
    v6 = v4;
    v8 = v23;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  result = v6 - 48 < (unsigned __int64)*((unsigned int *)a1 + 2) ? 0x80000005 : 0;
  *a3 = v4;
  return result;
}
